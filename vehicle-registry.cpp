#include <iostream>
#include <cstring>
using namespace std;

class Vehicle
{
private:
    int vehicleID;
    int Year;
    char vehicleName[50];
    char manufacturer[50];
    char model[50];

public:
    static int totalvehicles;

    Vehicle(int number, char name[], char manu[], char mod[], int vehicleYear)
    {
        vehicleID = number;
        Year = vehicleYear;

        totalvehicles++;
        strcpy(vehicleName, name);
        strcpy(manufacturer, manu);
        strcpy(model, mod);
    }

    // setter
    void setvehicleID(int number)
    {
        vehicleID = number;
    }

    void setYear(int vehicleYear)
    {
        Year = vehicleYear;
    }

    void setvehicleName(char name[])
    {
        strcpy(vehicleName, name);
    }

    void setmanufacturer(char manu[])
    {
        strcpy(manufacturer, manu);
    }

    void setmodel(char mod[])
    {
        strcpy(model, mod);
    }

    // getter

    int getvehicleID()
    {
        return vehicleID;
    }
    int getYear()
    {
        return Year;
    }

    char *getvehicleName()
    {
        return vehicleName;
    }

    char *getmanufacturer()
    {
        return manufacturer;
    }

    char *getmodel()
    {
        return model;
    }

    Vehicle()
    {
        totalvehicles++;
    }
    ~Vehicle()
    {
        totalvehicles--;
    }
};

int Vehicle::totalvehicles = 0;

class Car : public Vehicle
{
private:
    char fuelType[20];

public:
    Car() : Vehicle()
    {
    }

    Car(int number, char name[], char manu[], char mod[], int vehicleYear, char fuel[]) : Vehicle(number, name, manu, mod, vehicleYear)
    {
        strcpy(fuelType, fuel);
    }
    void setfuelType(char fuel[])
    {
        strcpy(fuelType, fuel);
    }

    char *getfuelType()
    {
        return fuelType;
    }

    void inputCarDetails()
{
    int number;
    cout << "Enter VehicleId: ";
    cin >> number;
    cin.ignore();

    setvehicleID(number);

    char name[50];
    cout << "Enter Car Name: ";
    cin.getline(name, 50);
    setvehicleName(name);

    char manu[50];
    cout << "Enter Car Manufacturer: ";
    cin.getline(manu, 50);
    setmanufacturer(manu);

    char mod[50];
    cout << "Enter Car Model: ";
    cin.getline(mod, 50);
    setmodel(mod);

    int vehicleYear;
    cout << "Enter Car Year: ";
    cin >> vehicleYear;
    cin.ignore();
    setYear(vehicleYear);

    char fuel[20];
    cout << "Enter Car FuelType: ";
    cin.getline(fuel, 20);
    setfuelType(fuel);
}
    void displayCarDetails()
    {
        cout << "VehicleID: " << getvehicleID() << endl;
        cout << "Car Name: " << getvehicleName() << endl;
        cout << "Car Manufacturer: " << getmanufacturer() << endl;
        cout << "Car Model: " << getmodel() << endl;
        cout << "Car Year: " << getYear() << endl;
        cout << "Car FuelType: " << getfuelType() << endl;
    }
};

class Sedan : public Car
{
public:
    Sedan() : Car()
    {
    }

    Sedan(int number, char name[], char manu[], char mod[],
          int vehicleYear, char fuel[])
        : Car(number, name, manu, mod, vehicleYear, fuel)
    {
    }

    void inputSedanDetails()
    {
        int number;
        cout << "Enter VehicleId: ";
        cin >> number;
        setvehicleID(number);

        char name[50];
        cout << "Enter Sedan Name: ";
        cin >> name;
        setvehicleName(name);

        char manu[50];
        cout << "Enter Sedan Manufacturer: ";
        cin >> manu;
        setmanufacturer(manu);

        char mod[50];
        cout << "Enter Sedan Model: ";
        cin >> mod;
        setmodel(mod);

        int vehicleYear;
        cout << "Enter Sedan Year: ";
        cin >> vehicleYear;
        setYear(vehicleYear);

        char fuel[20];
        cout << "Enter Sedan FuelType: ";
        cin >> fuel;
        setfuelType(fuel);
    }

