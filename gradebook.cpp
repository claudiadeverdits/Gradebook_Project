#include "gradebook.h"

#include <iostream>
#include <vector>
#include <utility>
#include <fstream>
#include <sstream>


Gradebook::Gradebook(){
    //default
}

Gradebook::Gradebook(int data){  //data type constructor 

}

Gradebook::Gradebook(std::vector<int> vec){  //vector constructor 

}

Gradebook::Gradebook(std::pair<std::string, int>){ //pair constructor

}

bool Gradebook::valid_num(double num){
    if(num > 100 || num < 0){
        return false;
    }
    return true;
}

void Gradebook::readFile(std::string file_name){
    std::ifstream file(file_name);
    std::string line;

    double num;
    int invalid_nums = 0;

    while(std::getline(file, line)){
        std::istringstream s_stream(line);
        std::string token;

        std::string vec_name;
        std::getline(s_stream, vec_name, '|');

        if(vec_name == "LAB_Name"){
            while(std::getline(s_stream, token, '|')){
                this->LAB_names.push_back(token);
            }
        }
        else if(vec_name == "LAB_Grade"){
            while(std::getline(s_stream, token, '|')){
                num = std::stod(token);
                if(valid_num(num)){
                    this->LAB_grades.push_back(num);
                }
                else{
                    invalid_nums++;
                } 
            }
        }
        else if(vec_name == "ASSIGNMENT_Name"){
            while(std::getline(s_stream, token, '|')){
                this->ASSIGNMENT_names.push_back(token);
            }
        }
        else if(vec_name == "ASSIGNMENT_Grade"){
            while(std::getline(s_stream, token, '|')){
                num = std::stod(token);
                if(valid_num(num)){
                    this->ASSIGNMENT_grades.push_back(num);
                }
                else{
                    invalid_nums++;
                }
            }
        }
        else if(vec_name == "Project1"){
            PROJ1.first = vec_name;
            while(std::getline(s_stream, token, '|')){
                num = std::stod(token);
                if(valid_num(num)){
                    this->PROJ1.second = num;
                }
                else{
                    invalid_nums++;
                }
            }
        }
        else if(vec_name == "Project2"){
            PROJ2.first = vec_name;
            while(std::getline(s_stream, token, '|')){
                num = std::stod(token);
                if(valid_num(num)){
                    this->PROJ2.second = num;
                }
                else{
                    invalid_nums++;
                }
            }

        }
        else if(vec_name == "Final"){
            EXAM.first = vec_name;
            while(std::getline(s_stream, token, '|')){
                num = std::stod(token);
                if(valid_num(num)){
                    this->EXAM.second = num;
                }
                else{
                    invalid_nums++;
                }
            }
        }
    }
    if(invalid_nums > 0){
        std::cout << "You have " << invalid_nums << " invalid number(s) in your file. Please try again once all numbers are between 0 and 100." << std::endl;
    }
}