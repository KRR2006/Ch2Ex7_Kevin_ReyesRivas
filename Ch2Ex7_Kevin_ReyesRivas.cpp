/*
Title: Chapter 2 Exercise 7 from Text - Ocean levels
File: Ch2Ex7_Kevin_ReyesRivas.cpp
Programmer: Kevin Reyes Rivas
Date: 08/2024
Requirements:
Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a program that displays:
• The number of millimeters higher than the current level 
        that the ocean’s level will be in 5 years.
• The number of millimeters higher than the current level 
        that the ocean’s level will be in 7 years.
• The number of millimeters higher than the current level 
        that the ocean’s level will be in 10 years.



*/

#include <iostream>
using namespace std;
const double levelRise = 1.5;


int main()
{
    double YearLevel5 = levelRise  * 5;
    double YearLevel7 =levelRise * 7;
    double YearLevel10 = levelRise * 10;
    cout << "After 5 years the Ocean will have risen " << YearLevel5 << "milimeters" << endl;
    cout << "After 7 years the Ocean will have risen " << YearLevel7 << "milimeters" << endl;
    cout << "After 10 years the Ocean will have risen " << YearLevel10 << "milimeters" << endl;
    return 0;
}

