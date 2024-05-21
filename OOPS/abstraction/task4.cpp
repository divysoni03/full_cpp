// 4. Diet Planner Application:
//    - Problem: Develop an application to help users plan their diet by selecting meals from different cuisines.
//    - Test Case: Verify that the total calorie count of a selected meal plan is accurate.
//    - Logic: Create an abstract class 'Meal' with methods to calculate total calories. Subclasses like 'Breakfast', 'Lunch', 'Dinner', etc., implement calorie calculation logic based on the chosen cuisine.

#include<iostream>
using namespace std;

class Meal{
    protected:
        string name;
        int calories;
    public: 
        Meal(string name,int calories) : name(name),calories(calories){}
        virtual int calculateCalories() = 0;
};

class Breakfast : public Meal{
    public:
        Breakfast(string name,int calories) : Meal(name,calories) {}
        int calculateCalories() override{
            return calories;
        }
};

class Lunch : public Meal{
    public: 
        Lunch(string name,int calories) : Meal(name,calories){}
        int calculateCalories() override{
            return calories;
        }
};

class Dinner : public Meal{
    public:
        Dinner(string name, int calories) : Meal(name,calories){}
        int calculateCalories() override{
            return calories;
        }
};

int main(){
    Meal* foods[3];
    int totalcalories =0;

    foods[0] = new Breakfast("oats", 200);
    foods[1] = new Lunch("gujrati thali" , 600);
    foods[2] = new Dinner("dosa",300);

    for(int i=0;i<3;i++){
        totalcalories += foods[i]->calculateCalories();
    }

    cout << "Total calories : " << totalcalories << endl;
    return 0;
}