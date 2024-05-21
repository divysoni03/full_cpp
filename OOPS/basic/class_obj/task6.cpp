// 6. Inventory Management System (Simple):

// -> Problem: Track the quantity of a product in stock.
// -> Classes:
//     -> Product (attributes: name, stock quantity)
// -> Methods:
//     -> 'Product.checkStock()': Returns the current stock quantity.

#include<iostream>
using namespace std;
class Product{
    private:
        string name;
        int quantity;
    public:
        Product(string name,int quantity){
            this->name = name;
            this->quantity = quantity;
            cout << "New quantity added !! " << endl;
        }

        void checkstock(){
            cout << "Product Name : " << name << "\nStock : " << quantity << endl;
        }
};  

int main(){
    Product milk("milk",30);
    milk.checkstock();
    return 0;
}