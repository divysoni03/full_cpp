// 1. Online Shopping Cart:
// You are developing an online shopping website, and you need to implement a "ShoppingCart" class. The default constructor of this class will initialize the cart with default values such as an empty list of items, total cost set to zero, and a default currency (e.g., USD). Create an object of the "ShoppingCart" class using the default constructor and display the initial details of the cart.

#include<iostream>
using namespace std;

class Shoppingcart{
    private:
        string name;
        float price;
        string currency;
    public:
        Shoppingcart(){
            name = "\0";
            price = 0.00;
            currency = "\0";
            cout << "constructor called !! " << endl;
        }
        void display(){
            cout << "Name : " << name << "\nPrice : " << price << "\nCurrency : " << currency << endl; 
        }
};

int main(){
    Shoppingcart milk;
    milk.display();
    return 0;
}