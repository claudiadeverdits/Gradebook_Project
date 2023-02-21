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
        std::cout << "\t" << "To view Labs assignment: '0'" << "\n";
        std::cout << "\t" << "To view an Assignment: '1'" << "\n";
        std::cout << "\t" << "To view Project 1: '2'" << "\n";
        std::cout << "\t" << "To view Project 2: '3'" << "\n";
        std::cout << "\t" << "To view the Exam: '4'" << "\n" << "\n";

    std::cout << "View a category grade, type the following in the terminal:" << "\n";
        std::cout << "\t" << "To view Labs: '5'" << "\n";
        std::cout << "\t" << "To view Assignments: '6'" << "\n";
        std::cout << "\t" << "To view Projects: '7'" << "\n";
        std::cout << "\t" << "To view the Exam: '8'" << "\n" << "\n";

    std::cout << "View certain grades, type the following in the terminal:" << "\n";
        std::cout << "\t" << "To view all graded assignments: '9'" << "\n";
        std::cout << "\t" << "To view all category and overall averages: '10" << "\n";
        std::cout << "\t" << "To view only overall grades: '11'" << "\n";
}

void userChoice(Gradebook *g){


    int choice;
    std::cin >> choice;

    std::string name;
    while (choice != 999)
    {
        switch(choice){
            //Individual Grades
            case 0: //Labs
                std::cout << "Enter in the lab assignment name('Week#'):" << "\n";
                std::cin >> name;
                std::cout << "Lab " << name << "\n";
                break;

            case 1:
                std::cout << "Enter in the assignment name('Assignment#'):" << "\n";
                std::cin >> name;
                std::cout << "Assignment " << name << "\n";
                break;
            
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            //Category Grades
            case 5:
                //test to show function working
                std::cout << g->computeCategoryScores(choice) << std::endl;
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            //All specific grades
            case 9:
                break;
            case 10:
                break;
            case 11:
                break;

            default:
                std::cout << "Invalid input! Expected numbers 0-11" << "\n";
        }

    }   
}

int main(int argc, char*argv[]){

    std::string fname(argv[1]);

    Gradebook *g = new Gradebook(fname);

    showMenu();
    userChoice(g);

    
}