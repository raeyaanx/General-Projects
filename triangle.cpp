#include<iostream>
#include<cmath>
int main()
{
/* Program to find the area and perimeter of a triangle */

//This program will include the perimeter and area of the triangle
 
//Area will be calculated using Heron's Formula

double side1, side2, side3, s, area, perimeter; //s = perimeter/2

                                               //ar = sqrt(s*(s - side1)(s - side2)(s - side3))

std::cout << "Enter the value of 1st side" << "\n";

     std::cin >> side1;

std::cout << "Enter the value of 2nd side" << "\n";

     std::cin >> side2;

std::cout << "Enter the value of 3rd side" << "\n";

     std::cin >> side3;

perimeter = side1 + side2 + side3;

s = perimeter/2;

area = sqrt(s*(s - side1)*(s - side2)*(s - side3));

std::cout << "Area of the triangle = " << area << "\n";

std::cout << "\n";

std::cout << "Perimeter of the triangle = " << perimeter << "\n";


return 0;
}
