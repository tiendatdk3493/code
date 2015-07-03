#pragma once

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Student
{
	private:
		int id;
		char name[50];
		int age;
		char address[100];
		float score;

	public:
		//contructor
		Student();
		Student(int, char*, int, char*, float);

		//get method
		int getId();
		string getName();
		int getAge();
		string getAddress();
		float getScore();

		//set method
		void setId(int);
		void setName(char*);
		void setAge(int);
		void setAddress(char*);
		void setScore(float);

		//orther method
		void enterInforStudent();
		void showInforStudent();
		//Student &operator=(Student &);
		int operator==(Student &);
		
		

		~Student();
};

