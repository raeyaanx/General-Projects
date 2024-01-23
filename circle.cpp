#include<iostream>
int main()
{
    //program to find the value of diameter, area and circumference of the circle
    
    double r, diameter, area, circf; //r = radius, diameter, area, circf = circumference

    const double pi = 3.14; //constant value of pi = 3.14 throughout the code

    std::cout<<"Enter the value of radius"<<std::endl;
    std::cin>>r;

    diameter = 2*r;
    area = pi*r*r;
    circf = diameter*pi; //diameter = 2*r & pi, so circf = 2*pi*r or diameter*pi

    std::cout<<"Diameter = "<<diameter<<std::endl;
    std::cout<<"Area = "<<area<<std::endl;
    std::cout<<"Circumference = "<<circf<<std::endl;
    

    return 0;

}