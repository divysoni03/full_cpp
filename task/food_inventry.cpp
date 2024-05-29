// -> Food Inventory System
// You need to develop a Food Inventory System to manage the food items available in a restaurant's inventory. The system should support the following operations:

// 1. Create: Add a new food item with the attributes SKU, name, and category.
// 2. Read: List all the food items available in the inventory.
// 3. Update: Update the details (name and category) of an existing food item based on its SKU.
// 4. Delete: Remove a food item from the inventory based on its SKU.

// Use switch case where it is possible.

#include<iostream>
#include<string>
using namespace std;

class Food{
private:
    string name,category;
    int SKU,price;
public:
    Food() : name(""),category(""),SKU(0),price(0){}
    // Food(string name,string category,int SKU) : name(name),category(category),SKU(SKU),price(price){}
    //getter setter
    string getname(){return this->name;}
    string getcategory(){return this->category;}
    int getSKU(){return this->SKU;}
    int getprice(){return this->price;}
    void setname(string name){this->name = name;}
    void setcategory(string category){this->category = category;}
    void setSKU(int SKU){this->SKU = SKU;}
    void setprice(int price){this->price = price;}

    //diplay method
    void display(){
        cout << "\n<---FOOD Details--->" << endl;
        cout << "Name : " << this->name << endl;
        cout << "Category : " << this->category << endl;
        cout << "SKU (stock keeping unit) : " << this->SKU << endl;
        cout << "Price : " << this->price << endl;
    }

    //input all data members


};

class Restaurant : public Food {
private:
    string name;
    Food* foods;
    int count,max_foods;
    // int rating;
public:
    Restaurant(){
        this->name = "";
        this->max_foods = 1;
        this->count = 1;
        foods = new Food[this->max_foods];
    }
    Restaurant(string name,int max_foods){
        this->name = name;
        this->max_foods = max_foods;
        this->count = 0;
        foods = new Food[max_foods];
    }   
    ~Restaurant(){
        delete[] foods;
    }
    string new_name,new_category;
    int new_price,new_SKU;
    string inputName(){string new_name;cout << "Enter Name : ";getline(cin,new_name);cin.ignore();return new_name;}
    string inputCategory(){string new_category;cout << "Enter Category : ";getline(cin,new_category);cin.ignore();return new_category;}
    int inputSKU(){int new_SKU;cout << "Enter SKU (stock keeping units : )";cin >> new_SKU;cin.ignore();return new_SKU;}
    int inputPrice(){int new_price;cout <<"Enter Price : ";cin >> new_price;cin.ignore();return new_price;}
    
    void addFood(){
        // system("cls");
        string name,category;
        int SKU,price;
        if(count > max_foods){
            cout << "Sorry you reached your max limit of adding foods, try next time..." << endl;
        }
        else{
            foods[count].setname(inputName());
            foods[count].setcategory(inputCategory());
            foods[count].setSKU(inputSKU());
            foods[count].setprice(inputPrice()); 
            cout << "Food succesfully added to " << count++ << " location." << endl;
        }
    }
    void displayFood(){
        // system("cls");
        cout << "<--- Displaying all food --->" << endl;
        for(int i=0;i<count;i++){
            foods[i].display();
        }
        // system("pause");
    }
    void updateFood(){
        // system("cls");
        string foodToBeSearched;
        cout << "\n<--- Update food --->\nEnter Name OR category to search : " << endl;
        getline(cin,foodToBeSearched);
        // cin.ignore();
        for(int i=0;i<count;i++){
            if((foods[i].getname()).compare(foodToBeSearched) == 0 || (foods[i].getcategory()).compare(foodToBeSearched) == 0){
                cout << "<--- Food founded --->" << endl;
                foods[i].display();
                cout << endl;
                foods[i].setname(inputName());
                foods[i].setcategory(inputCategory());
                foods[i].setSKU(inputSKU());
                foods[i].setprice(inputPrice());
            }
            else{
                cout << "Error updating the food item, try again..." << endl;
            }
        }
    }
    void deleteFood() {
        string foodToBeSearched;
        cout << "\nEnter Name OR category to search : " << endl;
        getline(cin,foodToBeSearched);
        // cin.ignore();
        for(int i=0;i<count;i++){
            if((foods[i].getname()).compare(foodToBeSearched) == 0 || (foods[i].getcategory()).compare(foodToBeSearched) == 0){
                foods[i].display();
                for (int j = i; j < count - 1; j++) {
                    foods[j] = foods[j+1];
                }
                count--;
                cout << "food deleted successfully." << endl;
            }
            else{
                cout << "Error deleting the food, item try again..." << endl;
            }
        }
    }
};
int main(){
    int choice,max_foods;
    string restaurant_name;
    // system("cls");
    cout << "<--- Welcome to out Restaurant managment system --->\nEnter Your Restaurant Name : ";
    getline(cin,restaurant_name);
    cout << "Enter max foods your want be too add : ";
    cin >> max_foods;
    cin.ignore();
    Restaurant res(restaurant_name,max_foods);
    do{
        // system("cls");
        cout << "------------- Welcome to " << restaurant_name << "-------------" << "\n1.Add food item\n2.Display food\n3.Update food item\n4.delete food item\n0.Exit\nEnter your choice : ";
        cin >> choice;

        if(choice == 0){
            cout << "Exiting the program..." << endl;
            exit(0);
        }

        switch(choice){
            case 1:
                res.addFood();
                break;
            case 2:
                res.displayFood();
                break;
            case 3:
                res.updateFood();
                break;
            case 4:
                res.deleteFood();
                break;
            default:
                cout << "Invalid Input ! Try again !\nExiting the program..." << endl;
                break;
        }
    }while(choice != 0);
    return 0;
}