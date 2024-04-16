#include "student.h"
#include <iostream>

Student::Student(std::string n, int a, double g) : name(n), age(a) {
    if (!setGPA(g)) {
    }
}

void Student::displayStudent() const {
    std::cout << "Name: " << name << ", Age: " << age << ", GPA: " << gpa << std::endl;
}

double Student::setGPA(double g) {
//    if (g >= 0.0 && g <= 4.0) {
        return gpa = g;
//        return true;
//    } else {
//        return false;
//    }
}

void displayStudents(const Student students[], int size) {
    for (int i = 0; i < size; i++) {
        students[i].displayStudent();
    }
}

void insertAtBeginning(Student students[], int& size, const Student& newStudent) {
    if (size >= 10) {
        std::cout << "Array is full. Cannot insert at the beginning." << std::endl;
        return;
    }

    for (int i = size; i > 0; i--) {
        students[i] = students[i - 1];
    }

    students[0] = newStudent;
    size++;
}

void insertAtEnd(Student students[], int& size, const Student& newStudent) {
    if (size >= 10) {
        std::cout << "Array is full. Cannot insert at the end." << std::endl;
        return;
    }

    students[size] = newStudent;
    size++;
}

void changeInfo(Student students[], int size, int index, const Student& newStudent) {

   // std::cout<<newStudent.getGPA();
    
    if (newStudent.getGPA() > 0.0 || newStudent.getGPA() < 4.0) {
        
           // return;
        
        students[index] = newStudent;
    }else{
        std::cout << "Invalid GPA provided. GPA must be between 0.0 and 4.0." << std::endl;
    }
    
    //    if (index < 0 || index >= size) {
    //        std::cout << "Invalid index. Cannot change student info." << std::endl;
    //        return;
    //    }

}
