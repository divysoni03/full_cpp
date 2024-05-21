#include<iostream>
using namespace std;

namespace Math{
    int add(int a,int b){
        return a+b;
    }
    int subtract(int a,int b){
        return a-b;
    }
    int divide(int a,int b){
        return a/b;
    }
    int multiply(int a, int b){
        return a*b;
    }
    int square(int a){
        return a*a;
    }
    namespace Geometry{
        const double PI = 3.14;
        class Circle{
            private:
                double radius;
            public:
                Circle(double r):radius(r){}

                double getRadius(){
                    return radius;
                }

                double area(){
                    return PI * radius * radius;
                }

                double circumference(){
                    return 2* PI * radius;
                }
        };
    } // namespace geometry 
} //namespace maths

namespace Physics{
    float velocity(float distance, float time){
        return distance / time;
    }

    double kineticEnergy(double mass, double velocity){
        return 0.5 * velocity * velocity;
    }
}//namespace Physics

int main(){
    using namespace Math;
    using namespace Physics;
    using namespace Math::Geometry;

    cout << "5 + 3 = " << add(5,3) << endl;
    cout << "5 - 3 = " << subtract(5,3) << endl;
    cout << "5 * 3 = " << multiply(5,3) << endl;
    cout << " velocity = " << velocity(100, 50) << endl;
    cout << "square of 5 : " << square(5) << endl;

    Circle circle(5);

    cout << "circle radius = " << circle.getRadius() << endl;
    cout << "circle area = " << circle.area() << endl;
    cout << "circle circumference = " << circle.circumference() << endl;
    return 0;
}