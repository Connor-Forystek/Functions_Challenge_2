#include <iostream>
#include <limits>

void inputGrades(double& g1, double& g2, double& g3) {
    std::cout << "Enter Three Grades" << std::endl;
    std::cin >> g1;
    std::cin >> g2;
    std::cin >> g3;
}

double calculateAverage(const double g1, const double g2, const double g3) {
    double average = (g1 + g2 + g3) / 3.0;
    return average;
}

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
    double& g1 = grade1;
    double& g2 = grade2;
    double& g3 = grade3;
    int input;

    do {
        std::cout << "1. Input Grades" << std::endl;
        std::cout << "2. Calculate and Display Average" << std::endl;
        std::cout << "3. Assign and Display Letter Grades" << std::endl;
        std::cout << "4. Quit" << std::endl;
        std::cout << "Enter Your Choice: ";

        std::cin >> input;

        switch (input) {
            case 1: {
                inputGrades(grade1, grade2, grade3);
                std::cout << "Grades Inputted" << std::endl;
                break;
            }

            case 2: {
                std::cout << "Your Average is: " << calculateAverage(grade1, grade2, grade3) << std::endl;
                break;
            }

            case 3: {
                double avg = calculateAverage(grade1, grade2, grade3);
                std::cout << "Your Letter Grade is: " << getLetterGrade(avg) << std::endl;
                break;
            }

            case 4: {
                break;
            }
        }
    } while (input != 4);

    return 0;

}