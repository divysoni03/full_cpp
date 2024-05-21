// 4. Bank Account Hierarchy: Create a base class 'Account' with virtual functions 'deposit()' and 'withdraw()'. Derive classes 'SavingsAccount' and 'CheckingAccount' from 'Account', each with its own implementation of 'deposit()' and 'withdraw()'. Write a program to simulate banking transactions such as depositing and withdrawing money from both savings and checking accounts.

#include <iostream>
using namespace std;

class Account {
    protected:
        string name, acc_no;
        int money;

    public:
        Account(string name = "unknown", string acc_no = "000000000", int money = 0): name(name), acc_no(acc_no), money(money) {}

        virtual void deposit(int deposit_amount) {
            money += deposit_amount;
            cout << "Deposit Amount " << deposit_amount << " rupees is added to your account !!" << endl;
        }

        virtual void withdraw(int withdraw_amount) {
            money -= withdraw_amount;
            cout << "Withdraw Amount " << withdraw_amount << " rupees is withdrawn from your account !!" << endl;
        }

        virtual void displayBalance() {
            cout << "----------Checking balance----------\n\n";
            cout << "----------Account Details----------" << endl;
            cout << "NAME: " << name << "\nAccount no.: " << acc_no << "\nAccount Balance: " << money << " rupees " << endl;
        }
};

class SavingAccount : public Account {
    public:
        SavingAccount(string name, string acc_no, int money) : Account(name, acc_no, money) {}

        void deposit(int deposit_amount) override {
            money += deposit_amount;
            cout << "Deposit Amount " << deposit_amount << " rupees is added to your account !!" << endl;
        }

        void withdraw(int withdraw_amount) override {
            money -= withdraw_amount;
            cout << "Withdraw Amount " << withdraw_amount << " rupees is withdrawn from your account !!" << endl;
        }
};

class CheckingAccount : public Account {
    public:
        CheckingAccount(string name, string acc_no, int money) : Account(name, acc_no, money) {}
};

int main() {
    Account *a;
    SavingAccount a1("divy soni", "101", 1000);
    CheckingAccount a2("shrey k sir", "102", 10000);

    a = &a1;
    a->deposit(200);
    a->displayBalance();

    a = &a2;
    a->displayBalance();

    return 0;
}
