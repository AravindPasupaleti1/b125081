#include <iostream>
#include <string>
using namespace std;

class WalletManager;

class DigitalWallet
{
private:
    string userName;
    double walletBalance;
    string walletStatus;

public:
    DigitalWallet(string name, double balance, string status)
    {
        userName = name;
        walletBalance = balance;
        walletStatus = status;
    }

    friend class WalletManager;
};

class WalletManager
{
public:
    void displayDetails(DigitalWallet &w)
    {
        cout << "----- Digital Wallet -----" << endl;
        cout << "User Name: " << w.userName << endl;
        cout << "Wallet Balance: Rs. " << w.walletBalance << endl;
        cout << "Wallet Status: " << w.walletStatus << endl;
    }

    void addMoney(DigitalWallet &w, double amount)
    {
        w.walletBalance += amount;
        cout << "Rs. " << amount << " added successfully." << endl;
    }

    void deductMoney(DigitalWallet &w, double amount)
    {
        if (w.walletBalance >= amount)
        {
            w.walletBalance -= amount;
            cout << "Rs. " << amount << " deducted successfully." << endl;
        }
        else
        {
            cout << "Insufficient balance." << endl;
        }
    }

    void disableWallet(DigitalWallet &w)
    {
        w.walletStatus = "Disabled";
        cout << "Wallet disabled." << endl;
    }

    void displayStatus(DigitalWallet &w)
    {
        cout << "Wallet Status: " << w.walletStatus << endl;
    }
};

int main()
{
    DigitalWallet wallet("Aravind", 5000, "Active");
    WalletManager manager;

    manager.displayDetails(wallet);

    manager.addMoney(wallet, 2000);
    manager.deductMoney(wallet, 1500);

    manager.displayStatus(wallet);

    manager.disableWallet(wallet);

    manager.displayDetails(wallet);

    return 0;
}