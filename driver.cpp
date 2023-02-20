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
            case 0:{ //Labs
                std::cout << "Enter in the lab assignment name('Week#'):" << "\n";
                std::cin >> name;
                std::cout << "Lab " << name << "\n";
            }

            case 1:{
                std::cout << "Enter in the assignment name('Assignment#'):" << "\n";
                std::cin >> name;
                std::cout << "Assignment " << name << "\n";
            }
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
    }

}
}

int main(int argc, char*argv[]){

    std::string fname(argv[1]);

    Gradebook *g = new Gradebook(fname);

    showMenu();
    userChoice(g);

    
}