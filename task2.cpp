#include <iostream>
#include <string>
using namespace std;

// Function for highest score
int findHighestScore(int scores[], int size)
{
    int highest = 0;

    for (int i = 1; i < size; i++)
    {
        if (scores[i] > scores[highest])
            highest = i;
    }

    return highest;
}

// Function for lowest score
int findLowestScore(int scores[], int size)
{
    int lowest = 0;

    for (int i = 1; i < size; i++)
    {
        if (scores[i] < scores[lowest])
            lowest = i;
    }

    return lowest;
}

//function to calculate average

double calculateAverage(int scores[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += scores[i];
    }

    return (double)sum / size;
}

int main()
{
    int students;

    //get the number of students from the user
    cout << "Number of students: ";
    cin >> students;

    string names[students];
    int scores[students];

    for (int i = 0; i < students; i++)
    {
        cout << "Enter name: ";
        cin >> names[i];

        cout << "Enter score: ";
        cin >> scores[i];
    }

    cout << endl;

    for (int i = 0; i < students; i++)
    {
        cout << "Student " << i + 1 << ": "
             << names[i] << " - " << scores[i] << endl;
    }

    int highest = findHighestScore(scores, students);
    int lowest = findLowestScore(scores, students);
    double average = calculateAverage(scores, students);

    cout << "\nHighest: " << names[highest]
         << " (" << scores[highest] << ")" << endl;

    cout << "Lowest: " << names[lowest]
         << " (" << scores[lowest] << ")" << endl;

    cout << "Average: " << average << endl;

    return 0;
}