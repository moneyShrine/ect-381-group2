// main.cpp

#include <iostream>
#include <string>
#include "grade_calculator.h"
#include "cgpa_calculator.h"

int main() {
    int numCourses;
    std::cout<<"Welcome to the CGPA Calculator Program Version 1.0\n";
    std::cout<<"This program asks for your grade and credit unit\nAnd uses it to calculates your CGPA\n\n";
    std::cout<<"==========================================================================";
    std::cout << "\nEnter the number of courses you offer: ";
    std::cin >> numCourses;

    std::string* grades = new std::string[numCourses];
    int* creditHours = new int[numCourses];

    for (int i = 0; i < numCourses; ++i) {
        std::cout << "\nEnter the grade for course (Like this A, B, C, D, E or F. Do not type in lowercase.)\n";
		std::cout <<"Enter the grade for course " << i + 1 << ": ";
        std::cin >> grades[i];

        std::cin.ignore();  // Ignore the newline character after reading the grade

        std::cout << "Enter the credit hours for course " << i + 1 << ": ";
        std::cin >> creditHours[i];
    }

    // Convert grades from std::string to const char*
    const char** gradesArr = new const char*[numCourses];
    for (int i = 0; i < numCourses; ++i) {
        gradesArr[i] = grades[i].c_str();
    }

    float cgpa = calculateCGPA(gradesArr, creditHours, numCourses);

    if (cgpa >= 0.0) {
        std::cout << "Your CGPA is: " << cgpa << std::endl;
    } else {
        std::cout << "Invalid grade entered. Please check your input." << std::endl;
    }

    delete[] grades;
    delete[] creditHours;
    delete[] gradesArr;

    return 0;
}

