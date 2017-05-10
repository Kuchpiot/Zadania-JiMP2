//
// Created by piotr on 25.04.17.
//

#include "Student.h"

#include <iostream>

using namespace std;

int main()
{
    string name, surname, program;
    int age;
    bool correct = false;

    while (!correct)
    {
        try
        {
            cout << "Enter name of student: ";
            cin >> name;
            Student::CheckFirstLetter(name);
            Student::CheckCharacters(name);

            cout << "Enter surname of student: ";
            cin >> surname;
            Student::CheckFirstLetter(surname);
            Student::CheckCharacters(surname);

            cout << "Enter student's age: ";
            cin >> age;
            Student::CheckAge(age);

            cout << "Enter student's program: ";
            cin >> program;
            Student::CheckProgram(program);

            correct = true;
        }
        catch (InvalidNameSurname &e)
        {
            cerr << "Name must start with capital letter!" << endl;
            correct = false;
        }
        catch (InvalidNameCharacters &e)
        {
            cerr << "Name must consist only letters!" << endl;
            correct = false;
        }
        catch (InvalidAge &e)
        {
            cerr << "Age must be between 10-100!" << endl;
            correct = false;
        }
        catch (InvalidProgram &e)
        {
            cerr << "Student's program must be in XYZ university offer" << endl;
            correct = false;
        }
    }

    Student(name, surname, age, program);

    return 0;
}