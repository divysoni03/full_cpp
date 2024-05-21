/*
7. Inventory Management: Create an inventory management system for a store that tracks product stock, prices, and sales. Implement features for adding new products, updating quantities, and generating sales reports.

- Test adding new products to the inventory.
- Test updating product quantities.
- Test generating sales reports.
- Test searching for products by name or category.
- Test calculating the total value of the inventory.
*/

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class Product {
    string name;
    string category;
    int quantity;
    double price;
public:
    Product() {}
    Product(string n, string cat, int q, double p) : name(n), category(cat), quantity(q), price(p) {}

    string getName() { return name; }
    string getCategory() { return category; }
    int getQuantity() { return quantity; }
    double getPrice() { return price; }

    void setQuantity(int q) { quantity = q; }

    double getTotalValue() { return quantity * price; }

    void display() {
        cout << "Product: " << name << ", Category: " << category << ", Quantity: " << quantity << ", Price: " << price << endl;
    }
};

class InventoryManagement {
private:
    static const int MAX_PRODUCTS = 100;
    Product inventory[MAX_PRODUCTS];
    int count;

public:
    InventoryManagement() : count(0) {}

    void addProduct(Product &prod) {
        if(count < MAX_PRODUCTS) {
            inventory[count] = prod;
            cout << inventory[count++].getName() << " added successfully." << endl;
        } else {
            cout << "Inventory is full. Cannot add more products." << endl;
        }
    }

    void updateQuantity(string productName, int newQuantity) {
        for (int i = 0; i < count; i++) {
            if(inventory[i].getName() == productName) {
                inventory[i].setQuantity(newQuantity);
                cout << "Quantity updated successfully." << endl;
                return;
            }
        }
        cout << "Product not found." << endl;
    }

    void generateSalesReport() {
        double totalSales = 0;
        cout << "Sales Report: " << endl;
        cout << "--------------" << endl;
        for (int i = 0; i < count; i++) {
            double sales = inventory[i].getTotalValue();
            totalSales += sales;
            inventory[i].display();
        }
        cout << "Total Sales: " << fixed << setprecision(0) << totalSales << endl;
    }

};

int main() {
    InventoryManagement inventoryManager;

    Product prod1("Apple iphone 15", "Smartphone", 10, 100000);
    Product prod2("Samsung S24+", "Smartphone", 20, 117000);

    inventoryManager.addProduct(prod1);
    inventoryManager.addProduct(prod2);

    inventoryManager.updateQuantity("Apple iphone 15", 30);

    inventoryManager.generateSalesReport();


    return 0;
}