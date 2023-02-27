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



/*
    void showMenu()
     ==> The purpose of this function is printing out a menu into the terminal during run time
*/
void showMenu(){

    /*
        first std::cout is a header to represent individual grade
        second std::cout is a disclaimer to replace '#' when search for individual lab or assignment grade
            std::cout press 0 for lab assignment
            std::cout press 1 for an assignment
            std::cout press 2 for Project1
            std::cout press 3 for Project2
            std::cout press 4 for Exam
        
        second std::cout is a header to represent categorical grades
            std::cout press 5 for lab assignment
            std::cout press 6 for an assignment
            std::cout press 7 for Projects
            std::cout press 8 for the Exam
        
        third std::cout is a header to represent graded assignments, overall grades, or only your overall grade
            std::cout press 9 to view all graded assignment
            std::cout press 10 to view the category and overall averages
            std::cout press 11 to view only the overall grades
    */
}



/*
    void userChoice(Gradebook *g)
     ==> The purpose of this function is to take the parameter 'Gradebook *g' which obtains the verified text file 
         that is in the same directory. 
*/
void userChoice(Gradebook *g){

    /*
        initializing int choice 
            ==> (variable is responsible for obtaining the value from the user based on the showMenu() function)

        initializing std::string overall
            ==> (varible is respsible for handling if the person has overall grade is >= a 90% and has the "PASS" exception
                 and has an A for an overall grade)
        
        initializing std::string name
            ==> (varible is respsible for obtaining the string value of the lab or assignment name from the user)
        

        while(choice != 999)
        { 
            ==> while loop is continuous until the user enters '999' which will concludes the program's runtime

            switch(choice)
            {
                ==> switch statement is used based on integers input cases according to the showMenu() function. This
                    implementation will make it easier for the user and when debugging issue while create and fixing
                     code. 

                (The switch statment's cases are based on the integer 'choice' and object class functions calls will 
                occur during runtime)
                    case 0:
                        prints out line for individual lab grade
                        obtain string 'name' value from the user
                        Gradebook *(pointer) g call to function getIndividualGrade(name, choice)
                            -> name and choice are parameter that will be provided to the object class function
                        printing results
                        
                        break out of case

                    case 1:
                        prints out line for individual assignment grade
                        obtain string 'name' value from the user
                        Gradebook *(pointer) g call to function getIndividualGrade(name, choice)
                            -> name and choice are parameter that will be provided to the object class function
                        printing results
                        
                        break out of case

                    case 2:
                        name hold the value of an empty string 
                            -> Due to using a pair for project1 name and grade
                        Gradebook *(pointer) g call to function getIndividualGrade(name, choice)
                            -> name and choice are parameter that will be provided to the object class function
                        print results
                        
                        break out of case

                    case 3:
                        name hold the value of an empty string 
                            -> Due to using a pair for project2 name and grade
                        Gradebook *(pointer) g call to function getIndividualGrade(name, choice)
                            -> name and choice are parameter that will be provided to the object class function
                        print results
                        
                        break out of case

                    case 4:
                        name hold the value of an empty string 
                            -> Due to using a pair for Exam name and grade
                        Gradebook *(pointer) g call to function getIndividualGrade(name, choice)
                            -> name and choice are parameter that will be provided to the object class function
                        print results
                        
                        break out of case

                    case 5:
                        print out results for showing Lab category overall
                            -> In std::cout Gradebook *(pointer) g call to function computeCategoryScores(choice)
                                -> choice is a parameter to handle the case when showing the category grade for 
                                    Lab assingments
                        
                        break out of case

                    case 6:
                        print out results for showing Assignment category overall
                            -> In std::cout Gradebook *(pointer) g call to function computeCategoryScores(choice)
                                -> choice is a parameter to handle the case when showing the category grade for 
                                    graded assingments
                        
                        break out of case

                    case 7:
                         print out results for showing Projects category overall
                            -> In std::cout Gradebook *(pointer) g call to function computeCategoryScores(choice)
                                -> choice is a parameter to handle the case when showing the category grade for 
                                    graded Projects
                        
                        break out of case

                    case 8:
                        print out results for showing Exam category overall
                            -> In std::cout Gradebook *(pointer) g call to function computeCategoryScores(choice)
                                -> choice is a parameter to handle the case when showing the category grade for 
                                    an Exam
                        
                        break out of case
                        
                    case 9:
                        print out results for showing all graded assignemnts
                            -> In std::cout Gradebook *(pointer) g call to function allGradedAssignments()
                        
                        break out of case

                    case 10:
                        print out results for showing all assignments category overalls
                            -> In std::cout Gradebook *(pointer) g call to function computeCategoryScores(5)
                            -> In std::cout Gradebook *(pointer) g call to function computeCategoryScores(6)
                            -> In std::cout Gradebook *(pointer) g call to function computeCategoryScores(7)
                            -> In std::cout Gradebook *(pointer) g call to function computeCategoryScores(8)
                            (The above functions calls are necessary to show lab, homework assignments, projects, and exams
                            to only show the overall grades)
                        
                        intialized overall
                            -> obtains the value of string from Gradebook *(pointer) g function call to computeOverall()
                        
                        Create a conditional when overall matches "1000.000000"
                            overall holds string value "A"
                        
                        print results of overall grade in terminal

                        break out of case

                    case 11:
                        intialized overall
                            -> obtains the value of string from Gradebook *(pointer) g function call to computeOverall()
                        
                        Create a conditional when overall matches "1000.000000"
                            overall holds string value "A"
                        
                        print results of overall grade in terminal

                        break out of case
                    
                    default:
                        ==> This is necessary for our program when the user enters in a number that is not with [0-11]
                            inclusively
                        
                        print invalid number and remind the user to type an integer number [0-11]

            }end of switch cases

            function call to show showMenu() function into the terminal
            tell the user when they are done using the grade book terminal to enter '999'
                -> this special integer number will terminate the program's runtime
            
            get another integer value for choice to view another case from the showMenu() function from user

        }end of while loop
*/

}



int main(int argc, char* argv[]){

    /*
    initializing std::string fname (variable to hold the file name for the desired text file)

    ***Created Checker To Verify File Name In Directory***

    conditional if argc is equal to 1 
    {
        -> Purpose is to check if the user only inputted the executed ONLY
        while loop's conditional loops is continuous when the fname is a blank string from the user
        {
            std::cout to the user to type the text file name in the directory
            obtain fname string value from the user
        }end of while loop

    } end of if statement

    condition else if integer argc is equal to 2
    {
        fname is equal to argv[1]
            ==> this is getting the value of the second portion from the terminal that is the text file name
    }end of else if
    

    Create a object for Gradebook *(pointer) g that obtains the fname (file name)
        ==> this object will go to the default constructor to verify the file name

    function call to showMenu() when the program confirms the file is in the same directory
    function call userChoice(g) which passes the Gradebook object 'g' which begins the process of 
        using the gradebook terminal

    Gradebook g makes a function call to rewrite the users file based on conditions of the CSC212's syllabus and
        showing the overall grade in the course
    */
}