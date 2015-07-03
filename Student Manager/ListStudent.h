#pragma once
#include "Student.h"
class ListStudent
{
	private:
		Student student;
		ListStudent *next;
	public:
		ListStudent();
		ListStudent(Student);

		bool isEmptyList();
		int lenList();
		void insertEndList(Student);
		void insertList(Student, int);
		int searchByID(int);
		Student retrieveStudent(int);
		void deleteStudent(int);
		void enterListStudent();
		void showListStudent();
		~ListStudent();
};

void functionList();