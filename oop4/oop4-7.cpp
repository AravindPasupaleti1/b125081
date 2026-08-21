#include <iostream>
#include <string>
using namespace std;

class MuseumManager;

class Exhibit
{
private:
    string exhibitName;
    string exhibitID;
    int visitorCount;
    bool displayStatus;

public:
    Exhibit(string name, string id, int visitors, bool status)
    {
        exhibitName = name;
        exhibitID = id;
        visitorCount = visitors;
        displayStatus = status;
    }

    friend class MuseumManager;
};

class MuseumManager
{
public:
    void displayInfo(Exhibit &e)
    {
        cout << "----- Exhibit Information -----" << endl;
        cout << "Exhibit Name: " << e.exhibitName << endl;
        cout << "Exhibit ID: " << e.exhibitID << endl;
        cout << "Visitor Count: " << e.visitorCount << endl;
        cout << "Status: " << (e.displayStatus ? "Open" : "Closed") << endl;
    }

    void addVisitors(Exhibit &e, int count)
    {
        e.visitorCount += count;
        cout << count << " visitors added." << endl;
    }

    void resetVisitors(Exhibit &e)
    {
        e.visitorCount = 0;
        cout << "Visitor count reset." << endl;
    }

    void openExhibit(Exhibit &e)
    {
        e.displayStatus = true;
        cout << "Exhibit opened." << endl;
    }

    void closeExhibit(Exhibit &e)
    {
        e.displayStatus = false;
        cout << "Exhibit closed." << endl;
    }

    void displayStatus(Exhibit &e)
    {
        cout << "Exhibit Status: "
             << (e.displayStatus ? "Open" : "Closed") << endl;
    }
};

int main()
{
    Exhibit e("Ancient Coins", "EX101", 50, false);
    MuseumManager manager;

    manager.displayInfo(e);

    manager.openExhibit(e);
    manager.addVisitors(e, 25);

    manager.displayStatus(e);

    manager.resetVisitors(e);

    manager.closeExhibit(e);

    manager.displayInfo(e);

    return 0;
}