/*
Problem Statement:

Create a C++ program for an e-commerce system. Define a base class 'Product' with a method 'displayInfo()' to showcase product details like name, price, and description. Implement two derived classes, 'PhysicalProduct' and 'DigitalProduct', inheriting from 'Product'.

Override the 'displayInfo()' method in each derived class:

1. In the 'PhysicalProduct' class, override 'displayInfo()' to include specifics like weight, shipping cost, and delivery time.

2. In the 'DigitalProduct' class, override 'displayInfo()' to include information about download links and file sizes.

Instantiate instances of both 'PhysicalProduct' and 'DigitalProduct', highlighting how method overriding allows you to display unique product details while using a shared interface.

*/
// #include<iostream>
// using namespace std;

// class Product{
//     private:
//         string name;
//         float price;
//         string description;
//     public:
//         Product(){
//             this->name = "";
//             this->price = 0.0;
//             this->description = ""; 
//         }
//         Product(string name,float price,string description) {
//             this->name = name;
//             this->price = price;
//             this->description = description;
//         }

//         void displayInfo(){
//             cout << "------------Product details------------" << endl;
//             cout << "Product name : " << name << endl;
//             cout << "Product price : " << price << endl;
//             cout << "Product description : " << description << endl;
//         }
// };

// class physicalInfo : public Product{
// private:
//     int weight,time,shippingcost;
// public:
//     physicalInfo(){
//         this->weight = 0;
//         this->time = 0;
//         this->shippingcost = 0;
//     }
//     physicalInfo(int weight,int time,int shippingcost){
//         this->weight = weight;
//         this->time = time;
//         this->shippingcost = shippingcost;
//     }
//     void displayInfo(){
//         cout << "------------Product physical details------------" << endl;
//         cout << "Product weight  : " << weight << " kg " << endl;
//         cout << "Product delivery cost : " << shippingcost << " rupees "  << endl;
//         cout << "Product delivery time : " << time <<" min "<< endl;
//     }
// };

// class digitalInfo : public Product{
// private:
//     string link;
//     int fileSize;
// public:
//     digitalInfo(){
//         this->link = "";
//         this->fileSize = 0;
//     }
//     digitalInfo(string link, int fileSize){
//         this->link = link;
//         this->fileSize = fileSize;
//     }
//     void displayInfo(){
//         cout << "-----------Product digital details-----------" << endl;
//         cout << "Product link : " << link << endl;
//         cout << "Product file size : " << fileSize << "Mb" << endl;
//     }
// };

// int main(){
//     Product p("milk",599.99,"pure cow milk");
//     p.displayInfo();
//     digitalInfo p1("www.milk.com",4);
//     p1.displayInfo();
//     physicalInfo p2(5,4,2);
//     p2.displayInfo();
//     return 0;
// }

#include<iostream>
using namespace std;

class Product{
private:
    string name;
    float price;
    string description;
public:
    Product(){
        this->name = "";
        this->price = 0.0;
        this->description = ""; 
    }
    Product(string name,float price,string description) {
        this->name = name;
        this->price = price;
        this->description = description;
    }

    virtual void displayInfo(){
        cout << "------------Product details------------" << endl;
        cout << "Product name : " << name << endl;
        cout << "Product price : " << price << endl;
        cout << "Product description : " << description << endl;
    }
};

class PhysicalProduct : public Product{
private:
    int weight, time, shippingCost;
public:
    PhysicalProduct(){
        this->weight = 0;
        this->time = 0;
        this->shippingCost = 0;
    }
    PhysicalProduct(int weight, int time, int shippingCost){
        this->weight = weight;
        this->time = time;
        this->shippingCost = shippingCost;
    }
    virtual void displayInfo() override {
        cout << "------------Product physical details------------" << endl;
        cout << "Product weight  : " << weight << " kg " << endl;
        cout << "Product delivery cost : " << shippingCost << " rupees "  << endl;
        cout << "Product delivery time : " << time <<" min "<< endl;
    }
};

class DigitalProduct : public Product{
private:
    string link;
    int fileSize;
public:
    DigitalProduct(){
        this->link = "";
        this->fileSize = 0;
    }
    DigitalProduct(string link, int fileSize){
        this->link = link;
        this->fileSize = fileSize;
    }
    virtual void displayInfo() override {
        cout << "-----------Product digital details-----------" << endl;
        cout << "Product link : " << link << endl;
        cout << "Product file size : " << fileSize << "Mb" << endl;
    }
};

int main(){
    Product p("milk",599.99,"pure cow milk");
    p.displayInfo();
    DigitalProduct p1("www.milk.com",4);
    p1.displayInfo();
    PhysicalProduct p2(5,4,2);
    p2.displayInfo();
    return 0;
}
