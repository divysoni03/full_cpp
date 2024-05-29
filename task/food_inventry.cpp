// // -> Food Inventory System
// // You need to develop a Food Inventory System to manage the food items available in a restaurant's inventory. The system should support the following operations:

// // 1. Create: Add a new food item with the attributes SKU, name, and category.
// // 2. Read: List all the food items available in the inventory.
// // 3. Update: Update the details (name and category) of an existing food item based on its SKU.
// // 4. Delete: Remove a food item from the inventory based on its SKU.

// // Use switch case where it is possible.
#include <iostream>
#include <string>
using namespace std;

class Food {
private:
    string name, category;
    int SKU, price;
public:
    Food() : name(""), category(""), SKU(0), price(0) {}

    // Getters and Setters
    string getName() { return this->name; }
    string getCategory() { return this->category; }
    int getSKU() { return this->SKU; }
    int getPrice() { return this->price; }
    void setName(string name) { this->name = name; }
    void setCategory(string category) { this->category = category; }
    void setSKU(int SKU) { this->SKU = SKU; }
    void setPrice(int price) { this->price = price; }

    // Display
    void display() {
        cout << "\n<--- FOOD Details --->" << endl;
        cout << "Name: " << this->name << endl;
        cout << "Category: " << this->category << endl;
        cout << "SKU (stock keeping unit number): " << this->SKU << endl;
        cout << "Price: " << this->price << endl;
    }
};

class Restaurant {
private:
    string name;
    Food* foods;
    int count, max_foods;
public:
    Restaurant() : name(""), max_foods(0), count(0), foods(nullptr) {}
    Restaurant(string name, int max_foods) : name(name), max_foods(max_foods), count(0) {
        foods = new Food[max_foods];
    }
    ~Restaurant() {
        delete[] foods;
    }

    string inputName() {
        string new_name;
        cout << "Enter Name: ";
        // cin.ignore();
        getline(cin, new_name);
        return new_name;
    }
    string inputCategory() {
        string new_category;
        cout << "Enter Category: ";
        getline(cin, new_category);
        return new_category;
    }
    int inputSKU() {
        int new_SKU;
        cout << "Enter SKU (stock keeping Unit Number): ";
        cin >> new_SKU;
        return new_SKU;
    }
    int inputPrice() {
        int new_price;
        cout << "Enter Price: ";
        cin >> new_price;
        return new_price;
    }

    void addFood() {
        system("cls");
        if (count >= max_foods) {
            cout << "Sorry, you reached your max limit of adding foods, try next time..." << endl;
        } else {
            cin.ignore(); // Clear the buffer before taking string input
            foods[count].setName(inputName());
            foods[count].setCategory(inputCategory());
            foods[count].setSKU(inputSKU());
            foods[count].setPrice(inputPrice());
            cout << "Food successfully added at position " << count << "." << endl;
            system("pause");
            count++;
        }
    }

    void displayFood() {
        system("cls");
        cout << "<--- Displaying all foods --->" << endl;
        for (int i = 0; i < count; i++) {
            foods[i].display();
        }
        system("pause");
    }

    void updateFood() {
        system("cls");
        int skuToBeSearched;
        cout << "\n<--- Update food --->\nEnter SKU to search: ";
        cin >> skuToBeSearched;
        for (int i = 0; i < count; i++) {
            if (foods[i].getSKU() == skuToBeSearched) {
                cout << "<--- Food found --->" << endl;
                foods[i].display();
                cin.ignore(); // Clear the buffer before taking string input
                foods[i].setName(inputName());
                foods[i].setCategory(inputCategory());
                foods[i].setSKU(inputSKU());
                foods[i].setPrice(inputPrice());
                cout << "Food updated successfully." << endl;
                system("pause");
                return;
            }
        }
        cout << "Error: Food item not found." << endl;
    }

    void deleteFood() {
        system("cls");
        int skuToBeSearched;
        cout << "\nEnter SKU to search: ";
        cin >> skuToBeSearched;
        for (int i = 0; i < count; i++) {
            if (foods[i].getSKU() == skuToBeSearched) {
                cout << "<--- Food found --->" << endl;
                foods[i].display();
                for (int j = i; j < count - 1; j++) {
                    foods[j] = foods[j + 1];
                }
                count--;
                cout << "Food deleted successfully." << endl;
                system("pause");
                return;
            }
        }
        cout << "Error: Food item not found." << endl;
    }
};

int main() {
    int choice, max_foods;
    string restaurant_name;
    system("cls");
    cout << "<--- Welcome to our Restaurant Management System --->\nEnter Your Restaurant Name: ";
    getline(cin, restaurant_name);
    cout << "Enter max number of foods you want to add: ";
    cin >> max_foods;
    cin.ignore(); // Clear the buffer after taking integer input

    Restaurant res(restaurant_name, max_foods);
    system("cls");
    do {
        system("cls");
        cout << "\n------------- Welcome to " << restaurant_name << " -------------"
             << "\n1. Add food item"
             << "\n2. Display food"
             << "\n3. Update food item"
             << "\n4. Delete food item"
             << "\n0. Exit"
             << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
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
            case 0:
                cout << "Exiting the program..." << endl;
                break;
            default:
                cout << "Invalid Input! Try again!" << endl;
                break;
        }
    } while (choice != 0);

    return 0;
}