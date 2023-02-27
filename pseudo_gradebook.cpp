/*
Including Necessary Libraries
 ==> These libraries are used to help improve our code's functionality during runtime when
     accessing data type members, when reading and writing to a file, and printing results into 
     the terminal.
*/
/*
Including Required Header Files
 ==> When using inheritance in Object Oriented Program, a header file contains the declarations of 
     the gradebook.cpp file. To use the derived file the program is required to #include "gradebook.h"
     when using the Gradebook g object in our main.cpp class.
*/


Gradebook::Gradebook(std::string fname){

    /*
        Our Default Constructor

        Creates a string pointer file name '*file_name', that points the the address of fname (&fname). 
        After this conversion, the constructor will use the helper function 'check_file_name' to verify 
        if the entered file name is in the directory.

        intializing string pointer *file_name equal it to address of parameter

        call check_file_name function with parameter 'file_name'
    */
}
void Gradebook::writeFile(std::string fname){
    /*
        Writing File Function

        This function will write over the content of the file after runtime is completed and has ended.

        create a ofstream variable file
        open the file with passed in parameter

        get the name of the student and course

        linearly read through the text file

            for loop rewrite the row for lab names, seperated by '|'

            for loop rewrite the row for lab grades, seperated by '|'

            for loop rewrite the row for assignment names, seperated by '|'

            for loop rewrite the row for assignment grades, seperated by '|'

            rewrite Project1 with pair.first, seperated by '|', pair.second

            rewrite Project2 with pair.first, seperated by '|', pair.second

            rewrite Exam with pair.first, seperated by '|', pair.second

            write course overall with string "Course Overall", seperated by '|', value course overall
        
        close the file
    */

}
void Gradebook::allGradeAssignments(){

    /*
        All Graded Assignments Function 

        This function will print out all of the graded assignments of the text file

        create a string overall and get its overall grade from function computeOverall()
        if the overall is "1000.000000"
            overall equals "A"
        
        std::cout header for graded lab assignments
            for loop to show all lab names, separated by ": ", and with lab grades
        
        std::cout new line separator
        
        std::cout header for graded homework assignments
            for loop to show all graded homework names, separated by ": ", and with graded homework grades
        
        std::cout new line separator

        std::cout header for graded projects
            std::cout project1 name, separated by ": ", and with project1 grade
            std::cout project2 name, separated by ": ", and with project2 grade
        
        std::cout new line separator

        std::cout header for graded exam
            std::cout exam name, separated by ": ", and with exam grade

        std::cout new line separator
    */

}
std::string Gradebook::getIndividualGrade(std::string name, int num){

    /*
        Get Individual Grade Function

        This function will return the grade of an assingment based on the string name of the assignment and the choice
        from the main.cpp menu

        conditional case if num is 0
            loop through lab names vector until the end of the vector
                if the labs name iterator is the same as the passed in name parameter 
                    return the lab grade at the iterator

        conditional case if num is 1
            loop through assignment names vector until the end of the vector
                if the assignment name iterator is the same as the passed in name parameter 
                    return the lab grade at the iterator

        conditional case if num is 2
            return project1 .second (from pair function)

        conditional case if num is 3
            return project2 .second (from pair function)

        conditional case if num is 4
            return exam .second (from pair function)
        
        return an invalid string when parameter name is not in the vector
    */

}
void Gradebook::check_file_name(std::string* file_name){

    /*
        Check File Name Function

        This function will be checking if the text file exists within the directory.

        create a ifstream for file object

        open the file with the pointer file_name parameter

        create a constant loop until the file name exists

        check if the file has any invalid grades
            if there are invalid grades
                rewrite over the file and identify invalid grades
                exit code 0 to end the program
    */

}
bool Gradebook::valid_num(std::string num){

    /*
        Valid Number Function

        This function will return a boolean value to determine if the number is within [0-11] inclusively

        create a double number variable that converts the string to a double

        create a conditional if the number is greater than 100 or the number is less than 0
            return false
        
        return true when the number is within [0-11]
    */

}
void Gradebook::find_lowest_idx(){

    /*
        Find Lowest Index Function

        This function will read through the lab grades vector and find which two indexes have the lowest graded values

        initialize a double 'score'

        initialize a double 'lowest' and 'second_lowest'

        initializae a integer index

        create a nest for loop through the size of lab grades
            if the score is less than or equal to lowest
                lowest is equal to lowest score
                the second_lowest score is equal to score
                index is equal to the first for loop iterator
            else if the score less than or equal to lowest and the first for loop iterator does not equal lab last index at 0
                lowest equals score
                index = i

        push back the index of the lowest score onto the lab lowest index vector

        adding '-D' to the indexes with the lowest lab grades
    */

}
int Gradebook::readFile(std::string file_name){

    /*
        Read File Function

        This function will read the file name from the user and populate the vectors and projects and exam pairs. Also,
        when using the valid_num helper function, the algorithm will notice the invalid grade and change its value to 
        '###' in the user's file.

        create an ifstream object for the file name

        initialize a string to hold each line of the file

        initialize double num variable
        initialize invalid number variable 

        get the first line of the file to get the student name and course, seperated by '|'

        create a while loop with the condition of gettting each line of the file with second argument string line
            create object istringstream s_stream of line
            create string variable to tokenize the values

            create a string call vec_name
            getline the(s_stream, vec_name, '|')

            conditional if vec_name is "LAB_Name"
                tokenize all lab names and push back into lab names vector
            
            conditional if vec_name is "LAB_Grade"
                tokenize the grade
                conditional if lab grade is valid num
                    push the token into the lab grade vector
                else 
                    push back '###' at invalid grade index
                    increment invalid number variable +1
                
                if invalid nums is equal to 0
                    find the lowest indexes to drop grades in vector
            
            conditional if vec_name is "Assignment_Name"
                tokenize all lab names and push back into assignment names vector
            
            conditional if vec_name is "Assignment_Grade"
                tokenize the grade
                conditional if assignment grade is valid num
                    push the token into the assignment grade vector
                else 
                    push back '###' at invalid grade index
                    increment invalid number variable +1
            
            conditional if vec_name is "Project1"
                project1 pair .first equals vec_name
            
                tokenize the second number in line
                    if the number is valid num 
                        .second equals the tokenized number
                    else 
                        change index to '###'
                        increment invalid number variable +1
            
            conditional if vec_name is "Project2"
                project2 pair .first equals vec_name
            
                tokenize the second number in line
                    if the number is valid num 
                        .second equals the tokenized number
                    else 
                        change index to '###'
                        increment invalid number variable +1

            conditional if vec_name is "Final"
                exam pair .first equals vec_name
            
                tokenize the second number in line
                    if the number is valid num 
                        .second equals the tokenized number
                    else 
                        change index to '###'
                        increment invalid number variable +1

        
        conditional if invalid num is greater than 0
            std::cout to user the number fo invalid num, prompt to change the grades in the file between [0-100]
        
        return invalid nums
    */

}
double Gradebook::computeCategoryScores(int choice){

    /*
        Compute Category Scores Function

        This function will show the category grade of labs, assignments, projects, and exam into the terminal.

        initialize a pointer string vector for categories

        initalize double variable for category total

        initialize double variable score

        conditional if choice is equal to five
            loop through all indexes of lab grades
                score is equal to the converted string to double at index in lab grade 

                conditional if the index does not equal both lowest lab grades
                    category total equals the sum of all scores 
            
            category total equals the size of lab grades vector minus two
        
        conditional if choice is equal to six
            loop through assignment grades vector
                score is equal to the converted string to double at index in assignment grade 

                category total equals the sum of all scores 
        
            category total equals category totals divided by the size of the assingment grade vector
        
        conditional if choice is equal to seven
            initialize double variable for project1 .second and convert string to double
            initialize double variable for project2 .second and convert string to double

            return (project1 * 15%) + (project2 * %35) * number of projects in course
        
        conditional if choice equals eight
            intialize double varaible for exam .second and convert string to double
            return exam grade
    */

}
double Gradebook::computeOverall(){

    /*
        Computer Overall Function

        This function will be returning the overall score of all assignment grades

        initialize overall score 
        
        initialize temp score

        get the category score for labs and add value to overall score
        get the category score for assignment and add value to overall score
        get the category score for project1 and add value to overall score
        get the category score for project2 and add value to overall score

        divide overall score by 90

        conditional if overall score is less than 90

            overall score equals overall score times 90
            initialize a value to hold exam grade
            add the value of the exam to the overall
            divide overall score by 100
            course overall equals overall score by converting the double value to string
        
        conditional else 

            make the exam grade to "PASS"
            overall score equals 1000
            make course overall equal to "A"
        
        return the course overall
    */

}
