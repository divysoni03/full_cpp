#include<iostream>
using namespace std;

// class Stringconcate{
//     private:
//         string str;
//     public:
//         Stringconcate(){}
//         Stringconcate(string s) : str(s){}

//         Stringconcate operator+(Stringconcate& obj){
//             return Stringconcate(str + obj.str);
//         }
//         void display(){
//             cout << "Final String : " << str << endl;
//         }
// };  

class Stringmultiply{
    private:    
        string str;
    public: 
        Stringmultiply(){}
        Stringmultiply(string s) : str(s){} 
        string string1(string str,int num){
            string final;
            for(int i=0;i<num;i++){
                final += str;
            }
            return final;
        }   
        Stringmultiply operator *(int num){
            return Stringmultiply(string1(str,num));
        }

        void display(){
            cout << "Final String : " << str << endl;
        }

};

int main(){
    // Stringconcate s1("divy "),s2("Soni"),s3;
    // s3 = (s1 + s2);
    // s3.display();

    // Stringmultiply s1("divy"),s2;
    // s2 = s1*3
    // s2.display();

    Stringmultiply s1("divy");
    (s1*3).display();
    return 0;
}
