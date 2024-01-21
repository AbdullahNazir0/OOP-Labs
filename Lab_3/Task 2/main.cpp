#include <iostream>
#include "Student.h"
using namespace std;

int studentCount = 0;
int maxStudent = 100;

int main()
{
    Student students[100];
    string name;
    string id;
    double *grades = new double[7];

    while (true)
    {
        int choice;
        cout << "Enter 1 to add new student data.\n"
                "Enter 2 to edit student data.\n"
                "Enter 3 to delete student data.\n"
                "Enter 4 to search student record.\n"
                "Enter 5 to exit the program.\n"
                "You entered: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            {cout << "Enter student name: ";
            cin >> name;
            cout << "Enter student id: ";
            cin >> id;
            cout << "Enter student grades: ";
            for (int i = 0; i < 7; i++)
            {
                cin >> grades[i];
            }
            students[studentCount].setStudentId(id);
            students[studentCount].setStudentName(name);
            students[studentCount].setStudentGrades(grades);
            studentCount++;
            cout << "Student data added successfully." << endl;
            break;}
        case 2:
            {cout << "Enter student id whose data you want to edit: ";
            cin >> id;
            bool flag = false;
            for (int i = 0; i < studentCount; i++)
            {
                if (students[i].getStudentId() == id)
                {
                    cout << "Enter new student grades: ";
                    for (int j = 0; j < 7; j++)
                    {
                        cin >> grades[j];
                    }
                    students[studentCount].setStudentGrades(grades);
                    cout << "Student data edited successfully." << endl;
                    flag = true;
                }
            }
            if (flag == false)
            {
                cout << "Student id not in record." << endl;
            }
            break;}
        case 3:
            {cout << "Enter student id whose data you want to delete: ";
            cin >> id;
            bool found = false;
            for (int i = 0; i < studentCount; i++)
            {
                if (students[i].getStudentId() == id)
                {
                    found = true;
                    for (int j = i; j < studentCount - 1; j++)
                    {
                        students[j] = students[j + 1];
                    }
                    studentCount--;
                    cout << "Student data deleted successfully." << endl;
                    break; 
                }
            }

            if (!found)
            {
                cout << "Student id not in record." << endl;
            }
            break;}
        case 4:
            {cout << "Enter student id whose data you want to search: ";
            cin >> id;
            bool flag = false;
            for (int i = 0; i < studentCount; i++)
            {
                if (students[i].getStudentId() == id)
                {
                    students[i].displayStudentData();
                    flag = true;
                }
            }
            if (flag == false)
            {
                cout << "Student id not in record." << endl;
            }
            break;}
        case 5:
            exit(0);
            break;
        default:
            cout << "Invalid input. Please Try Again." << endl;
            break;
        }
    }
    return 0;
}