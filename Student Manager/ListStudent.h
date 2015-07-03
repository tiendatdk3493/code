#pragma once
#include "Student.h"
class ListStudent
{
	private:
		Student student;
		ListStudent *next;
	public:
		ListStudent();
		bool isEmptyList();
		void insertList(Student);
		ListStudent getFirstList();
		~ListStudent();
};

