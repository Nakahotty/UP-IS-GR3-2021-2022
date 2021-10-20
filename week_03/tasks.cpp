#include <iostream>

int main() {
    double bmi, w, h;
    std::cout << "Enter weight: ";
    std::cin >> w;

    std::cout << "Enter height: ";
    std::cin >> h;

    bmi = w / (h*h);
    std::cout << "Your BMI is " << bmi << std::endl;

    if (bmi > 25) {
        std::cout << "Overweight" << std::endl;
    } else if (bmi < 25 && bmi > 18.5) {
        std::cout << "Optimal" << std::endl;
    } else {
        std::cout << "Underweight" << std::endl;
    }

    return 0;
}