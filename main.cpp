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

    std::string overall;

    std::string name;
    while (choice != 999)
    {
        switch(choice){
            //Individual Grades
            case 0: //Lab
                std::cout << "Enter in the lab assignment name('Week#'):" << "\n";
                std::cin >> name;
                std::cout << "Lab-> " << name << ": " <<g ->getIndividualGrade(name, choice) << "\n";
                break;

            case 1: //Assignment
                std::cout << "Enter in the assignment name('Assignment#'):" << "\n";
                std::cin >> name;
                std::cout << "Assignment-> " << name << ": " <<g ->getIndividualGrade(name, choice) << "\n";
                break;
            
            case 2: //Project 1 Grade
                name ="";
                std::cout << "Project 1: " <<g ->getIndividualGrade(name, choice) << "\n";
                break;

            case 3: //Project 2 Grade
                name ="";
                std::cout << "Project 2: " <<g ->getIndividualGrade(name, choice) << "\n";
                break;
            case 4: //Exam Grade
                name ="";
                std::cout << "Exam: "<<g ->getIndividualGrade(name, choice) << "\n";
                break;
            //Category Grades
            case 5:
                //test to show function working
                std::cout << "Lab Category Overall: " << g->computeCategoryScores(choice) << std::endl;
                break;
            case 6:
                std::cout << "Assignment Category Overall: " << g->computeCategoryScores(choice) << std::endl;
                break;
            case 7:
                std::cout << "Projects Category Overall: " << g->computeCategoryScores(choice) << std::endl;
                break;
            case 8:
                std::cout << "Exam Category Overall: " << g->computeCategoryScores(choice) << std::endl;
                break;
            //All specific grades
            case 9: //All graded Assignments 
                g -> allGradedAssignments();
                break;
            case 10:
                std::cout << "Lab Overall: " << g->computeCategoryScores(5) << std::endl;
                std::cout << "Assignment Overall: " << g->computeCategoryScores(6) << std::endl;
                std::cout << "Projects Overall: " <<  g->computeCategoryScores(7) << std::endl;
                std::cout << "Exam Overall: " <<  g->computeCategoryScores(8) << std::endl;
                overall = std::to_string(g->computeOverall());
                if(overall == "1000.000000"){
                    overall = "A";
                }
                std::cout << "Overall Grade: " << overall << std::endl;
                break;
            case 11:
                overall = std::to_string(g->computeOverall());
                if(overall == "1000.000000"){
                    overall = "A";
                }
                std::cout <<"Overall Grade: " << overall << std::endl;
                break;

            default:
                std::cout << "Invalid input! Expected numbers 0-11" << "\n";
        }
        
        showMenu();
        std::cout << "When finished type '999'" << "\n";
        std::cin >> choice;
    }   
}

int main(int argc, char*argv[]){

    std::string fname;

    if (argc == 1){
        while (fname == "")
        {
            std::cout << "Please enter a file name in your directory:";
            std::cin >> fname;
        }
    }
    else if (argc == 2){
        fname = argv[1];
    }

    Gradebook *g = new Gradebook(fname);

    //if invalid numbers are found !STOP PROGRAM!

    showMenu();
    userChoice(g);

    g->writeFile(fname);
    
}