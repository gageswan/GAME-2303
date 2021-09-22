// StudentList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include<algorithm>

using namespace std;

class Student {

public:
	string firstName;
	string lastName;
	int grade;

	void Display() {
		cout << firstName << " " << lastName
			<< ": " << grade
			<< endl;
	}

	Student() {}

	Student(string FirstName, string LastName, int Grade) {
		firstName = FirstName;
		lastName = LastName;
		grade = Grade;
	}
};

int main() {

	string text, text1;
	int int1;
	int total = 0;

	fstream fStream("students.txt");

	vector<Student> students;

	while (fStream >> text >> text1 >> int1) {
		students.push_back(Student(text, text1, int1));
	}
	fStream.close();

	sort(students.begin(), students.end(), [](const Student lhs, const Student rhs) {
		return lhs.grade > rhs.grade;
	});

	for (Student stu : students) {
		stu.Display();
		total += stu.grade;
	}

	int avg = (total / students.size());

	cout << "The Average Grade is " << avg << endl;

	return 0;
}
