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



int main(int argc, char* argv[]){
    
    std::cout << "Enter the file name to read from(including '.txt')" << "\n";
    std::string fname(argv[1]);

    //get fname that is 'good' in the directory


    showMenu();





}