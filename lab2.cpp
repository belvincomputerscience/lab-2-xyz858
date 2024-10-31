// Name Jonathan Iniguez

#include <iostream>
using namespace std;
// the user enter 4 grades and stores each grade in a variable
int main () {
    double grade1, grade2, grade3, grade4;
    cout << "Please enter the first grade: ";
    cin >> grade1;
    cout << "Please enter second grade: ";
    cin >> grade2;
    cout << "Please enter the third grade: ";
    cin >> grade3;
    cout << "Please emter the foruth grade: ";
    cin >> grade4;
    //calcualtes the average of the four grades
    double average = (grade1 + grade2 + grade3 +grade4) / 4.0;

    cout << "The average grade is " << average << endl;
    return 0;
}

