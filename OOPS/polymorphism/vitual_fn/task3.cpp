// 3. Animal Hierarchy: Implement a base class 'Animal' with virtual function 'makeSound()'. Derive classes 'Dog' and 'Cat' from 'Animal', each with its own implementation of 'makeSound()'. Write a program to demonstrate polymorphism by making various animals (instances of 'Dog' and 'Cat') produce their respective sounds.

#include<iostream>
using namespace std;

class Animal{
    private:
        string sound;
    public: 
        Animal(){
            this->sound = "";
        }
        virtual void makeSound(){
            cout << "sound : " << sound << endl;
        }
};

class dog : public Animal{
    private:
        string sound;
    public:
        dog(){
            this->sound = "bhau bhau bhau bhau";
        }
        void makeSound() override{
            cout << "dog sound : " << sound << endl;
        }
};  


class cat : public Animal{
    private:
        string sound;
    public: 
        cat(){
            this->sound = "meow meow meow meow";
        }
        void makeSound() override {
            cout << "cat sound : " << sound << endl;
        }
};

int main(){
    Animal * a;

    dog d1,d2;
    cat c1;

    a = &d1;
    a->makeSound();

    a = &d2;
    a->makeSound();

    a = &c1;
    a->makeSound();
    return 0;
}