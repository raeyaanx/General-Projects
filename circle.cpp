#include<iostream>
int main()
{
    //program to find the diameter, area and circumference of the circle using radius
    //radius is in units
    const double pi {3.14};
    double r, di, ar, cirf; // r = radius, di = diameter, ar = area, cirf = circumference

    std::cout << "Enter the value of radius" << std::endl;
       
       std::cin >> r;

    di = 2*r;
    ar = pi*r*r;
    cirf = 2*pi*r;

    std::cout << "Diameter = " << di << std::endl;

    std::cout << "Area = " << ar << std::endl;

    std::cout << "Circumference = " << cirf << std::endl;

    /* Next development will include calculations based on semi-circles, Quadrants, arc length and
       radian angle*/
    
    
    
    return 0;


    
}
