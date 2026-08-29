/*
 * Student.cpp
 *
 *  Created on: 29-Aug-2026
 *      Author: Shilbhushan
 */
#include <iostream>
#include "Student.h"

void Student::acceptDetails(){
	std::cout <<"Enter student details : " << std::endl;
	std::cin >> rollno >> name;
}

void Student::display(){
	std::cout << rollno << std::endl;
	std::cout << name << std::endl;
}
