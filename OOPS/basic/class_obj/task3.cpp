// 3. Bank Account Management (Simple):

// -> Problem: Implement a basic savings account with Deposit functionality.
// -> Classes:
//     -> SavingsAccount (attributes: account number, balance)
// -> Methods:
//     -> 'SavingsAccount.Deposit(amount)': Adds the amount to the account balance.

#include<iostream>
using namespace std;

class SavingAccount{
    private :
        int account_no;
        int balance;
        string name;

    
    public :

        SavingAccount(){
            cout << "\n\tWelcome to our bank !! \nEnter your choice : \n1.Create a New Account\n2.Deposite\n3.Check balance\n4.quit" << endl;
            account_no = 1000;
            balance = 0;
            // name = nullptr;
        }

        void Display(){
            cout << "\n\n1Account holder Name : " << name << "\nAccount Number : " << account_no << "\nBalance : " << balance << endl;
        }

        void CreateAcc(){
            // cout << "\tWelcome to our bank !! " << endl ;

            cout << "Enter Your Name : ";
            cin.ignore();
            getline(cin,name);
            account_no++;
            cout << "\nNote : Deposite 1000 rupees as First Deposite !";
            Display();
        }

        void Deposit(){
            int Deposit_money;

            cout << "\nEnter name : ";
            cin.ignore();
            getline(cin,name); 
            cout << "Enter Acc number : ";
            cin >> account_no;
            cout << "\nEnter how much money u want to Deposit : ";
            cin >> Deposit_money;
            balance+=Deposit_money;
        }

};

int main(){
    int choice;

    SavingAccount customer1;

    do{
        cout << "\nEnter Your Choice : ";
        cin >> choice;

        switch(choice){
            case 1 : 
                customer1.CreateAcc();
                break;
            case 2 :
                customer1.Deposit();
                break;
            case 3 :    
                customer1.Display();
                break;
            default :   
                cout << "\nInvalid Input !! Enter again !! " << endl;
        } 

    }while(choice < 4);

    return 0;
}