#include<iostream>
using namespace std;


class Study {
    int w_theory;
    int w_practical;

public:
    Study() {
        w_theory = 70;
        w_practical = 30;
    }

    void displayWeightage() {
        cout << "\nWeightage of Theory Portion: " << w_theory << endl;
        cout << "Weightage of Practical Portion: " << w_practical << endl;
    }
};

int main() {
    // int a = 45;
    // int *p_a = &a;
    // cout << *p_a;

    Study study;
    // study.displayWeightage();

    Study *s;
    s = &study;
    s->displayWeightage();

    return 0;
}


//* indirection operator
//-> member access operator