    void displaySedanDetails()
    {
        cout << "VehicleID: " << getvehicleID() << endl;
        cout << "Sedan Name: " << getvehicleName() << endl;
        cout << "Sedan Manufacturer: " << getmanufacturer() << endl;
        cout << "Sedan Model: " << getmodel() << endl;
        cout << "Sedan Year: " << getYear() << endl;
        cout << "Sedan FuelType: " << getfuelType() << endl;
    }
};
class SUV : public Car
{
public:
    SUV() : Car()
    {
    }

    SUV(int number, char name[], char manu[], char mod[],
        int vehicleYear, char fuel[])
        : Car(number, name, manu, mod, vehicleYear, fuel)
    {
    }

    void inputSUVDetails()
    {
        int number;
        cout << "Enter VehicleId: ";
        cin >> number;
        setvehicleID(number);

        char name[50];
        cout << "Enter SUV Name: ";
        cin >> name;
        setvehicleName(name);

        char manu[50];
        cout << "Enter SUV Manufacturer: ";
        cin >> manu;
        setmanufacturer(manu);

        char mod[50];
        cout << "Enter SUV Model: ";
        cin >> mod;
        setmodel(mod);

        int vehicleYear;
        cout << "Enter SUV Year: ";
        cin >> vehicleYear;
        setYear(vehicleYear);

        char fuel[20];
        cout << "Enter SUV FuelType: ";
        cin >> fuel;
        setfuelType(fuel);
    }

    void displaySUVDetails()
    {
        cout << "VehicleID: " << getvehicleID() << endl;
        cout << "SUV Name: " << getvehicleName() << endl;
        cout << "SUV Manufacturer: " << getmanufacturer() << endl;
        cout << "SUV Model: " << getmodel() << endl;
        cout << "SUV Year: " << getYear() << endl;
        cout << "SUV FuelType: " << getfuelType() << endl;
    }
};

class ElectricCar : public Car
{
private:
    int batteryCapacity;

public:
    ElectricCar() : Car()
    {
    }
    ElectricCar(int number, char name[], char manu[], char mod[], int vehicleYear, char fuel[], int battery)
        : Car(number, name, manu, mod, vehicleYear, fuel)
    {
        batteryCapacity = battery;
    }

    void setbatteryCapacity(int battery)
    {
        batteryCapacity = battery;
    }

    int getbatteryCapacity()
    {
        return batteryCapacity;
    }
    void inputElectricCarDetails()
{
    int number;
    cout << "Enter VehicleId: ";
    cin >> number;
    cin.ignore();
    setvehicleID(number);

    char name[50];
    cout << "Enter Car Name: ";
    cin.getline(name, 50);
    setvehicleName(name);

    char manu[50];
    cout << "Enter Car Manufacturer: ";
    cin.getline(manu, 50);
    setmanufacturer(manu);

    char mod[50];
    cout << "Enter Car Model: ";
    cin.getline(mod, 50);
    setmodel(mod);

    int vehicleYear;
    cout << "Enter Car Year: ";
    cin >> vehicleYear;
    cin.ignore();
    setYear(vehicleYear);

    char fuel[20];
    cout << "Enter Car FuelType: ";
    cin.getline(fuel, 20);
    setfuelType(fuel);

    int battery;
    cout << "Enter Battery Capacity: ";
    cin >> battery;
    setbatteryCapacity(battery);
}

    void displayElectricCarDetails()
    {
        cout << "VehicleID: " << getvehicleID() << endl;
        cout << "Car Name: " << getvehicleName() << endl;
        cout << "Car Manufacturer: " << getmanufacturer() << endl;
        cout << "Car Model: " << getmodel() << endl;
        cout << "Car Year: " << getYear() << endl;
        cout << "Car FuelType: " << getfuelType() << endl;
        cout << "Battery Capacity in kW: " << getbatteryCapacity() << endl;
    }
};

class SportsCar : public ElectricCar
{
private:
    int topSpeed;

public:
    SportsCar() : ElectricCar()
    {
    }

