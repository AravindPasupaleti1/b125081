#include <iostream>
using namespace std;

class Wallet {
private:
    int walletID;
    double balance;
    double *transactions;
    int transactionCount;
    int capacity;

public:
    Wallet(int id, double initialBalance, int size) {
        walletID = id;
        balance = initialBalance;
        capacity = size;
        transactionCount = 0;

        transactions = new double[capacity];
    }

    void transaction(double amount) {
        if (amount > 0) {
            balance += amount;
            addTransaction(amount);

            cout << "Deposit successful.";
        }
        else if (amount < 0) {
            double withdrawal = -amount;

            if (withdrawal <= balance) {
                balance -= withdrawal;
                addTransaction(amount);

                cout << "Withdrawal successful.";
            }
            else {
                cout << "Insufficient balance.";
            }
        }
        else {
            cout << "Invalid transaction amount.";
        }
    }

    void transaction(double amount, char type) {
        if (type == 'D' || type == 'd') {
            balance += amount;
            addTransaction(amount);

            cout << "Deposit successful.";
        }
        else if (type == 'W' || type == 'w') {
            if (amount <= balance) {
                balance -= amount;
                addTransaction(-amount);

                cout << "Withdrawal successful.";
            }
            else {
                cout << "Insufficient balance.";
            }
        }
        else {
            cout << "Invalid transaction type.";
        }
    }

private:
    void addTransaction(double amount) {
        if (transactionCount < capacity) {
            transactions[transactionCount] = amount;
            transactionCount++;
        }
    }

public:
    void display() {
        cout << "\nWallet ID: " << walletID;
        cout << "\nBalance: " << balance;
        cout << "\nTransactions: ";

        for (int i = 0; i < transactionCount; i++)
            cout << transactions[i] << " ";

        cout << endl;
    }

    friend void compareWallet(Wallet &, Wallet &);

    ~Wallet() {
        delete[] transactions;
    }
};

void compareWallet(Wallet &w1, Wallet &w2) {
    cout << "\n--- Wallet Comparison ---\n";

    if (w1.balance > w2.balance)
        cout << "Wallet " << w1.walletID
             << " has larger balance.";
    else if (w2.balance > w1.balance)
        cout << "Wallet " << w2.walletID
             << " has larger balance.";
    else
        cout << "Both wallets have equal balance.";
}

int main() {
    Wallet *w1 = new Wallet(1001, 5000, 10);
    Wallet *w2 = new Wallet(1002, 3000, 10);

    cout << "--- Wallet 1 Transactions ---\n";

    w1->transaction(1000);    
    cout << "\n";
    w1->transaction(-500);     

    cout << "\n\n--- Wallet 2 Transactions ---\n";

    w2->transaction(2000, 'D'); 
    cout << "\n";
    w2->transaction(800, 'W');  

    cout << "\n\n--- Wallet Details ---\n";

    w1->display();
    w2->display();

    compareWallet(*w1, *w2);

    delete w1;
    delete w2;

    return 0;
}