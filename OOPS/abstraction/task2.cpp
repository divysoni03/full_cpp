// 2. Recipe Book Application:
//    - Problem: Develop an application to store and manage recipes from various cuisines,cooking,food
//    - Test Case: Verify that a recipe can be categorized into a specific cuisine,cooking style
//    - Logic: Define an abstract class 'Recipe' with methods to display ingredients and cooking instructions. Subclasses like 'ItalianRecipe', 'ChineseRecipe', etc., implement cuisine/cooking-specific details.

#include<iostream>
using namespace std;

class Recipe{
    protected:
        string name;
        float price;
    public:
        Recipe(string name,float price) :name(name),price(price){}
        virtual void cookingStyle() = 0;
};

class ItalianRecipe : public Recipe{
    public:
        ItalianRecipe(string name,float price): Recipe(name,price){}
        void cookingStyle() override{
            // cout << "\n\nItalian style pasta" << endl;
            cout << "\n\nName : " << name << "\nPrice : " << price << endl;
            cout << "1.Use a large pot\n2.Use lots of cold water\n3.Add kosher salt\n4.Stir frequently\n5.Avoid adding oil\n6.Cover the pot\n7.Taste for doneness\n8.Reserve the pasta water" << endl;
        }
};

class ChineseRecipe : public Recipe{
    public:
        ChineseRecipe(string name,float price): Recipe(name,price){}
        void cookingStyle() override{
            // cout << "\n\nChinese Manchurian Recipe" << endl;
            cout << "\n\nName : " << name << "\nPrice : " << price << endl;
            cout << "1.Heat oil in a pan and sauté chopped vegetables for a couple of minutes.\n2.Remove the vegetables to a bowl and let them cool.\n3.In a bowl, mix the vegetables with flour, salt, and chili flakes.\n4.Shape the mixture into balls.\n5.Heat oil for deep frying and fry the balls until golden brown.\n6.Drain the balls onto paper towels and set aside.\n7.In a pan, heat oil and sauté ginger, garlic, spring onion whites, and chilies for 2–3 minutes.\n8.Add sauces, salt, sugar, and chili flakes, and mix well.\n9.Add the fried balls and toss in the sauce.\n10.Add spring onion greens and mix well.\n11.Serve hot" << endl;
        }
};

int main(){
    ItalianRecipe i("pasta", 299);
    i.cookingStyle();

    ChineseRecipe c("manchurian", 110);
    c.cookingStyle();
    return 0;
}