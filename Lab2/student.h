#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
public:
    Student() = default; 
    Student(std::string n, int a, double g);
    void displayStudent() const;
    double getGPA() const { return gpa; }
    double setGPA(double g);

private:
    std::string name;
    int age;
    double gpa;
};

void displayStudents(const Student students[], int size);
void insertAtBeginning(Student students[], int& size, const Student& newStudent);
void insertAtEnd(Student students[], int& size, const Student& newStudent);
void changeInfo(Student students[], int size, int index, const Student& newStudent);


#endif 
