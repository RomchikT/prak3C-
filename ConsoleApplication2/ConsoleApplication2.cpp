#include <iostream> 

double calculateCircleArea(double radius) {
    return 3.14159 * radius * radius;
}
double calculateRingArea(double outerRadius, double innerRadius) {
    double outerArea = calculateCircleArea(outerRadius);
    double innerArea = calculateCircleArea(innerRadius);
    return outerArea - innerArea;
}

int main() {
    setlocale(LC_ALL, "Russian");
    double outerRadius, innerRadius;

    std::cout << "введи внешний радиус кольца: ";
    std::cin >> outerRadius;

    std::cout << "введи внутренний радиус кольца: ";
    std::cin >> innerRadius;

    double ringArea = calculateRingArea(outerRadius, innerRadius);
    std::cout << "площадь кольца: " << ringArea << std::endl;

    return 0;
}
