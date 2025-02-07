#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Product {
private:
    int id;
    string name;
    double price;
    int quantity;

public:
    Product() {}

    Product(int id, string name, double price, int quantity) {
        this->id = id;
        this->name = name;
        this->price = price;
        this->quantity = quantity;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name
             << ", Price: $" << price << ", Quantity: " << quantity << endl;
    }

    int getId() { return id; }
    string getName() { return name; }
    double getPrice() { return price; }
    int getQuantity() { return quantity; }

    void setName(string newName) { name = newName; }
    void setPrice(double newPrice) { price = newPrice; }
    void setQuantity(int newQuantity) { quantity = newQuantity; }

    // Save product to file
    void saveToFile(ofstream &file) {
        file << id << " " << name << " " << price << " " << quantity << endl;
    }

    // Load product from file
    void loadFromFile(ifstream &file) {
        file >> id >> name >> price >> quantity;
    }
};

class Inventory {
private:
    vector<Product> products;

    void saveToFile() {
        ofstream file("inventory.txt");
        for (auto &p : products) {
            p.saveToFile(file);
        }
        file.close();
    }

    void loadFromFile() {
        products.clear();
        ifstream file("inventory.txt");
        Product temp;
        while (file) {
            temp.loadFromFile(file);
            if (file) products.push_back(temp);
        }
        file.close();
    }

public:
    Inventory() { loadFromFile(); }

    void addProduct() {
        int id, quantity;
        string name;
        double price;

        cout << "Enter Product ID: ";
        cin >> id;
        cout << "Enter Product Name: ";
        cin >> name;
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Quantity: ";
        cin >> quantity;

        products.push_back(Product(id, name, price, quantity));
        saveToFile();
        cout << "Product added successfully!\n";
    }

    void displayProducts() {
        if (products.empty()) {
            cout << "No products available.\n";
            return;
        }
        cout << "----- Inventory -----\n";
        for (auto &p : products) {
            p.display();
        }
    }

    void searchProduct() {
        int searchId;
        cout << "Enter Product ID to search: ";
        cin >> searchId;

        for (auto &p : products) {
            if (p.getId() == searchId) {
                cout << "Product Found:\n";
                p.display();
                return;
            }
        }
        cout << "Product not found!\n";
    }

    void updateProduct() {
        int updateId;
        cout << "Enter Product ID to update: ";
        cin >> updateId;

        for (auto &p : products) {
            if (p.getId() == updateId) {
                string newName;
                double newPrice;
                int newQuantity;

                cout << "Enter new name: ";
                cin >> newName;
                cout << "Enter new price: ";
                cin >> newPrice;
                cout << "Enter new quantity: ";
                cin >> newQuantity;

                p.setName(newName);
                p.setPrice(newPrice);
                p.setQuantity(newQuantity);
                saveToFile();

                cout << "Product updated successfully!\n";
                return;
            }
        }
        cout << "Product not found!\n";
    }

    void deleteProduct() {
        int deleteId;
        cout << "Enter Product ID to delete: ";
        cin >> deleteId;

        for (auto it = products.begin(); it != products.end(); ++it) {
            if (it->getId() == deleteId) {
                products.erase(it);
                saveToFile();
                cout << "Product deleted successfully!\n";
                return;
            }
        }
        cout << "Product not found!\n";
    }
};

int main() {
    Inventory inventory;
    int choice;

    while (true) {
        cout << "\n===== Inventory Management System =====\n";
        cout << "1. Add Product\n";
        cout << "2. Display Products\n";
        cout << "3. Search Product\n";
        cout << "4. Update Product\n";
        cout << "5. Delete Product\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: inventory.addProduct(); break;
            case 2: inventory.displayProducts(); break;
            case 3: inventory.searchProduct(); break;
            case 4: inventory.updateProduct(); break;
            case 5: inventory.deleteProduct(); break;
            case 6: cout << "Exiting...\n"; return 0;
            default: cout << "Invalid choice! Please try again.\n";
        }
    }
}
