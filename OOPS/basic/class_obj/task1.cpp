// 1. Library Management System:
//    Problem Statement: Design a system to manage library resources such as books, journals, and DVDs. Implement classes for library items, patrons, and a system to handle checkouts, returns, and overdue fines.

#include<iostream>
using namespace std;

class books{
    public:
        int bookid;
        string bookname;
        int checkoutdate;
        int returndate;
    
    void overdue(){
        if(checkoutdate>returndate){
            cout << "invalid day come to next day !! ";
        }
        if((returndate-checkoutdate)>12){
            int fine = (returndate-checkoutdate)*200;
            cout << "\nYou missed your return date for " << (returndate-checkoutdate) << " days so your fine will be " << fine;
        }

    }

    void displaycheckout(){
        cout << "\n\n\tCheckout Reciept / details\n";
        cout << "book id : " << bookid << "\nBook Name : " << bookname << "\nCheckout Date : " << checkoutdate << endl;
    }

    void checkout(){
        cout << "\nEnter book id : ";
        cin >> bookid;
        cout << "\nEnter book Name : ";
        cin.ignore();
        getline(cin,bookname);
        cout<< " \nEnter checkout date : ";
        cin >> checkoutdate;
        cout << "NOTE : return this book into next 12 days !!";
        displaycheckout();
    }

    void return1(){
        cout << "\nEnter book id : ";
        cin >> bookid;
        cout << "\nEnter book Name : ";
        cin.ignore();
        getline(cin,bookname);
        cout<< " \nEnter return date : ";
        cin >> returndate;
        if((returndate-checkoutdate)>12){
            overdue();
        }
        else {
            cout << "book accepted ! Come again !! ";    
        }
        
    }



};


void book(){
    cout << "Select one book : \n1.Darkness Visible\n2.harry potter\n3.maths 1\n4.maths 2\n5.maths 3\n6.maths 4\n7.physics\n" << endl;
}

int main(){
    int choice=1;
    book();
    // cout << "Select what u want to do : \n1.checkout\n2.return\n3.end" << endl;
    // cin  >> choice ;
    books b;
    while(choice < 3){
        cout << "\nSelect what u want to do : \n1.checkout\n2.return\n3.end\n\nEnter :";
        cin  >> choice ;

        switch(choice){
            case 1 :
                b.checkout();
                break;
            case 2 : 
                b.return1();
                break;
            default : 
                cout << "\nThank you for shopping with us ! come again !! " << endl;
        } 
    }
    
    return 0;

}1