    SportsCar(int number, char name[], char manu[], char mod[],
              int vehicleYear, char fuel[], int battery, int Speed)
        : ElectricCar(number, name, manu, mod, vehicleYear, fuel, battery)
    {
        topSpeed = Speed;
    }

    void setSpeed(int Speed)
    {
        topSpeed = Speed;
    }

    int getSpeed()
    {
        return topSpeed;
    }

    void inputSportsCarDetails()
    {
        int Speed;
        cout << "Enter Car Top Speed in km/h : ";
        cin >> Speed;
        setSpeed(Speed);
    }

    void displaySportCarDetails()
    {
        cout << "Top Speed: " << getSpeed() << " km/h" << endl;
    }
};

class Aircraft
{
private:
    int flightRange;
    int aircraftID;

public:
    Aircraft()
    {
    }

    Aircraft(int range)
    {
        flightRange = range;
    }

    void setRange(int range)
    {
        flightRange = range;
    }

    int getRange()
    {
        return flightRange;
    }
    void setAircraftID(int id)
    {
        aircraftID = id;
    }

    int getAircraftID()
    {
        return aircraftID;
    }
    void inputAircraftDetails()
    {
        int id;
        cout << "Enter Aircraft ID: ";
        cin >> id;
        setAircraftID(id);

        int flightRange;
        cout << "Enter Flight Range: ";
        cin >> flightRange;
        setRange(flightRange);
    }

    void displayAircraftDetails()
    {
        cout << "Aircraft ID: " << getAircraftID() << endl;
        cout << "Flight Range: " << getRange() << " in miles" << endl;
    }
};

class FlyingCar : public Car, public Aircraft
{
public:
    FlyingCar() : Car(), Aircraft()
    {
    }
    FlyingCar(int number, char name[], char manu[], char mod[],
              int vehicleYear, char fuel[], int flightRange)
        : Car(number, name, manu, mod, vehicleYear, fuel),
          Aircraft(flightRange)
    {
    }

    void inputFlyingCarDetails()
    {
        int number;
        cout << "Enter VehicleId: ";
        cin >> number;
        setvehicleID(number);

        char name[50];
        cout << "Enter FlyingCar Name: ";
        cin >> name;
        setvehicleName(name);

        char manu[50];
        cout << "Enter FlyingCar Manufacturer: ";
        cin >> manu;
        setmanufacturer(manu);

        char mod[50];
        cout << "Enter FlyingCar Model: ";
        cin >> mod;
        setmodel(mod);

        int vehicleYear;
        cout << "Enter FlyingCar Year: ";
        cin >> vehicleYear;
        setYear(vehicleYear);

        char fuel[20];
        cout << "Enter FlyingCar FuelType: ";
        cin >> fuel;
        setfuelType(fuel);

        int flightRange;
        cout << "Enter Flight Range: ";
        cin >> flightRange;
        setRange(flightRange);
    }

    void displayFlyingCarDetails()
    {
        cout << "VehicleID: " << getvehicleID() << endl;
        cout << "FlyingCar Name: " << getvehicleName() << endl;
        cout << "FlyingCar Manufacturer: " << getmanufacturer() << endl;
        cout << "FlyingCar Model: " << getmodel() << endl;
        cout << "FlyingCar Year: " << getYear() << endl;
        cout << "FlyingCar FuelType: " << getfuelType() << endl;
        cout << "Flight Range: " << getRange() << "in miles" << endl;
    }
};

class VehicleRegistry
{
private:
    Vehicle vehicles[100];
    Car cars[100];
    ElectricCar electricCars[100];
    Aircraft aircrafts[100];
    FlyingCar flyingCars[100];
    SportsCar sportsCars[100];
    Sedan sedans[100];
    SUV suvs[100];
    int totalVehicles, totalCars, totalElectricCars, totalAircrafts, totalFlyingCars, totalSportsCars, totalSedans, totalSUVs;

public:
    VehicleRegistry()
    {
        totalVehicles = 0;
        totalCars = 0;
        totalElectricCars = 0;
        totalAircrafts = 0;
        totalFlyingCars = 0;
        totalSportsCars = 0;
        totalSedans = 0;
        totalSUVs = 0;
    }

