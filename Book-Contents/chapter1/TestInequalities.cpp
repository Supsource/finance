#include<iostream>       // Console input and output
using namespace std;

#include "Inequalities.hpp"

int main(){
    double d1, d2;
    cout<<"Give the first number"<<endl;
    cin>>d1;

    cout<<"Give the second number"<<endl;
    cin>>d2;

    char c;
    cout<<"which function a) Max() or b) Min() ? ";
    cin>>c;
    if(c == 'a'){
        cout<<"Max value is : "<<Max(d1, d2)<<endl;
    }else{
        cout<<"Min value is : "<<Min(d1, d2)<<endl;
    }
}