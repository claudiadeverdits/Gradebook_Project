#include "gradebook.h"

#include <iostream>
#include <vector>
#include <utility>
#include <fstream>
#include <sstream>
#include <string>


Gradebook::Gradebook(std::string fname){
    //default

    //getting input and check file name from terminal
    std::string *file_name = &fname;
    check_file_name(file_name);

}

void Gradebook::writeFile(std::string fname){
    std::ofstream file;
    file.open(fname);

    //output name and course
    file << student_name << "|" << course_name << "\n";

    //labs
    file << "LAB_Name";
    for(int i = 0; i < LAB_names.size(); i++){
        file << "|" << LAB_names[i];
    }
    file << "\n";

    file << "LAB_Grade";
    for(int i = 0; i < LAB_grades.size(); i++){
        file << "|" << LAB_grades[i];
    }
    file << "\n";

    //assignments
    file << "ASSIGNMENT_Name";
    for(int i = 0; i < ASSIGNMENT_names.size(); i++){
        file << "|" << ASSIGNMENT_names[i];
    }
    file << "\n";

    file << "ASSIGNMENT_Grade";
    for(int i = 0; i < ASSIGNMENT_grades.size(); i++){
        file << "|" << ASSIGNMENT_grades[i];
    }
    file << "\n";

    //proj1
    file << PROJ1.first << "|" << PROJ1.second << "\n";

    //proj2
    file << PROJ2.first << "|" << PROJ2.second << "\n";

    //exam
    file << EXAM.first << "|" << EXAM.second << "\n";

    //if overall was never calculated, calculate now
    if(course_overall == "N/A" && invalidNums == 0){
        computeOverall();
    }
    file << "Course Overall|" << course_overall;

    file.close();

}

void Gradebook::allGradedAssignments(){

    std::string dropped = "-D";
    std::cout << "Graded Lab Assignments" << "\n";
    for (int i = 0; i < LAB_names.size(); i++){
        if (LAB_grades[i] != "N/A")
            std::cout << "\t" << LAB_names[i] << ": " << LAB_grades[i] << "\n";
        else
            std::cout << LAB_names[i] << ": is not graded yet";
    }   
    
    std::cout << "\n";

    std::cout << "Graded Assignments" << "\n";
    for (int i = 1; i < ASSIGNMENT_grades.size(); i++){
        if (ASSIGNMENT_grades[i] != "N/A")
            std::cout << "\t" << ASSIGNMENT_names[i] << ": " << ASSIGNMENT_grades[i] << "\n"; 
        else
            std::cout << "\t" << ASSIGNMENT_names[i] << ": is not graded yet" << "\n"; 
    }
    std::cout << "\n";

    std::cout << "Graded Projects: " << "\n";
    if ( PROJ1.second != "N/A")
        std::cout << "\t" << PROJ1.first << ": " << PROJ1.second << "\n";
    else
        std::cout << "Project1 is not graded yet";

    if ( PROJ2.second != "N/A")
        std::cout << "\t" << PROJ2.first << ": " << PROJ2.second << "\n";
    else
        std::cout << "Project2 is not graded yet";

    std::cout << "\n";

    std::cout << "Graded Exam:" << "\n";
    if (EXAM.second != "N/A")
        std::cout << "\t" << EXAM.first << ": " << EXAM.second << "\n";
    else
        std::cout << "Exam is not graded";
}


std::string Gradebook::getIndividualGrade(std::string name, int num){


    if (num == 0){ //Lab Grade
        for (int i = 0; i < LAB_names.size(); i++)
        {
            if (LAB_names[i] == name)
                return LAB_grades[i];
        }
    }
    else if (num == 1){ //Assignment Grade
        for (int i = 0; i < ASSIGNMENT_names.size(); i++)
        {
            if (ASSIGNMENT_names[i] == name)
                return ASSIGNMENT_grades[i];
        }
    }
    else if (num == 2){ //Project 1 Grade
        return PROJ1.second;
    }
    else if (num == 3){ //Project 2 Grade
        return PROJ2.second;
    }
    else if (num == 4){ //Project 2 Grade
        return EXAM.second;
    }
        
    return "Invalid Name";

}

void Gradebook::check_file_name(std::string* file_name){
    std::ifstream file;

    file.open(*file_name);

    while(!file){
        std::cout << "File does not exist. Please enter the correct name: ";
        std::cin >> (*file_name);
        file.open(*file_name);
    }

    if (readFile(*file_name) > 0){
        writeFile((*file_name));
        exit(0);
    }
}

bool Gradebook::valid_num(std::string num){
    double number = std::stod(num);
    if(number > 100 || number < 0){
        return false;
    }
    return true;
}

