#ifndef Inequalities_HPP
#define Inequalities_HPP

// Max and Min of two numbers
inline double Max(double x, double y) {
    return (x > y) ? x : y;
}

inline double Min(double x, double y) {
    return (x < y) ? x : y;
}

// Max and Min of three numbers (optional)
inline double Max(double x, double y, double z) {
    return Max(Max(x, y), z);
}

inline double Min(double x, double y, double z) {
    return Min(Min(x, y), z);
}

#endif