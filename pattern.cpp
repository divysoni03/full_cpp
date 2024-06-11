#include<iostream>
using namespace std;

int main(){
    int count=0,row,count2=0,count0=0;
    cout << "Enter number of rows : ";
    cin >> row;
    count = (row*(row+1))/2;
    count2 = row;
    for(int i=0;i<row;i++){
        for(int j=0;j<i+1;j++){
            if(i==0 || j==0){
                cout << count << "  ";
            }
            else if(j%2 == 0 && i%2 !=0){
                count0 = (count0-(count2*2))-j;
                cout << count0 << "  ";
            }
            else if(j%2 != 0 && j>count2){
                count0 = (count0+(count2*2))-j;
                cout << count0 << "  ";
            }
            else{
                count0 = (count0-(count2*2))+j;
                cout << count0 << "  ";
            } 
        }
        count--;
        count0 = count;
        count2--;
        cout << endl;
    } 
    return 0;
}
