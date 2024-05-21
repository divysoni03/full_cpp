// 4. Car Rental Management System:
//    Build a car rental management system for a rental agency. Each agency has multiple branches, and each branch manages multiple cars. Develop classes for Agency, Branch, and Car. The Agency class should aggregate Branch objects, and each Branch object should aggregate Car objects. Provide functionalities to add new cars, rent a car from a specific branch, and calculate total revenue earned by an agency.

#include <iostream>
#include <vector>
#include <string>

class Car {
private:
    std::string make;
    std::string model;
    int year;
    double price_per_day;
    bool is_rented;

public:
    Car(std::string make, std::string model, int year, double price_per_day) {
        this->make = make;
        this->model = model;
        this->year = year;
        this->price_per_day = price_per_day;
        this->is_rented = false;
    }

    bool rent() {
        if (!is_rented) {
            is_rented = true;
            return true;
        } else {
            return false;
        }
    }

    bool return_car() {
        if (is_rented) {
            is_rented = false;
            return true;
        } else {
            return false;
        }
    }
};

class Branch {
private:
    std::string name;
    std::vector<Car> cars;

public:
    Branch(std::string name) {
        this->name = name;
    }

    void add_car(Car car) {
        cars.push_back(car);
    }

    bool rent_car(int car_index) {
        return cars[car_index].rent();
    }

    bool return_car(int car_index) {
        return cars[car_index].return_car();
    }
};

class Agency {
private:
    std::string name;
    std::vector<Branch> branches;

public:
    Agency(std::string name) {
        this->name = name;
    }

    void add_branch(Branch branch) {
        branches.push_back(branch);
    }

    double calculate_total_revenue() {
        double total_revenue = 0.0;
        for (auto& branch : branches) {
            for (auto& car : branch.cars) {
                if (car.is_rented) {
                    // Assuming each car contributes its price per day to revenue
                    total_revenue += car.price_per_day;
                }
            }
        }
        return total_revenue;
    }
};

int main() {
    // Example usage
    Car car1("Toyota", "Camry", 2020, 50.0);
    Car car2("Honda", "Civic", 2019, 45.0);

    Branch branch("Main Branch");
    branch.add_car(car1);
    branch.add_car(car2);

    Agency agency("Best Rental");

    agency.add_branch(branch);

    // Renting a car
    bool success = branch.rent_car(0);
    if (success) {
        std::cout << "Car rented successfully!\n";
    } else {
        std::cout << "Car is already rented!\n";
    }

    // Returning a car
    success = branch.return_car(0);
    if (success) {
        std::cout << "Car returned successfully!\n";
    } else {
        std::cout << "Car was not rented!\n";
    }

    // Calculating total revenue
    std::cout << "Total revenue: $" << agency.calculate_total_revenue() << std::endl;

    return 0;
}
