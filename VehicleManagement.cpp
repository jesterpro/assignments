#include <iostream>
#include <string>
using namespace std;

class Vehicle {
private:
    string brand;
    string model;
    int year;

public:
    Vehicle(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
    }

    string GetInfo() {
        return "Brand: " + brand + ", Model: " + model + ", Year: " + to_string(year);
    }
};

class Car : public Vehicle {
private:
    int numDoors;

public:
    Car(string b, string m, int y, int doors) : Vehicle(b, m, y) {
        numDoors = doors;
    }

    string GetInfo() {
        return Vehicle::GetInfo() + ", Doors: " + to_string(numDoors);
    }
};

class Motorcycle : public Vehicle {
private:
    bool hasSidecar;

public:
    Motorcycle(string b, string m, int y, bool sidecar) : Vehicle(b, m, y) {
        hasSidecar = sidecar;
    }
    string GetInfo() {
        string sidecarInfo = hasSidecar ? "Yes" : "No";
        return Vehicle::GetInfo() + ", Sidecar: " + sidecarInfo;
    }
};

int main() {
    cout << "   Vehicle Management System   " << endl << endl;
    Car myCar("Toyota", "Camry", 2022, 4);
    cout << "Car Information:" << endl;
    cout << myCar.GetInfo() << endl << endl;
    Motorcycle myMotorcycle("Harley-Davidson", "Street 750", 2021, true);
    cout << "Motorcycle Information:" << endl;
    cout << myMotorcycle.GetInfo() << endl << endl;

    return 0;
}
