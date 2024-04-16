//
//  main.cpp
//  Lab2
//
//  Created by Taanish Patel on 2/22/24.
//
#include <iostream>
#include "student.h"


int main() {
    const int maxSize = 10;
    Student students[maxSize];
    int size = 0;

    students[size++] = Student("Taanish", 20, 3.5);
    students[size++] = Student("Bob", 22, 3.2);

    std::cout << "Initial Students:" << std::endl;
    displayStudents(students, size);

    insertAtBeginning(students, size, Student("Joe", 21, 2.6));
    std::cout << "\nAfter Inserting at the Beginning:" << std::endl;
    displayStudents(students, size);

    insertAtEnd(students, size, Student("David", 19, 3.4));
    std::cout << "\nAfter Inserting at the End:" << std::endl;
    displayStudents(students, size);

    changeInfo(students, size, 1, Student("Ruby", 23, 3.6));
    std::cout << "\nAfter Changing Student Info:" << std::endl;
    displayStudents(students, size);

    return 0;
}

