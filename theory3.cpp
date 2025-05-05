#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;
    static int totalObjects;

    void simplify() {
        feet += inches / 12;
        inches = inches % 12;
    }

public:
    Distance(int f = 0, int i = 0) {
        feet = f;
        inches = i;
        simplify();
        totalObjects++;
    }

    Distance(const Distance& d) {
        feet = d.feet;
        inches = d.inches;
        totalObjects++;
    }

    ~Distance() {
        totalObjects--;
    }

    void input() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
        simplify();
    }

    void display() const {
        cout << feet << "'-" << inches << "\"" << endl;
    }

    static int getTotal() {
        return totalObjects;
    }

    Distance operator+(const Distance& d) const {
        return Distance(feet + d.feet, inches + d.inches);
    }

    Distance& operator+=(const Distance& d) {
        feet += d.feet;
        inches += d.inches;
        simplify();
        return *this;
    }

    bool operator<(const Distance& d) const {
        if (feet < d.feet) return true;
        if (feet == d.feet && inches < d.inches) return true;
        return false;
    }

    Distance& operator++() {
        inches++;
        simplify();
        return *this;
    }

    Distance operator++(int) {
        Distance temp = *this;
        inches++;
        simplify();
        return temp;
    }

    Distance& operator--() {
        if (inches == 0) {
            feet--;
            inches = 11;
        } else {
            inches--;
        }
        return *this;
    }

    Distance operator--(int) {
        Distance temp = *this;
        --(*this);
        return temp;
    }

    friend ostream& operator<<(ostream& out, const Distance& d);
    friend istream& operator>>(istream& in, Distance& d);
};

int Distance::totalObjects = 0;

ostream& operator<<(ostream& out, const Distance& d) {
    out << d.feet << "'-" << d.inches << "\"";
    return out;
}

istream& operator>>(istream& in, Distance& d) {
    cout << "Enter feet: ";
    in >> d.feet;
    cout << "Enter inches: ";
    in >> d.inches;
    d.simplify();
    return in;
}

int main() {
    Distance d1, d2(5, 9), d3;

    cout << "Enter d1: "<<endl;
    d1.input();

    cout << "d1 = ";
    d1.display();

    cout << "d2 = " << d2 << endl;

    d3 = d1 + d2;
    cout << "d3 (d1 + d2) = " << d3 << endl;

    d1 += d2;
    cout << "d1 after d1 += d2 = " << d1 << endl;

    if (d1 < d2)
        cout << "d1 is less than d2"<<endl;
    else
        cout << "d1 is greater than or equal to d2"<<endl;

    cout << "Prefix ++d1: " << ++d1 << endl;
    cout << "Postfix d1++: " << d1++ << endl;
    cout << "After postfix, d1: " << d1 << endl;

    cout << "Prefix --d2: " << --d2 << endl;
    cout << "Postfix d2--: " << d2-- << endl;
    cout << "After postfix, d2: " << d2 << endl;

    cout << "\nTotal Distance objects: " << Distance::getTotal() << endl;

    return 0;
}

