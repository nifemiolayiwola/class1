#include <iostream>
#include <string>

using namespace std;

int main()
{
    string studentName;
    int* score = new int; //store score dynamically using pointer

    // Ask for student's name
    cout << "Enter student's name: ";
    getline(cin, studentName);

    // Ask for student's score
    cout << "Enter student's score: ";
    cin >> *score;

    // Print the information
    cout << "\nStudent Record System" << endl;
    cout << "Name: " << studentName << endl;
    cout << "Score: " << *score << endl;

    // Free dynamically allocated memory
    delete score;


    return 0;
}
