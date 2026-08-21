#include <iostream>
#include <string>
using namespace std;

class ServiceManager;

class VehicleService
{
private:
    string vehicleNumber;
    string ownerName;
    string serviceDueStatus;
    int lastServiceKilometres;

public:
    VehicleService(string number, string owner,
                   string status, int km)
    {
        vehicleNumber = number;
        ownerName = owner;
        serviceDueStatus = status;
        lastServiceKilometres = km;
    }

    friend class ServiceManager;
};

class ServiceManager
{
public:
    void displayInfo(VehicleService &v)
    {
        cout << "----- Vehicle Service Information -----" << endl;
        cout << "Vehicle Number: " << v.vehicleNumber << endl;
        cout << "Owner Name: " << v.ownerName << endl;
        cout << "Service Status: " << v.serviceDueStatus << endl;
        cout << "Last Service: "
             << v.lastServiceKilometres << " km" << endl;
    }

    void markServiceCompleted(VehicleService &v)
    {
        v.serviceDueStatus = "Completed";
        cout << "Service marked as completed." << endl;
    }

    void updateKilometres(VehicleService &v, int km)
    {
        v.lastServiceKilometres = km;
        cout << "Last service kilometres updated." << endl;
    }

    void checkService(VehicleService &v)
    {
        if (v.serviceDueStatus == "Due")
            cout << "Vehicle requires servicing." << endl;
        else
            cout << "Vehicle does not require servicing." << endl;
    }
};

int main()
{
    VehicleService v("OD02AB1234", "Aravind", "Due", 10000);
    ServiceManager manager;

    manager.displayInfo(v);

    manager.checkService(v);

    manager.markServiceCompleted(v);
    manager.updateKilometres(v, 15000);

    manager.checkService(v);

    manager.displayInfo(v);

    return 0;
}