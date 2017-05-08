//
// Created by piotr on 25.04.17.
//


#include <iostream>

using namespace std;

class InvalidNameSurname : public std::invalid_argument
{

};

class InvalidNameCharacters : public std::invalid_argument
{

};

class InvalidAge : public std::invalid_argument
{

};

class InvalidProgram : public std::invalid_argument
{

};

class Student
{
public:
    Student(std::string name, std::string surname, int age, std::string program);

    static void CheckFirstLetter(std::string name);
    static void CheckCharacters(std::string name);
    static void CheckAge(int age);
    static void CheckProgram(std::string program);

private:

    // Fields
    std::string name_;
    std::string surname_;
    int age_;
    std::string program_;
};

Student::Student(std::string name, std::string surname, int age, std::string program)
{
    // Check sequence
    try
    {
        CheckFirstLetter(name);
        CheckFirstLetter(surname);
        CheckCharacters(name);
        CheckCharacters(surname);
        CheckAge(age);
        CheckProgram(program);
    }
    catch(InvalidNameSurname &e)
    {
        std::cerr << "Invalid first letters of name or surname!" << std::endl;
    }
    catch (InvalidNameCharacters &e)
    {
        std::cerr << "Invalid characters of name or surname!" << std::endl;
    }
    catch (InvalidAge &e)
    {
        std::cerr << "Invalid age: age must be between 10 - 100!" << std::endl;
    }
    catch (InvalidProgram &e)
    {
        std::cerr << "Invalid program: must be one of XYZ university!" << std::endl;
    }

    // Everything is OK - assign values
    name_ = name;
    surname_ = surname;
    age_ = age;
    program_ = program;
}

void Student::CheckFirstLetter(std::string name)
{
    if(name[0] < 'A')
    {
        throw InvalidNameSurname();
    }
}

void Student::CheckCharacters(std::string name)
{
    for (auto &&characters : name)
    {
        if(characters < 'a' || characters > 'z')
        {
            throw InvalidNameCharacters();
        }
    }
}

void Student::CheckAge(int age)
{
    if (age > 100 && age < 10)
    {
        throw InvalidAge();
    }
}

void Student::CheckProgram(std::string program)
{
    if(program != "informatyka" && program != "ekonomia" &&
            program != "matematyka" && program != "fizyka" && program != "filozofia")
    {
        throw InvalidProgram();
    }
}




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
