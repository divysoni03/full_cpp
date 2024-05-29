// -> Tourism Destination Management System
// You need to develop a Tourism Destination Management System to manage the destinations available in a travel agency's offerings. The system should support the following operations:

// 1. Create: Add a new destination with the attributes DestinationID, name, and description.
// 2. Read: List all the destinations available in the system.
// 3. Update: Update the details (name and description) of an existing destination based on its DestinationID.
// 4. Delete: Remove a destination from the system based on its DestinationID.

// Use switch case where it is possible.
#include<iostream>
#include<string>
using namespace std;

class Destination{
private:
    string name,description;
    int destination_ID;
public: 
    Destination():name(""),description(""),destination_ID(0){}

    //getter setter methods
    string getname(){return this->name;}
    string getdescription(){return this->description;}
    int getdestination_id(){return this->destination_ID;}
    void setname(string name){this->name = name;}
    void setdescription(string descripton){this->description = description;}
    void setdestination_id(int destination_ID){this->destination_ID = destination_ID;}

    void display(){
        cout << "<--- Destination --->" << endl;
        cout << "Name : " << this->name << endl;
        cout << "Description : " << this->description << endl;
        cout << "Destination ID : " << this->destination_ID << endl;
    }
};

class TourismManagement : public Destination{
private:
    string name;
    int count,max_destination;
    Destination* destinations;
public:
    TourismManagement():name(""),count(0),max_destination(0),destinations(nullptr){}
    TourismManagement(string name,int max_destination) : name(name),max_destination(max_destination),count(0){destinations = new Destination[max_destination];}

    ~TourismManagement(){delete[] destinations;}

    string inputname(){
        string new_name;
        cout << "Enter New name : ";
        getline(cin,new_name);
        return new_name;
    }
    string inputdescription(){
        string new_description;
        cout << "Enter New Destination Description : " ;
        getline(cin,new_description);
        return new_description;
    }
    int inputDestinationid(){
        int new_destinationid;
        cout << "Enter New destination ID : " ;
        cin >> new_destinationid;
        return new_destinationid;
    }

    void addDestination(){
        system("cls");
        if(count > max_destination){
            cout << "Sorry, you reached your max limit of adding Destinations, try next time..." << endl;
        }
        else{
            cin.ignore();
            destinations[count].setname(inputname());
            destinations[count].setdescription(inputdescription());
            destinations[count].setdestination_id(inputDestinationid());
            cout << "Destination Added Succesfully ... At position " << count << "." << endl;
            system("pause");
            count++;
        }
    }
    void displayDestinations() {
        system("cls");
        cout << "<--- Displaying all Destinations --->" << endl;
        for (int i = 0; i < count; i++) {
            destinations[i].display();
        }
        system("pause");
    }

    void updateDestinations() {
        system("cls");
        int destination_id;
        cout << "\n<--- Update Destination --->\nEnter destination Id to search: ";
        cin >> destination_id;
        for (int i = 0; i < count; i++) {
            if (destinations[i].getdestination_id() == destination_id) {
                cout << "<--- Destination found --->" << endl;
                destinations[i].display();
                cin.ignore(); // Clear the buffer before taking string input
                destinations[i].setname(inputname());
                destinations[i].setdescription(inputdescription());
                destinations[i].setdestination_id(inputDestinationid());
                cout << "Destination updated successfully." << endl;
                system("pause");
                return;
            }
        }
        cout << "Error: Destination not found." << endl;
    }

    void deleteDestination() {
        system("cls");
        int destination_id;
        cout << "\nEnter destination id to search: ";
        cin >> destination_id;
        for (int i = 0; i < count; i++) {
            if (destinations[i].getdestination_id() == destination_id) {
                cout << "<--- Destination found --->" << endl;
                destinations[i].display();
                for (int j = i; j < count - 1; j++) {
                    destinations[j] = destinations[j + 1];
                }
                count--;
                cout << "Destination deleted successfully." << endl;
                system("pause");
                return;
            }
        }
        cout << "Error: Destination not found." << endl;
    }
};

int main(){
    int choice, max_destination;
    string tourism_name;
    system("cls");
    cout << "<--- Welcome to our Tourism Management System --->\nEnter Your Tourism Agency Name: ";
    getline(cin, tourism_name);
    cout << "Enter max number of destination you want to add: ";
    cin >> max_destination;
    cin.ignore();

    TourismManagement tourist(tourism_name, max_destination);
    system("cls");
    do {
        system("cls");
        cout << "\n------------- Welcome to " << tourism_name << " -------------"
             << "\n1. Add Destination "
             << "\n2. Display Destinations"
             << "\n3. Update Destination"
             << "\n4. Delete Destination"
             << "\n0. Exit"
             << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                tourist.addDestination();
                break;
            case 2:
                tourist.displayDestinations();
                break;
            case 3:
                tourist.updateDestinations();
                break;
            case 4:
                tourist.deleteDestination();
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