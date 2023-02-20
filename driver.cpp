// DRIVER

#include "gradebook.h"

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>


void showMenu(){

    std::cout << "\t---Gradebook Terminal---" << "\n" << "\n";

    std::cout << "View an individual grade, type the following in the terminal:" << "\n";
    std::cout << "Note: '#' is intended to be replaced with the associated assessment number" << "\n";
        std::cout << "\t" << "To view Labs assignment: Lab Week#" << "\n";
        std::cout << "\t" << "To view an Assignment: 'Assignment Assignment#'" << "\n";
        std::cout << "\t" << "To view Project 1: 'Project1'" << "\n";
        std::cout << "\t" << "To view Project 2: 'Project2'" << "\n";
        std::cout << "\t" << "To view the Exam: 'Exam'" << "\n" << "\n";

    std::cout << "View a category grade, type the following in the terminal:" << "\n";
        std::cout << "\t" << "To view Labs: 'Labs'" << "\n";
        std::cout << "\t" << "To view Assignments: 'Assignments'" << "\n";
        std::cout << "\t" << "To view Projects: 'Project1'" << "\n";
        std::cout << "\t" << "To view the Exam: 'Exam'" << "\n" << "\n";

    std::cout << "View certain grades, type the following in the terminal:" << "\n";
        std::cout << "\t" << "To view all graded assignments: 'All'" << "\n";
        std::cout << "\t" << "To view all category and overall averages: 'Averages'" << "\n";
        std::cout << "\t" << "To view only overall grades: 'Overall'" << "\n";
}

int main(int argc, char*argv[]){

    std::string fname(argv[1]);

    Gradebook *g = new Gradebook(fname);
    
    // std::string input;
    // std::cout << "Enter the file name to read from(including '.txt')" << "\n";
    // std::cin >> input;

    // std::string *fname = &input;

    // //get fname that is 'present' in the directory
    // showMenu();
/*
    int choice;
    std::cin >> choice;

    std::string name;
    switch(choice){
        
        //Individual Grades
        case 0: //Labs
            std::cout << "Enter in the lab assignment name('Week#'):" << "\n";
            std::cin >> name;
            std::cout << "Lab " << name << "\n";

        case 1:
            std::cout << "Enter in the assignment name('Assignment#'):" << "\n";
            std::cin >> name;
            std::cout << "Assignment " << name << "\n";

        case 2:
        case 3:
        case 4:
        //Category Grades
        case 5:
        case 6:
        case 7:
        case 8:
        //All specific grades
        case 9:
        case 10:
        case 11:


        default:

    }

    showMenu();
    */
}