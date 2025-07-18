#include<iostream>
using namespace std;

int main(){
    const int monthsInYear = 12;
    double principal = 0.0;
    cout<<"Enter the principal amount: "<<endl;;
    cin>>principal;
    double interest = 0.05;
    int yearOfLoan = 30;

    double monthInterst = interest / monthsInYear;
    long monthsOfLoan = yearOfLoan * monthsInYear;

    cout<<principal<<" "<<interest<<" "<<yearOfLoan<<" "<<monthInterst<<" "<<monthsOfLoan<<endl;
}