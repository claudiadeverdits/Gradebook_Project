<h1> CSC212 Gradebook Project </h1>

<h4> Team Members: Samuel Calise, Claudia Deverdits, Samuel Gryska, Grant Houatchanthara </h4>

<h2> Summary: </h2>

<p size = 8> The purpose of our program’s objective is to replicate a gradebook for a student who is enrolled in CSC212. The program is compiled based on the following C++ classes driver.cpp, gradebook.cpp, and gradebook.h – these programs were developed and collaborated to replicate a gradebook structure for CSC212’s assignments. Through our group's planning and collaboration, this project will be capable of carrying out a variety of grades for assignments for enrolled students to see their individual, categorical, and overall grades visually. </p>


<h2> Planning:</h2>
<p>***Note: Planning is subject to change during implementation and when handling bugs within the project’s development. All expectations during the planning phase were distributed equally and agreed to amongst all team members.***
  
  When planning our project’s direction in the driver and gradebook classes, below is a detailed outline of portions of code agreed upon and obligated to complete the problem’s resolution.
</p>

  - Samuel Calise: <p> Responsible for project documentation, assigning a balanced workload amongst group members, designing and creating an outline of class header file, driver class(main.cpp), and object class functions file(gradebook.cpp), and textfiles required for assignment. </p>


  - Claudia Deverdits: <p> Responsible for creating and developing class functions in gradebook.cpp file, support in debugging syntax and runtime errors, and helping overall structure of the project's C++ class files.</p>


  - Samuel Gryska: <p>  Responsible for creating and completing constructors for when the gradebook is given a vector and a pair of assignments and a grade, a gradebook class function for writing to a result output text file, and a gradebook class function to print out an individual graded assignment based on the user's input. </p>


  - Grant Houatchanthara:<p> Responsible for creating and completing a gradebook object default constructor, supporting Samuel Gryska with the assigned task for showing an individual graded assignment, and implementing a gradebook class helper function to find the user’s specific graded assignment index. The helper function would work in the effect of Samuel Gryska’s function to show the user their graded assignment from the correct text file in the directory. </p>



<h2> Documentation: </h2>

When compiling our driver.cpp class, we recommend using files local to the program’s directory of the IDE space. After compiling the driver.cpp and gradebook.cpp classes, please use the recommended text files in the directory. In case of an error when running the compilation’s executable and file in the terminal (separated by a space), the program will be capable of verifying if the file exists in the directory. After successfully entering the executable and text file name, a menu will be prompted to enter a specific integer to view the particular cases and a unique integer to terminate the program's runtime.


<h2> Code Functionality: </h2>

This assignment aims to resolve the issue for a student who may attempt to predict and instead use our code’s functionality to view their grades in CSC212. The presented code from this repository can successfully present the user with a detailed list, outline, and overall grade of the completed and graded assignments. When creating the driver.cpp class, the code files effectively show Object-Oriented Programming (OOP) in class practices.cpp class and its derived class gradebook.cpp. The class files demonstrate how inheritance of the driver.cpp (base class) and gradebook.cpp (the derived class), which contains the gradebook object class functions with public and private declarations in the gradebook.h file. The code functionality outline will explain our interpretations of the assignment, our objectives when showing results, and its reusability for future courses.

* driver.cpp Class:
  * The purpose of the driver class is to handle the user’s interaction with the project, the creation of the grade book object, and reading and writing from files. When collaborating on the scope of our driver.cpp class, it was important to make the user’s interaction seamless and easy to use. When creating this reality during the program’s runtime, one of our struggles was ensuring the user obtained information from the correct text file within the computer’s IDE directory. The purpose of this ‘checker’ is to ensure the user’s information is accurately calculated and presented within the terminal or output text file. The implemented action would occur within the terminal until the user correctly types the case-sensitive file name in the directory. After passing this checker in the beginning stage of the program, the terminal will prompt a detailed grade book menu that will check for an integer number [0-11] (inclusively). When the user inputs an integer from 0-11, a function is called with a pointer object of the gradebook file from the user and now prompts the detailed menu in the terminal. The menu displayed in the terminal is from a function intended to display in the beginning of the program and after the user interacts with the displayed integers from the menu. The function ‘userChoice’ handles an infinite number of single integers through a while loop until the user enters ‘999’ to terminate the loop and program's runtime. When handling cases 0-11, the group decides a switch statement would effectively make the user's experience and code implementation easier to interact with and debug when necessary. When the user inputs 0 or 1 into the terminal, the following prompted line is to enter the case-sensitive assessment name according to CSC212’s assignment naming convention. For example, to view a particular graded lab, the user would first enter 0, enter key, then type “Lab03” into the terminal to see the grade within the grade book text file for lab assignment, Lab03. When attempting to view a graded homework assignment, the user would enter 1, enter key, then type “Assignment02” into the terminal to see the graded homework assignment in the terminal. When creating the cases for [2-11] within our while loop, the user is only required to enter a single integer within the terminal followed by pressing the enter key to see a variety of categorical grades, individual overall for an assessment category, only view overall grades, and just seeing the overall grade of the user’s course. When implementing these cases in the driver.cpp file, the gradebook.cpp class file made the execution process of our assignment seamless when debugging errors while coding. The derived class file shows the user and readers of the GitHub repository's functionality and intentions for this project.

