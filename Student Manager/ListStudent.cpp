#include "ListStudent.h"


ListStudent::ListStudent()
{
	this->student = Student();
	this->next = NULL;
}

ListStudent::ListStudent(const Student st) {
	(this)->student = st;
	(this)->next = NULL;
}

void ListStudent::setNameStudent(int id, char *name) {
	ListStudent *Q = this;
	while (Q != NULL)
	{
		if (Q->student.getId() == id) {
			Q->student.setName(name);
			break;
		}
		else
		{
			Q = Q->next;
		}
	}
}

void ListStudent::setAgeStudent(int id, int age) {
	ListStudent *Q = this;
	while (Q != NULL)
	{
		if (Q->student.getId() == id) {
			Q->student.setAge(age);
			break;
		}
		else
		{
			Q = Q->next;
		}
	}
}

void ListStudent::setAddressStudent(int id, char *address) {
	ListStudent *Q = this;
	while (Q != NULL)
	{
		if (Q->student.getId() == id) {
			Q->student.setAddress(address);
			break;
		}
		else
		{
			Q = Q->next;
		}
	}
}

void ListStudent::setScoreStudent(int id, float score) {
	ListStudent *Q = this;
	while (Q != NULL)
	{
		if (Q->student.getId() == id) {
			Q->student.setScore(score);
			break;
		}
		else
		{
			Q = Q->next;
		}
	}
}


bool ListStudent::isEmptyList() {
	return this->next;
}

int ListStudent::lenList() {
	ListStudent *Q = this;
	int i = 0;
	while (Q->next != NULL)
	{
		i++;
		Q = Q->next;
	}
	return i;
}

void ListStudent::insertEndList(Student st) {
	ListStudent *P = new ListStudent(st);
	ListStudent *Q = this;
	while (Q->next != NULL)
	{
		Q = Q->next;
	}
	Q->next = P;
}

void ListStudent::insertList(Student st, int k) {
	ListStudent *P = new ListStudent(st);
	ListStudent *Q = this;
	int i = 1;
	if (k < 1 || k > this->lenList() + 1) {
		cout << "This location not found." <<endl;
	}
	else {
		if (k == 1){
			P->next = this->next;
			this->next = P;
		}
		else {
			while (Q != NULL && i != k)
			{
				i++;
				Q = Q->next;
			}
			P->next = Q->next;
			Q->next = P;
		}
	}
}


int ListStudent::searchByID(int id) {
	ListStudent *Q = this;
	int i = 0;
	while (Q != NULL) {
		if (Q->student.getId() == id) {
			return i;
		}
		else
		{
			Q = Q->next;
		}
		i++;
	}
	return 0;
}

Student ListStudent::retrieveStudent(int k) {
	ListStudent *Q = this;
	int i = 0;
	if (k < 1 || k > Q->lenList()) {
		cout << "This location not found." <<endl;
	}
	else{
		while (Q != NULL && i != k) {
			i++;
			Q = Q->next;
		}
		return Q->student;
	}
}

void ListStudent::deleteStudent(int k){
	ListStudent *Q = this;
	int i = 0;
	if (k < 1 || k > Q->lenList()) {
		cout << "This location not found." << endl;
	}
	else{
		while (Q != NULL && i != k-1)
		{
			i++;
			Q = Q->next;
		}
		Q->next = Q->next->next;
	}
}

void ListStudent::enterListStudent() {
	int n = 0;
	cout << "Enter the number of the list: ";
	cin >> n;
	Student st = Student();
	for (int i = 0; i < n; i++) {
		cout << endl << "* Student: " << i + 1 << endl;
		st.enterInforStudent();
		this->insertEndList(st);
	}
}

void ListStudent::showListStudent() {
	ListStudent *Q = this;
	cout << "----------------------List of students---------------------- " << endl;
	int n = Q->lenList();
	for (int i = 0; i < n; i++) {
		cout << "\t *Student " << i + 1 << endl;
		Q->next->student.showInforStudent();
		Q = Q->next;
	}
}
ListStudent::~ListStudent()
{
}


void functionList() {
	cout << "List the functions of the program: " << endl;
	cout << "\t 1 - Create List Student " << endl;
	cout << "\t 2 - Insert Student into List " << endl;
	cout << "\t 3 - Delete Student in List " << endl;
	cout << "\t 4 - Edit Student information in the List " << endl;
	cout << "\t 5 - Search Student by ID " << endl;
	cout << "\t 6 - Show List. " << endl;
	cout << "\t 7 - Help" << endl;
	cout << "\t 8 - Exit";
}