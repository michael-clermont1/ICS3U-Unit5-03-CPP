// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Michael Clermont
// Created on: May 2022
// This program uses user defined functions

#include <iostream>
#include <string>

int GradePercentage(std::string grade) {
    // calculate percentage
    int percentage;

    // process
    if (grade == "R") {
        percentage = 30;
    } else if (grade == "1-") {
        percentage = 51;
    } else if (grade == "1") {
        percentage = 55;
    } else if (grade == "1+") {
        percentage = 58;
    } else if (grade == "2-") {
        percentage = 61;
    } else if (grade == "2") {
        percentage = 65;
    } else if (grade == "2+") {
        percentage = 68;
    } else if (grade == "3-") {
        percentage = 71;
    } else if (grade == "3") {
        percentage = 75;
    } else if (grade == "3+") {
        percentage = 78;
    } else if (grade == "4-") {
        percentage = 83;
    } else if (grade == "4") {
        percentage = 91;
    } else if (grade == "4+") {
        percentage = 97;
    } else {
        percentage = -1;
    }

    return percentage;
}

main() {
    // this function gets the grade percentage

    std::string gradeLevel;
    int calculatedPercentage;

    // input
    std::cout << "Enter the level you want converted to a percentage: ";
    std::cin >> gradeLevel;
    std::cout << std::endl;

    // call functions
    calculatedPercentage = GradePercentage(gradeLevel);
    std::cout << "Level " << gradeLevel << " has a middle percentage of "
    << calculatedPercentage << "." << std::endl;
    std::cout << "\nDone." << std::endl;
}
