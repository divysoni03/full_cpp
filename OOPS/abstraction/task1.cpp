// 1. Cuisine Management System:
//    - Problem: Design a system to manage different cuisines offered by a restaurant.
//    - Test Case: Ensure that each cuisine can calculate the total cost of its dishes.
//    - Logic: Create an abstract class 'Cuisine' with methods for adding dishes and calculating total cost. Subclasses like 'ItalianCuisine', 'ChineseCuisine', etc., implement specific dish addition and cost calculation logic.

#include<iostream>
using namespace std;

class Cuisine{
    private:
        string _name,location;
    public:
        Cuisine(string dish_name,string location) : dish_name(dish_name) , location(location){}
        virtual void total_cost(){
            
        }
};

int main(){

    return 0;
}