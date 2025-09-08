//Connor Forystek
// September 7, 2025
// Purpose: Develop A System For Student Grade Management With Reference Parameters
// Assignment: Lab Activities: User Defined Functions

#include <iostream>
#include <limits>
// This function allows the user to input three grades that will be used for the rest of the system
void inputGrades(double& g1, double& g2, double& g3) {
    std::cout << "Enter Three Grades" << std::endl;
    std::cin >> g1;
    std::cin >> g2;
    std::cin >> g3;
}
// This function calculates the average based on the sum of the three grades divided by zero
double calculateAverage(const double g1, const double g2, const double g3) {
    double average = (g1 + g2 + g3) / 3.0;
    return average;
}
// This function calculates what letter grade you would get from the average which is based on the standard letter grading system for schools
char getLetterGrade(const double average) {
    if (average >= 90) {
        return 'A';
    }
    else if (average >= 80) {
        return 'B';
    }
    else if (average >= 70) {
        return 'C';
    }
    else if (average >= 60) {
        return 'D';
    }
    else {
        return 'F';
    }
}

int main() {
    double grade1;
    double grade2;
    double grade3;
    int input;
//The code below this comment is used to create an interface for the user in order to determine which option they would like to choose
    do {
        std::cout << "Please Input 1-4 Based On What Option You Would Like To Choose:";
        std::cout << "1. Input Grades" << std::endl;
        std::cout << "2. Calculate and Display Average" << std::endl;
        std::cout << "3. Assign and Display Letter Grades" << std::endl;
        std::cout << "4. Quit" << std::endl;
        std::cout << "Enter Your Choice: ";

        std::cin >> input;
//This switch statement chooses an option based on what input the user put in during the previous section. If the code does not equal 1-4 then it will state that it is an invalid input
        switch (input) {
            //This case calls for the inputGrades function
            case 1: {
                inputGrades(grade1, grade2, grade3);
                // This if statement breaks the function if the grades are a negative or greater than 100
                if (grade1 < 0 || grade2 < 0 || grade3 < 0 || grade1 >100 || grade2 > 100 || grade3 > 100 ) {
                    std::cout << "Invalid Input, please do not input a negative value or value that is greater than 100" << std::endl;
                    break;
                }
                std::cout << "Grades Inputted" << std::endl;
                break;
            }
            //This case calls for the calculateAverage function
            case 2: {
                std::cout << "Your Average is: " << calculateAverage(grade1, grade2, grade3) << std::endl;
                break;
            }
            //This case calls for the letter grade using getLetterGrade after getting the average from the calculateAverage function
            case 3: {
                double avg = calculateAverage(grade1, grade2, grade3);
                std::cout << "Your Letter Grade is: " << getLetterGrade(avg) << std::endl;
                break;
            }
            //This case breaks and resets the do while section without calling any functions
            case 4: {
                std::cout << "Bye!" << std::endl;
                break;
            }
            //This case makes it so that only 1-4 can be chosen for the do while section
            default: {
                std::cout << "Invalid Input, Please choose 1-4 instead" << std::endl;
                break;
            }
        }
    } while (input != 4);
    //This ends the system
    return 0;

}