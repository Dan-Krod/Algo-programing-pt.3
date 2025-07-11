#include <iostream>
#include <cmath>
#include <iomanip>

double term(double x, int k) {
    return 1.0 / ((2 * k + 1) * pow(x, 2 * k + 1));
}

double sum1(double x, int n) {
    double z = 0.0;
    for (int k = 0; k <= n; k++) {
        z += term(x, k);
    }
    return z;
}

double sum2(double x, double eps) {
    double z = 0.0, ak = 1.0;
    int k = 0;
    while (fabs(ak) > eps) {
        ak = term(x, k);
        z += ak;
        k++;
    }
    return z;
}

double y(double x) {
    return 0.5 * log((x + 1) / (x - 1));
}

int main() {
    double x1 = 1.1, x2 = 2.0; 
    int n;                     
    double delta;     

    std::cout << "Input amount of row elements n: ";
    std::cin >> n;
    std::cout << "Input delta: ";
    std::cin >> delta;

    std::cout << std::setw(10) << "x" 
            << std::setw(15) << "Sn" 
            << std::setw(15) << "Se" 
            << std::setw(15) << "y" << std::endl;

    std::cout << std::string(55, '-') << std::endl;

    for (int j = 1; j <= 10; j++) {
        double x = x1 + (x2 - x1) * (j - 1) / 9;

        double sn = sum1(x, n);    
        double se = sum2(x, delta); 
        double y_val = y(x);        

        std::cout << std::setw(10) << x 
                << std::setw(15) << sn 
                << std::setw(15) << se 
                << std::setw(15) << y_val << std::endl;
    }

    return 0;
}
