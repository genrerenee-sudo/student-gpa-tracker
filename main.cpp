
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Function 1: Display the program title
void showTitle() {
    cout << "==============================" << endl;
    cout << "       STUDENT GPA TRACKER    " << endl;
    cout << "==============================" << endl;
}

// Function 2: Calculate the average GPA
double calculateAverage(double total, int courses) {
    return total / courses;
}

double findHighestGpa(double gpas[], int courses) {
    double highest = gpas[0];

    for (int i = 1; i < courses; i++) {
        if (gpas[i] > highest) {
            highest = gpas[i];
        }
    }

    return highest;
}
double findLowestGpa(double gpas[], int courses) {
    double lowest = gpas[0];

    for (int i = 1; i < courses; i++) {
        if (gpas[i] < lowest) {
            lowest = gpas[i];
        }
    }

    return lowest;
}
int countAboveThree(double gpas[], int courses) {
    int count = 0;

    for (int i = 0; i < courses; i++) {
        if (gpas[i] > 3.0) {
            count++;
        }
    }

    return count;
}
int main() {
    char choice;

    do {
        showTitle();

        string studentName;

        cout << "Enter your name: ";
        cin >> studentName;

        int numberOfCourses;

        cout << "How many courses are you taking? ";
        cin >> numberOfCourses;

        while (numberOfCourses <= 0 || numberOfCourses > 10) {
            cout << "Enter a number from 1 to 10: ";
            cin >> numberOfCourses;
        }

        double gpas[10];
        double gpa;
        double totalGpa = 0.0;

        // Enter GPAs for each course
        for (int i = 1; i <= numberOfCourses; i++) {
            cout << "Enter GPA for course " << i << ": ";
            cin >> gpa;

            while (gpa < 0.0 || gpa > 4.0) {
                cout << "Invalid GPA. Enter a value from 0.0 to 4.0: ";
                cin >> gpa;
            }

            gpas[i - 1] = gpa;
            totalGpa += gpa;
        }

        // Calculate average GPA
        double averageGpa = calculateAverage(totalGpa, numberOfCourses);

        // Find highest and lowest GPA
        double highestGpa = findHighestGpa(gpas, numberOfCourses);
        double lowestGpa = findLowestGpa(gpas, numberOfCourses);

      

        // Count courses above 3.0
        int coursesAboveThree = countAboveThree(gpas, numberOfCourses);
        
        // Format GPAs to two decimal places
        cout << fixed << setprecision(2);

        // Display GPA report
        cout << endl;
        cout << "========== GPA REPORT ==========" << endl;
        cout << "Student Name: " << studentName << endl;
        cout << "Number of Courses: " << numberOfCourses << endl;

        cout << "Course GPAs:" << endl;

        for (int i = 0; i < numberOfCourses; i++) {
            cout << "Course " << i + 1 << ": " << gpas[i] << endl;
        }

        cout << "Average GPA: " << averageGpa << endl;
        cout << "Highest GPA: " << highestGpa << endl;
        cout << "Lowest GPA: " << lowestGpa << endl;
        cout << "Courses above 3.0: " << coursesAboveThree << endl;

        if (averageGpa >= 2.0) {
            cout << "Academic Status: Meeting GPA benchmark" << endl;
        } else {
            cout << "Academic Status: Below GPA benchmark" << endl;
        }

        cout << "================================" << endl;

        // Ask whether to calculate another GPA
        cout << "Calculate another GPA? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << endl;
    cout << "Thank you for using the Student GPA Tracker!" << endl;
    cout << "Goodbye!" << endl;

    return 0;
}
