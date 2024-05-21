// 2. Online Shopping System (Simple):

// -> Problem: Simulate adding a product to a cart and calculating its total price.
// -> Classes:
//     -> Product (attributes: name, price)
//     -> Cart (attributes: list of product objects)
// -> Methods:
//     -> 'Cart.addProduct(product)': Adds the product to the cart's list.
//     -> 'Cart.getTotalPrice()': Calculates the sum of all product prices in the cart.


#include <iostream>
#include <string>
using namespace std;

class Product {
    string name;
    long price;

public:
    Product(string n, long p) {
        name = n;
        price = p;
        cout << "\nProduct added successfully ! " << endl;
    }

    void DisplayProduct() {
        cout << "\nAvailable products:\n1. Alto 800\n2. Swift Car\n";
    }

    string getName() {
        return name;
    }

    long getPrice() {
        return price;
    }
};

class Cart {
public:
    int numOfCars;
    long totalPrice;

    Cart() {
        totalPrice = 0;
        numOfCars = 0;
    }

    void displayCart(Product product) {
        cout << "\n\tCart\nSelected car: " << product.getName() << "\nPrice: " << product.getPrice() << endl;
    }

    void addProduct(Product product) {
        cout << "\nProduct added to your cart list ! ";
        totalPrice += product.getPrice();
        numOfCars++;
    }

    long getTotalPrice() {
        return totalPrice;
    }
};

int main() {
    int choice;
    cout << "\n\tWELCOME TO OUR STORE !" << "\n1. Display available products\n2. Add product to cart\n3. Get total bill\n4. Quit\n";

    Product alto("Alto 800", 200000);
    Product swift("Swift Car", 250000);

    Cart cart;

    do {
        cout << "\nEnter your choice : ";
        cin >> choice;

        switch (choice) {
            case 1:
                Product::DisplayProduct();
                break;
            case 2:
                int productChoice;
                cout << "Enter product choice (1 for Alto 800, 2 for Swift Car): ";
                cin >> productChoice;
                if (productChoice == 1)
                    cart.addProduct(alto);
                else if (productChoice == 2)
                    cart.addProduct(swift);
                else
                    cout << "Invalid product choice!" << endl;
                break;
            case 3:
                cout << "Total Bill: " << cart.getTotalPrice() << endl;
                break;
            case 4:
                cout << "Thank you for shopping with us!" << endl;
                break;
            default:
               cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