    void addVehicle()
    {

        int choice;

        cout << "1. Car" << endl;
        cout << "2. Electric Car" << endl;
        cout << "3. Aircraft" << endl;
        cout << "4. Flying Car" << endl;
        cout << "5. Sports Car" << endl;
        cout << "6. Sedan" << endl;
        cout << "7. SUV" << endl;

        cout << "Enter Vehicle Type: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cars[totalCars].inputCarDetails();
            totalCars++;
            totalVehicles++;
            break;

        case 2:
            electricCars[totalElectricCars].inputElectricCarDetails();
            totalElectricCars++;
            totalVehicles++;
            break;

        case 3:
            aircrafts[totalAircrafts].inputAircraftDetails();
            totalAircrafts++;
            totalVehicles++;
            break;

        case 4:
            flyingCars[totalFlyingCars].inputFlyingCarDetails();
            totalFlyingCars++;
            totalVehicles++;
            break;

        case 5:
            sportsCars[totalSportsCars].inputSportsCarDetails();
            totalSportsCars++;
            totalVehicles++;
            break;

        case 6:
            sedans[totalSedans].inputSedanDetails();
            totalSedans++;
            totalVehicles++;
            break;

        case 7:
            suvs[totalSUVs].inputSUVDetails();
            totalSUVs++;
            totalVehicles++;
            break;

        default:
            cout << "Invalid choice." << endl;
        }
    }

    void displayAllVehicles()
    {
        for (int i = 0; i < totalCars; i++)
        {
            cars[i].displayCarDetails();
        }

        for (int i = 0; i < totalElectricCars; i++)
        {
            electricCars[i].displayElectricCarDetails();
        }

        for (int i = 0; i < totalAircrafts; i++)
        {
            aircrafts[i].displayAircraftDetails();
        }

        for (int i = 0; i < totalFlyingCars; i++)
        {
            flyingCars[i].displayFlyingCarDetails();
        }

        for (int i = 0; i < totalSportsCars; i++)
        {
            sportsCars[i].displaySportCarDetails();
        }

        for (int i = 0; i < totalSedans; i++)
        {
            sedans[i].displaySedanDetails();
        }

        for (int i = 0; i < totalSUVs; i++)
        {
            suvs[i].displaySUVDetails();
        }
    }

    void searchVehicleById()
    {
        int id;

        cout << "Enter Vehicle ID to Search: ";
        cin >> id;

        for (int i = 0; i < totalCars; i++)
        {
            if (cars[i].getvehicleID() == id)
            {
                cars[i].displayCarDetails();
                return;
            }
        }

        for (int i = 0; i < totalElectricCars; i++)
        {
            if (electricCars[i].getvehicleID() == id)
            {
                electricCars[i].displayElectricCarDetails();
                return;
            }
        }

        for (int i = 0; i < totalAircrafts; i++)
        {
            if (aircrafts[i].getAircraftID() == id)
            {
                aircrafts[i].displayAircraftDetails();
                return;
            }
        }

        for (int i = 0; i < totalFlyingCars; i++)
        {
            if (flyingCars[i].getvehicleID() == id)
            {
                flyingCars[i].displayFlyingCarDetails();
                return;
            }
        }

        for (int i = 0; i < totalSportsCars; i++)
        {
            if (sportsCars[i].getvehicleID() == id)
            {
                sportsCars[i].displaySportCarDetails();
                return;
            }
        }

        for (int i = 0; i < totalSedans; i++)
        {
            if (sedans[i].getvehicleID() == id)
            {
                sedans[i].displaySedanDetails();
                return;
            }
        }

        for (int i = 0; i < totalSUVs; i++)
        {
            if (suvs[i].getvehicleID() == id)
            {
                suvs[i].displaySUVDetails();
                return;
            }
        }

        cout << "Vehicle not found." << endl;
    }
};
int main()
{
    VehicleRegistry registry;
    int choice;

    do
    {
        cout << "\n1. Add Vehicle" << endl;
        cout << "2. Display All Vehicles" << endl;
        cout << "3. Search Vehicle by ID" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            registry.addVehicle();
            break;

        case 2:
            registry.displayAllVehicles();
            break;

        case 3:
            registry.searchVehicleById();
            break;

        case 4:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice." << endl;
        }

    } while (choice != 4);

    return 0;
}