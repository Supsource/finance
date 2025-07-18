// Code file containing bodies of functions
#include "Inequalities.hpp"

// Max and Min of two numbers
double Max(double x, double y){
    if(x < y){
        return x;
    }
    return y;
}

double Min(double x, double y){
    if(x > y){
        return x;
    }
    return y;
}

// Max and Min of three numbers

double Max(double x, double y, double z){
    return Max(Max(x,y), z);
}

double Min(double x, double y, double z){
    return Min(Min(x,y), z);
}