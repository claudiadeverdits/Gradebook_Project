/*
Defining The Header File
#indef GRADEBOOK_H
#define GRADEBOOK_H

    These above lines of code is requred for initializing and defining the header class
*/

/*
Including Necessary Libraries
 ==> These libraries are used to help improve our code's functionality during runtime when
     accessing data type members, when reading and writing to a file, and printing results into 
     the terminal.
*/

class Gradebook{

/*
    private:

        Declaring variables that will be using in gradebook.cpp (the derived class of main.cpp)

        Vectors
            Lab names and Lab grades
            Assignemnt names and Assignment grade
            Lab's lowest index vector (for dropping exam grades)

        Pairs
            project1 pair <string for project name, int num for grade for assingment>
            project2 pair <string for project name, int num for grade for assingment>
            exam pair <string for project name, int num for grade for assingment>

        Integers
            integer for invalidNums
                ==> when reading from the file and keeping note of invalid assignment grades
        
        String
            fname 
                ==> keeps file name
            
            student_name
                ==> keeps student's name from the file
            
            course_name
                ==> keeps course name that the student is taking 
            
            course_overall
                ==> coded to have "N/A", as the begining case before calculating the overall grade
        
        Helper Functions (exclusively for gradebook.cpp)
            ==> These below lines of functions are known as private class object declarations that can only be used in the
                gradebook.cpp file

            bool valid_num(std::string num);
                ==> boolean helper function which will return the boolean value 'false' when a grade from the string vectors,
                    or assignment pairs are greater than 100 or less than 0

            int readFile(std::string file_name);
                ==> The 'readFile' function is responsible for reading the text file that was entered by the user. The function
                    will handle casese when grade values are pushed back into the expected vector. Druing the function, 
                    it will keep track of any grades that are valid based on the helper function 'valid_num' and prompt the user 
                    after reading the file entirely. When the algorithm finds an invalid number in the file, the function 
                    will prompt the user the number of invalid grades and rewite the locations with '###'. The user is 
                    required to go back to their file and change the grade with a value pf [0-100] inclusively.

            void check_file_name(std::string* file_name);
                ==> This function using a pointer for the file name that is entered from the user. The 'file_name' pointer
                    will constantly have a new string value until the program finds the correct case sensitive file name
                    in the user's directory. Also, the function will stop if there is a number greater than 0 from the 
                    readFile function and the code will quit its runtime. 

            void find_lowest_idx();
                ==> This helper function is designed to find the lowest two lab grades within the lab grades vector.
                    Once the program finds the lowest two lab grades, the program will append to the string '- D' to
                    visually show the user to dropped lab grades. When the user enters '999', the program will rewrite the 
                    file to show the dropped grades.

    public:

        Gradebook(std::string fname);
            ==> This is our default constructor which recieves the file name from the user in main.cpp. Creates a 
            string pointer file name '*file_name', that points the the address of fname (&fname). After this conversion,
            the constructor will use the helper function 'check_file_name' to verify if the entered file name is in the 
            directory.

        double computerCategoryScores(int choice);
            ==> The function will only show the categorical grades from Labs, Assignments, Projects, and the Exam.

        double computeOverall();
            ==> This function will calcualte all grades from the file and show the overall grade of the course.

        std::string getIndividualGrade(std::string weekNum, int choice);
            ==> Based on the cases from main.cpp, the function will show the individual grade based on the string 'weekNum'
                which will apply to labs and assingments. Also, based on the integer choice from main.cpp, there are conditional
                to handle the cases from the menu. 

        void allGradedAssignments();
            ==> This function will show all correctly graded assignments in the terminal

        void writeFile(std::string file_name);
            ==> This function will be rewritting over the file to show the expected outputs after the program's runtime.





*/





}