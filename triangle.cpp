#include<iostream>
int main()
{
    //program to calculate the area & perimeter of the isoceles triangle

    //Area of the isoceles triangle = 0.5(base*height)

    //Perimeter of the isoceles triangle = sum of all three sides

    double base, side1, side2, height;

    std::cout<<"Enter the value of base"<<std::endl;
    std::cin>>base;

    std::cout<<"Enter the value of height"<<std::endl;
    std::cin>>height;

    std::cout<<"Enter the value of side 1"<<std::endl;
    std::cin>>side1;

    std::cout<<"Enter the value of side 2"<<std::endl;
    std::cin>>side2;

    std::cout<<"Area of the isoceles triangle = "<<(0.5*base*height)<<std::endl;
    std::cout<<"Perimeter of the isoceles triangle = "<<(base+side1+side2)<<std::endl;

    return 0;

}