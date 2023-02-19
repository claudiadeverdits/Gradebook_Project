//Class Function File

#include "gradebook.h"


gradeBook::gradeBook(){
    //default
}

gradeBook::gradeBook(int data){  //data type constructor 

}

gradeBook::gradeBook(std::vector<int> vec){  //vector constructor 

}

gradeBook::gradeBook(std::pair<std::string, int>){ //pair constructor

}

int gradeBook::specific_Grade(std::string keyword){
int target_grade;
    std::string num;
    std::string name;

    for (int i = 0; i < keyword.size(); i++) {
        if (keyword[i] == ' ') {
            num = keyword.substr(i+1, keyword.size());
            name = keyword.substr(0, i-1);
        }
    }

    num = std::stoi(num);


    //         -> 1( "Lab" keyword name) " " 2( "Week#" for expected grade) ==> Labs
    if (name == "Lab") {
        for (int i = 0; i < lab_Names.size(); i++) {
            if (num == lab_Grades[i]) {
                target_grade = lab_Grades[i];
                return target_grade;
            }
        }
    }

    //         -> 1( "Assignment" keyword name) " " 2("Assignment#" for expected grade) ==> Assignments
    else if (name == "Assigment") {
        for (int i = 0; i < assignment_Names.size(); i++) {
            if (num == assignment_Grades[i]) {
                target_grade = assignment_Grades[i];
                return target_grade;
            }
        }
    }

    //         -> 1( "Project1" keyword name)
    else if (name == "Project1") {
        target_grade = proj_1.second;
    }

    //         -> 1( "Project2"  keyword name)
    else if (name == "Project2") {
        target_grade = proj_2.second;
    }

    //         -> 1( "Exam" keyword name)
    else if (name == "Exam") {
        target_grade = exam.second;
    }
}
}
