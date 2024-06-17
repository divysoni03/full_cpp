// 1. Create a BankAccount class with attributes accountNumber, balance.
//  2. Derive SavingsAccount from BankAccount with an additional attribute interestRate.
//  3. Implement methods for deposit, withdraw, and displayBalance in the BankAccount class.
//  4. Override displayBalance in SavingsAccount to show interest rate.
//  5. Create a menu-driven program to demonstrate account operations.
#include<iostream>
using namespace std;

class BankAccount {
    private:
        int accountNumber,balance;
    public:
        BankAccount(int accountNumber,int balance): accountNumber(accountNumber),balance(balance){}

        void setBalance(int value){
            this->balance = value;
        }
        void setAcc(int value){
            this->accountNumber = value;
        }
        int getBalance(){
            return this->balance;
        }
        int getAcc(){
            return this->accountNumber;
        }

        virtual void deposit(int value){
            this->balance += value;
            cout << "Deposite successful!" << endl;
        }
        virtual void Withdraw(int value){
            this->balance -= value;
            cout << "Withdraw successful!"; 
        }
        virtual void display(){
            cout << "Account number : " << this->accountNumber << endl;
            cout << "Balance : " << this->balance << endl;
        }
};

class SavingAccount : public BankAccount {
    private:
        int interestRate;
    public: 
        SavingAccount(int accountNumber,int balance,int interestRate) : interestRate(interestRate),BankAccount(accountNumber,balance){}

        void deposit(int value) override {
            BankAccount::deposit(value);
        }
        void Withdraw(int value) override {
            BankAccount::Withdraw(value);
        }
        void display() override {
            cout << "Account Number : " << getAcc() << endl;
            cout << "Balance : " << getBalance() + getBalance()*interestRate /100 << endl;
        }
};
int main(){
    int choice,acc,value;
    SavingAccount s1(0,0,8);
    do{
        cout << "1.Deposite\n2.Withdraw\n3.Display Balance\n4.Exit\nEnter Your choice :";
        cin >> choice;
         
        if(choice == 4) {cout << "Exiting the program... "; exit(0);}

        switch(choice){
            case 1:
                cout << "Enter Account Number : ";
                cin >> acc;
                s1.setAcc(acc);
                cout << "Enter Amout to Deposit :";
                cin >> value;
                s1.deposit(value);
                break;
            case 2:
                cout << "Enter Account Number : ";
                cin >> acc;
                s1.setAcc(acc);
                cout << "Enter Amout to withdraw :";
                cin >> value;
                s1.Withdraw(value);
                break;
            case 3:
                s1.display();
                break;
            default:
                cout << "Invalid Input!" << endl;
                break;
        }
    }while(choice != 4);

    return 0;
}