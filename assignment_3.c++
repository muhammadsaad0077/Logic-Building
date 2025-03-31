#include <iostream>
#include <ctime>

using namespace std;

struct Vehicle {
    int id;
    double fuel;
    time_t lastUpdate;
    Vehicle* next;

    Vehicle(int vId, double vFuel) {
        id = vId;
        fuel = vFuel;
        time(&lastUpdate);
        next = nullptr;
    }
};

struct Region {
    string name;
    Vehicle* head;

    Region(string rName) {
        name = rName;
        head = nullptr;
    }

    void addVehicle(int id, double fuel) {
        Vehicle* newVehicle = new Vehicle(id, fuel);
        
        if (!head || head->fuel > fuel) {
            newVehicle->next = head;
            head = newVehicle;
        } else {
            Vehicle* temp = head;
            while (temp->next && temp->next->fuel <= fuel)
                temp = temp->next;
            newVehicle->next = temp->next;
            temp->next = newVehicle;
        }
    }

    Vehicle* findLowestFuelVehicle() {
        return head;
    }

    void removeInactiveVehicles(int hours) {
        time_t now;
        time(&now);
        while (head && difftime(now, head->lastUpdate) > hours * 3600) {
            Vehicle* temp = head;
            head = head->next;
            delete temp;
        }

        if (!head) return;
        Vehicle* temp = head;
        while (temp->next) {
            if (difftime(now, temp->next->lastUpdate) > hours * 3600) {
                Vehicle* toDelete = temp->next;
                temp->next = toDelete->next;
                delete toDelete;
            } else {
                temp = temp->next;
            }
        }
    }

    void printFleetStatus() {
        cout << "Region: " << name << "\n";
        Vehicle* temp = head;
        while (temp) {
            cout << "Vehicle ID: " << temp->id << ", Fuel: " << temp->fuel << "\n";
            temp = temp->next;
        }
        cout << "-----------------\n";
    }

    ~Region() {
        while (head) {
            Vehicle* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

struct FleetManager {
    Region** regions;
    int regionCount;

    FleetManager() {
        regions = nullptr;
        regionCount = 0;
    }

    void addRegion(string name) {
        Region** newRegions = new Region*[regionCount + 1];
        for (int i = 0; i < regionCount; i++)
            newRegions[i] = regions[i];

        newRegions[regionCount] = new Region(name);
        delete[] regions;
        regions = newRegions;
        regionCount++;
    }

    Region* getRegion(string name) {
        for (int i = 0; i < regionCount; i++) {
            if (regions[i]->name == name)
                return regions[i];
        }
        return nullptr;
    }

    void printAllRegions() {
        for (int i = 0; i < regionCount; i++)
            regions[i]->printFleetStatus();
    }

    ~FleetManager() {
        for (int i = 0; i < regionCount; i++)
            delete regions[i];
        delete[] regions;
    }
};

int main() {
    FleetManager fleet;

    fleet.addRegion("North");
    fleet.addRegion("South");

    fleet.getRegion("North")->addVehicle(101, 50.5);
    fleet.getRegion("North")->addVehicle(102, 30.2);
    fleet.getRegion("North")->addVehicle(103, 70.0);
    
    fleet.getRegion("South")->addVehicle(201, 60.1);
    fleet.getRegion("South")->addVehicle(202, 20.4);
    fleet.getRegion("South")->addVehicle(203, 40.8);

    cout << "\nFleet Status Before Removing Inactive Vehicles:\n";
    fleet.printAllRegions();

    fleet.getRegion("North")->removeInactiveVehicles(0);
    fleet.getRegion("South")->removeInactiveVehicles(0);

    cout << "\nFleet Status After Removing Inactive Vehicles:\n";
    fleet.printAllRegions();

    return 0;
}
