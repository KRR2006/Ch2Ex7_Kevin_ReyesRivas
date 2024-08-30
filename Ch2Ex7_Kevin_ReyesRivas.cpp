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
//const double levelRise = 1.5;


int main()
{
        double levelRise;
        double YearLevel5;
        double YearLevel7;
        double YearLevel10;
        double YearLevel15;

        cout << "Please enter the milimeter rise you expect each year:";
        cin >> levelRise;
        YearLevel5 = levelRise * 5;
        YearLevel7 = levelRise * 7;
        YearLevel10 = levelRise * 10;
        YearLevel15 = levelRise * 15;


    cout << "After 5 years the Ocean will have risen " << YearLevel5 << "milimeters" << endl;
    cout << "After 7 years the Ocean will have risen " << YearLevel7 << "milimeters" << endl;
    cout << "After 10 years the Ocean will have risen " << YearLevel10 << "milimeters" << endl;
    cout << "After 15 years the Ocean will have risen " << YearLevel15 << "milimeters" << endl;
    return 0;
}

