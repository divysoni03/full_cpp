#include<iostream>
#include<iomanip>
using namespace std;

class Account {
private:
    int accNo;
    string name;
    double balance;
public:
    Account(int accNo, string name, double balance) : accNo(accNo), name(name), balance(balance) {}

    // getter(read) & setter(write)
    void setAccNo(int accNo) {
        this->accNo = accNo;
    }

    void setName(string name) {
        this->name = name;
    }

    int getAccNo() {
        return accNo;
    }

    string getName() {
        return name;
    }

    double getBalance() {
        return balance;
    }

protected:
    void setBalance(int balance) {
        this->balance = balance;
    }
};

class SBI : public Account {
public:
    SBI(int accNo, string name, double balance) : Account(accNo, name, balance) {}

    void withdraw(double amount) {
        double current_balance = getBalance();
        if(amount <= current_balance-2000) {
            setBalance(current_balance - amount);
        } else {
            cout << "Insufficient Balance...(" << current_balance << ")" << endl;
        }
    }

    void deposit(int amount) {
        setBalance(getBalance() + amount);
    }
};

int main() {
    SBI bank(123456, "Divy", 5000000);


    cout << "Account No: " << bank.getAccNo() << endl;
    cout << "Name: " << bank.getName() << endl;
    
    bank.deposit(4500000);
    cout << "Current balance is " << fixed << setprecision(2) << bank.getBalance() << endl;

    bank.withdraw(5000000);
    cout << "Current balance is " << fixed << setprecision(2) << bank.getBalance() << endl;

    return 0;
}