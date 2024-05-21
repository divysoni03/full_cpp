/*
3. Online Food Ordering System:
   - Problem: Create a system for customers to order food online from multiple restaurants.
   - Test Case: Ensure that the total cost of an order includes taxes and delivery charges.
   - Logic: Define an abstract class 'FoodItem' with methods to calculate the price including taxes. Subclasses like 'Pizza', 'Burger', etc., implement specific price calculation logic and apply taxes accordingly.
*/

#include<iostream>
using namespace std;

class FoodItem {
protected:
    float basePrice;
    float taxRate;
public:
    FoodItem(float basePrice, float taxRate) : basePrice(basePrice), taxRate(taxRate) {}
    virtual float calculatePrice() = 0;
};

class Pizza : public FoodItem {
public:
    Pizza(float basePrice, float taxRate) : FoodItem(basePrice, taxRate) {}

    float calculatePrice() override {
        return basePrice + ((basePrice * taxRate) / 100);
    }
};

class Burger : public FoodItem {
public:
    Burger(float basePrice, float taxRate) : FoodItem(basePrice, taxRate) {}

    float calculatePrice() override {
        return basePrice + ((basePrice * taxRate) / 100);
    }
};

int main() {
    FoodItem* items[2];
    float totalCost = 0;

    Pizza p(800, 18);
    Burger b(400, 18);

    // items[0] = &p;
    // items[1] = &b;

    items[0] = new Pizza(800, 18);
    items[1] = new Burger(400, 18);


    for (int i = 0; i < 2; i++) {
        if(items[i] != nullptr) {
            totalCost += items[i]->calculatePrice();
        }
    }
    cout << "Bill: " << totalCost << endl;

    return 0;
}