* gradebook.h Class:
  * The purpose of this file is to create public and private declarations within the driver.cpp and gradebook.cpp files. The public variables used in the program do not require redeclarations within the derived class when assigning values to objects during the base class runtime.
* gradebook.cpp Class:
  * The purpose of the derived class is to handle the cases from the switch statement in the driver.cpp class. In addition, helper functions are designed to check cases during the driver class’ runtime to ensure accurate documentation and grade calculations. Below is a brief outline of all the derived class functions designed for this project.

<h2> gradebook.cpp Class Implementation </h2>

<h4> 1. Gradebook::Gradebook(std::string fname) </h4>

<p> Our default constructor takes the file name from the user and creates a string pointer ‘file_name’, which holds the string from the terminal. The value is then sent to a helper function, ‘check_file_name,’ to verify if the grade book text file is in the same directory as the three program class files.</p>

<h4> 2. void Gradebook::writeFile(std::string fname) </h4>

<p> The writeFile function is intended to create all the information from the initially entered file name and rewrites any information from the public vectors declared in the header file.</p>

<h4> 3. void Gradebook::allGradedAssignments() </h4>

<p> The allGradedAssignments function is intended to display all graded assignments from the initial text file during the driver.cpp’s runtime.</p>

<h4> 4. std::string Gradebook::getIndividualGrade(std::string name, int num) </h4>

<p> The getIndividualGrade function takes the parameters name (the entered assignment name) and num (the choice entered from the terminal) to display a particular grade from the entered assignment name. When only showing a project or exam, these values are constructed into pairs which the program returns using the ‘.second’ library call when only returning the project or exam’s grade value.</p>

<h4> 5. void Gradebook::check_file_name(std::string* file_name) </h4>

<p> The purpose of check_file_name is to be a helper function when verifying if the user’s grade book text file is present in the driver.cpp, gradebook.cpp, and gradebook.h’s directory. The file names are case sensitive, including the file’s type, and the importance of typing the complete and accurate file name is critical when using the program. </p>

<h4> 6. bool Gradebook::valid_num(std::string num) </h4>

<p> When reading the graded assignments in the text file, the purpose of valid_num is to help verify if the grade is 0-100 for every assignment. If not, the helper function will return false when identifying the invalid graded assignment. However, if the graded assignment is 0-100, the function will return true to identify the valid grade. </p>

<h4> 7. void Gradebook::find_lowest_idx() </h4>

<p> One of the grading features of CSC212’s lab assignment is that the two latest lab grades drop from the student’s overall grade. In response to this grading exception, this helper function is designed to find the lowest two graded lab assignments and add ‘-D’ to the end of the assignment’s grade. </p>

<h4> 8. void Gradebook::find_lowest_idx() </h4>

<p> This function will read the verified file name entered by the user in the terminal and populate the vectors of assignments, labs, and pairs for the two projects and exam grade. There is also a counter for the invalid graded assignment counter when populating the variables with grades. The program will only proceed once there are zero invalid grades in the prompted text file. These invalid grades are recognized as ‘###’ which the user will be able to see the invalid grade keyword and change it before rerunning the cpp files in the terminal. </p>

<h4> 9. double Gradebook::computeCategoryScores(int choice) </h4>

<p> The purpose of this function is to show overall category scores for labs, assignments, projects one and two, and the exam. These categories are calculated based on the total number of points based on CSC212’s syllabus outline. </p>

<h4> 10. double Gradebook::computeOverall() </h4>

<p> The computeOverall function takes the sum of all category scores from the previous function and displays the results. In addition to verifying whether the student passes the course with an A with a 90 or higher (based on the syllabus) or when the grade is less than 90, the program will calculate the exam grade from the file. </p>


<h2> Implementation and Contributions: </h2>
<p> ***Note: Due to communications issues during development, expected outcomes from the Planning section may not be reflected in this section.*** </p>

- Samuel Calise: <p> Contributed to the documentation of ReadMe file, implementation of driver.cpp, created gradebook class functions in gradebook.cpp, debugging, improvising code, inline documentation with program files, and creating ideas for helper functions to handle cases during program runtime. </p>

- Claudia Deverdits: <p> Contributed to the creation of gradebook.cpp file, debugging object class functions and improvising the driver.cpp implementation, advised directions based on project’s expectations and grading. </p>

- Samuel Gryska: <p>  Contributed to theIndividualGrade class function, but the code was insufficient and required to be deleted to handle the project’s requirement. In addition to implementing code when creating an output file, code was incorrectly implemented into the header file. It was deleted due to not following the proper header file coding structure. According to commit logs, there were no future commits to the repository after their first commit. However, I contributed to the coding assignment's code review and demonstration portion and pointed out minor bugs during the code’s runtime.</p>

- Grant Houatchanthara:<p> Contributed to initializing the default constructor, overloaded constructors, and other class functions. However, when creating the default constructor, there was no code initializing any variables. According to commit logs, there were no future commits to the repository after their first commit. According to commit logs, there were no future commits to the repository after their first commit. However, I contributed to the coding assignment's code review and demonstration portion and pointed out minor bugs during the code’s runtime.</p>
 
 <h2> References: </h2>

<p>Syllabus for URI's CSC212 Course:
https://csc-dsa.github.io/sp23/intro.html
</p>








