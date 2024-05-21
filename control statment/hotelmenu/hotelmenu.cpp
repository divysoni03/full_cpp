#include<iostream>
using namespace std;

void displaymenu(){
    cout << "Welcomm to starbucks! please select your drinks : " << endl;
    cout << "1. coffee" << endl;
    cout << "2. tea" << endl;
    cout << "3. milk" << endl;
    cout << "4. juice" << endl;
    cout << "5. water" << endl;
    cout << "6. soda" << endl;
    cout << "7. exit" << endl;
}

void displaycoffee(){
    cout << "coffee menu : " << endl;
    cout << "1. cappuccino" << endl;
    cout << "2. latte" << endl;
    cout << "3. espresso" << endl;
    cout << "4. americano" << endl;
    cout << "5. mocha" << endl;
}

void displaytea(){
    cout << "tea menu : " << endl;
    cout << "1. green tea" << endl;
    cout << "2. black tea" << endl;
    cout << "3. herbal tea" << endl;
    cout << "4. chai tea" << endl;
    cout << "5. earl grey tea" << endl;
}

void displaymilk(){
    cout << "milk menu : " << endl;
    cout << "1. whole milk" << endl;
    cout << "2. skim milk" << endl;
    cout << "3. soy milk" << endl;
    cout << "4. almond milk" << endl;
    cout << "5. oat milk" << endl;
}

void displayjuice(){
    cout << "juice menu : " << endl;
    cout << "1. orange juice" << endl;
    cout << "2. apple juice" << endl;
    cout << "3. cranberry juice" << endl;
    cout << "4. pineapple juice" << endl;
    cout << "5. grapefruit juice" << endl;
}

void displaywater(){
    cout << "water menu : " << endl;
    cout << "1. still water" << endl;
    cout << "2. sparkling water" << endl;
    cout << "3. flavored water" << endl;
    cout << "4. mineral water" << endl;
    cout << "5. infused water" << endl;
}

void displaysoda(){
    cout << "soda menu" << endl;
    cout << "1. cola" << endl;
    cout << "2. lemon-lime soda" << endl;
    cout << "3. ginger ale" << endl;
    cout << "4.root beer " << endl;
    cout << "5. orange soda" << endl;  
}

void displaysizetype(){
    cout << "Please select the size : " << endl;
    cout << "1. small" << endl;
    cout << "2. medium" << endl;
    cout << "3. large" << endl;
}

int prices(int size){
    int price=0;

    switch(size){
        case 1: 
            price =100;
            break;
        case 2:
            price =150;
            break;
        case 3:
            price =200;
            break;
        default : 
            cout << "Invalid size please select valid option" << endl;
            break; 
    }
    return price;
}

int main(){
    int choice,drinkchoice,size;

    do {
        displaymenu();
        cin >> choice;
        switch(choice){
            case 1:
                displaycoffee();
                cin >> drinkchoice;
                displaysizetype();
                cin >> size;
                cout << "price : " << prices(size) << endl;
                break;
            case 2:
                displaytea();
                cin >> drinkchoice;
                displaysizetype();
                cin >> size;
                cout << "price : " << prices(size) << endl;
                break;
            case 3: 
                displaymilk();
                cin >> drinkchoice;
                displaysizetype();
                cin >> size ;
                cout << "price :" << prices(size) << endl;
                break;
            case 4:
                displayjuice();
                cin >> drinkchoice;
                displaysizetype();
                cin >> size;
                cout << "price : " << prices(size) << endl;
                break;
            case 5:
                displaywater();
                cin >> drinkchoice;
                displaysizetype();
                cin >> size;
                cout << "price : " << prices(size) << endl;
                break;
            case 6:
                displaysoda();
                cin >> drinkchoice;
                displaysizetype();
                cin >> size;
                cout << "price : " << prices(size) << endl;
                break;
            case 7: 
                cout << "thank you for your order thank you !! , visit us again !!" << endl;
                break;
            default :
                cout << "invalid choice, please choice valid option !" << endl;
                break;   
        }
    }
    while(choice !=7);

    return 0;
}