#include <iostream>
#include "divisor.h"

using namespace std;

int main() {
    const int monthsInYear = 12;
    const int percentDenominator = 100;

    double principal = 0.0;
    cout << "Enter the principal amount: ";
    cin >> principal;

    double humanInterest = 0.0;
    cout << "Enter the interest rate: ";
    cin >> humanInterest;
    double interest = divisor(humanInterest, percentDenominator);

    int yearsOfLoan = 0;
    cout << "Enter years of loan: ";
    cin >> yearsOfLoan;

    double monthInterest = divisor(interest, monthsInYear);
    long monthsOfLoan = multiplier(yearsOfLoan, monthsInYear);

    cout << principal << " " << interest << " " 
         << yearsOfLoan << " " << monthInterest << " " 
         << monthsOfLoan << endl;

    return 0;
}