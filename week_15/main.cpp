#include <iostream>

using namespace std;

struct Student
{
    char name[21];
    double averageScore;
    int facultyNumber;
    bool hasPassed;

    void createStudent()
    {
        cout << "Name: ";
        cin.getline(name, 21);
        cout << "Average Score: "; cin >> averageScore;
        cout << "Faculty number: "; cin >> facultyNumber;
        cout << "Has passed: "; cin >> hasPassed;
        cin.ignore();
    }

    void printStudent()
    {
        cout << name << endl;
        cout << averageScore << endl;
        cout << facultyNumber << endl;
        cout << (hasPassed ? "Passed" : "Not passed") << endl;
    }
};

void compareScores(Student n1, Student n2)
{
    if(n1.averageScore > n2.averageScore)
    {
        cout << "Bigger score: " << n1.name << "'s: " << n1.averageScore << endl;
    }
    else
    {
        cout << "Bigger score: " << n2.name << "'s: " << n2.averageScore << endl;
    }
}

void compareFacNumbers(Student n1, Student n2)
{
    if(n1.facultyNumber > n2.facultyNumber)
    {
        cout << "Bigger faculty number: " << n1.name << "'s: " << n1.facultyNumber << endl;
    }
    else
    {
        cout << "Bigger faculty number: " << n2.name << "'s: " << n2.facultyNumber << endl;
    }
}

void whoHasPassed(Student n1, Student n2)
{
    if (n1.hasPassed)
    {
        cout << n1.name << " has passed" << endl;
    }
    if (n2.hasPassed)
    {
        cout << n2.name << " has passed" << endl;
    }
    else 
    {
        cout << "No one has passed :(" << endl;
    }
}


int main()
{
    Student student[2];

    for (int i = 0; i < 2; i++)
    {
        student[i].createStudent();
    }
    cout << endl;

    compareScores(student[0], student[1]);
    compareFacNumbers(student[0], student[1]);
    whoHasPassed(student[0], student[1]);

    cout << endl;
    for (int i = 0; i < 2; i++)
    {
        student[i].printStudent();
        cout << endl;
    }
}