void Gradebook::find_lowest_idx(){
    double score;
    double lowest, second_lowest;
    int idx;

    for(int j = 0; j < 2; j++){
        lowest = std::stod(LAB_grades[0]);
        for(int i = 0; i < LAB_grades.size(); i++){
            score = std::stod(LAB_grades[i]);
            if(score <= lowest && j == 0){
                lowest = score;
                second_lowest = score;
                idx = i;
            }
            else if(score <= lowest && score != second_lowest){
                lowest = score;
                idx = i;
            }
        }
        LAB_lowest_idx.push_back(idx);
    }
    LAB_grades[LAB_lowest_idx[0]] += " -D";
    LAB_grades[LAB_lowest_idx[1]] += " -D";
}

int Gradebook::readFile(std::string file_name){
    std::ifstream file(file_name);
    std::string line;

    double num;
    int invalid_nums = 0;

    //read student name and course name from file
    std::getline(file, line);
    std::istringstream ss(line);
    std::getline(ss, this->student_name, '|');
    std::getline(ss, this->course_name);

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
                if(valid_num(token)){
                    this->LAB_grades.push_back(token);
                }
                else{
                    this->LAB_grades.push_back("###");
                    invalid_nums++;
                } 
            }
            if(invalid_nums == 0){
                find_lowest_idx();
            }
        }
        else if(vec_name == "ASSIGNMENT_Name"){
            while(std::getline(s_stream, token, '|')){
                this->ASSIGNMENT_names.push_back(token);
            }
        }
        else if(vec_name == "ASSIGNMENT_Grade"){
            while(std::getline(s_stream, token, '|')){
                if(valid_num(token)){
                    this->ASSIGNMENT_grades.push_back(token);
                }
                else{
                    this->ASSIGNMENT_grades.push_back("###");
                    invalid_nums++;
                }
            }
        }
        else if(vec_name == "Project1"){
            PROJ1.first = vec_name;
            while(std::getline(s_stream, token, '|')){
                if(valid_num(token)){
                    this->PROJ1.second = token;
                }
                else{
                    this->PROJ1.second = "###";
                    invalid_nums++;
                }
            }
        }
        else if(vec_name == "Project2"){
            PROJ2.first = vec_name;
            while(std::getline(s_stream, token, '|')){
                if(valid_num(token)){
                    this->PROJ2.second = token;
                }
                else{
                    this->PROJ2.second = "###";
                    invalid_nums++;
                }
            }

        }
        else if(vec_name == "Final"){
            EXAM.first = vec_name;
            while(std::getline(s_stream, token, '|')){
                if(valid_num(token)){
                    this->EXAM.second = token;
                }
                else{
                    this->EXAM.second = "###";
                    invalid_nums++;
                }
            }
        }

       
    }
    if(invalid_nums > 0){
        std::cout << "You have " << invalid_nums << " invalid number(s) in your file. Please try again once all numbers are between 0 and 100." << std::endl;
    }

    this->invalidNums = invalid_nums;
     return invalid_nums;
}

double Gradebook::computeCategoryScores(int choice){
    std::vector<std::string>* category_vec;
    double category_total = 0;

    if(choice == 5){
        category_vec = &LAB_grades;
    }
    else if(choice == 6){
        category_vec = &ASSIGNMENT_grades;
    }
    else if(choice == 7){
        double proj1 = std::stod(PROJ1.second);
        double proj2 = std::stod(PROJ2.second);
        return ((proj1 * .15) + (proj2 * .35)) * 2;
    }
    else if(choice == 8){
        double exam = std::stod(EXAM.second);
        return exam;
    }

    double score;
    for(int i = 0; i < (*category_vec).size(); i++){
        score = std::stod((*category_vec)[i]);
        //exclude 2 lowest grades
        if(score != std::stod(LAB_grades[LAB_lowest_idx[0]]) && score != std::stod(LAB_grades[LAB_lowest_idx[1]])){
            category_total += score;
        }
    }
    //adjust size if computing lab grades
    if(category_vec == &LAB_grades){
        category_total /= (*category_vec).size() - 2;
    }
    else{
        category_total /= (*category_vec).size();
    }

    return category_total;
}

double Gradebook::computeOverall(){
    double overall_score = 0;

    double temp_score;

    //labs
    temp_score = computeCategoryScores(5);
    overall_score += (temp_score * .20);

    //assignments
    temp_score = computeCategoryScores(6);
    overall_score += (temp_score * .20);

    //projects
    double proj1 = std::stod(PROJ1.second);
    double proj2 = std::stod(PROJ2.second);
    overall_score += (proj1 * .15) + (proj2 * .35);

    //exam only if overall is under 90
    if(overall_score < 90){
        double exam = std::stod(EXAM.second);
        overall_score += (exam * .10);
    }
    else
        EXAM.second = "PASS";

    this->course_overall = std::to_string(overall_score);

    return overall_score;
}