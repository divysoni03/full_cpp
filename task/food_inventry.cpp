// -> Food Inventory System
// You need to develop a Food Inventory System to manage the food items available in a restaurant's inventory. The system should support the following operations:

// 1. Create: Add a new food item with the attributes SKU, name, and category.
// 2. Read: List all the food items available in the inventory.
// 3. Update: Update the details (name and category) of an existing food item based on its SKU.
// 4. Delete: Remove a food item from the inventory based on its SKU.

// Use switch case where it is possible.

#include<iostream>
// #include<string>
using namespace std;

class Food{
private:
    string name,category;
    int SKU;
public:
    Food() : name(""),category(""),SKU(0){}
        // this->name = "";
        // this->category = "";
        // this->SKU = 0;
    Food(string name,string category,int SKU) : name(name),category(category),SKU(SKU){}
    //getter setter
    string getname(){
        return this->name;
    }
    string getcategory(){
        return this->category;
    }
    int getSKU(){
        return this->SKU;
    }
    void setname(string name){
        this->name = name;
    }
    void setcategory(string category){
        this->category = category;
    }
    void setSKU(int SKU){
        this->SKU = SKU;
    }


    //diplay method
    void display(){
        cout << "\n<---FOOD Details--->" << endl;
        cout << "Name : " << this->name << endl;
        cout << "Category : " << this->category << endl;
        cout << "SKU (stock in unit) : " << this->SKU << endl;
    }
};

class Restaurant : public Food{
private:
    string name;
    Food* foods;
    int count,max_foods;
    // int rating;
public:
    Restaurant(string name,int max_foods){
        this->name = name;
        this->max_foods = max_foods;
        foods = new Food[max_foods];
    }
    void addFood(Food &f){
        if(count > max_foods){
            cout << "Sorry you reached your max limit of adding foods, try next time..." << endl;
        }
        else{
            foods[count++] = f;
            cout << "Food succesfully added to " << count << " location." << endl;
        }
    }
    void displayFood(){
        cout << "<--- Displaying all food --->" << endl;
        for(int i=0;i<count;i++){
            foods[i].display();
        }
    }
    void updateFood(){
        int choice;
        cout << "\n<--- Update food --->\nso how u want to search the food...\n1.from name\n2.from location number\nEnter your choice : " << endl;
        cin >> choice;
        cin.ignore();
    }
    void deleteFood(){}
};
int main(){

    return 0;
}