// 1. Online Store Management System
//    - Classes: Product (Base), Book (Child), Electronics (Child)
//    - Attributes: name, price, category
//    - Methods: calculateDiscount(), displayDetails()

#include<iostream>
using namespace std;
class Product{
    private:
        string name;
        string category;
        float price;
    public:
        Product(string name,string category, float price) : name(name),category(category),price(price){}

        void display(){
            cout << "\nName : " << name << "\nCategory : " << category << "\nprice : " << price << endl;
        }
};
class Book : public Product{
    public:
        Book(string n,string c,float p) : Product(n,c,p){}

        void displaydetail(){
            display();
            cout << "BOOk displayed !! ";
        }
};
class Electronics :public Product{
    public:
        Electronics(string n, string c, float p): Product(n,c,p){}

        void displaydetail(){
            display();
            cout << "Electronics displyed !! ";
        }
};
int main(){
    Book book1("harry potter","friction book",599.00);
    book1.displaydetail();

    return 0;
}