/*
 * Student.h
 *
 *  Created on: 29-Aug-2026
 *      Author: Shilbhushan
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>

class Student{
	int rollno;
	std::string name;

public:
	void acceptDetails();
	void display();
};


#endif /* STUDENT_H_ */
