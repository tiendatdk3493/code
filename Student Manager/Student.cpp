#include "Student.h"


Student::Student() {
	id = 0;
	strcpy_s(name, " ");
	age = 0;
	strcpy_s(address, " ");
	score = 0.0;
}

Student::Student(int id = 0, char *name = "", int age = 0, char *address = "", float score = 0.0) {
	this->id = id;
	strcpy_s(this->name, name);
	this->age = age;
	strcpy_s(this->address, address);
	this->score = score;
}
//========================
int Student::getId() {
	return this->id;
}

string Student::getName() {
	return this->name;
}

int Student::getAge() {
	return this->age;
}

string Student::getAddress() {
	return this->address;
}

float Student::getScore() {
	return this->score;
}
//======================
void Student::setId(int id) {
	this->id = id;
}

void Student::setName(char *name) {
	strcpy_s(this->name, name);
}

void Student::setAge(int age) {
	this->age = age;
}

void Student::setAddress(char *address) {
	strcpy_s(this->address, name);
}

void Student::setScore(float score) {
	this->score = score;
}

//===============================
void Student::enterInforStudent() {
	//cout << "Enter information student: " << endl;
	cout << "\t - Id: ";
	cin >> id;
	fflush(stdin);
	cout << "\t - Name: ";
	cin.getline(name, 50);
	cout << "\t - Age: ";
	fflush(stdin);
	cin >> age;
	fflush(stdin);
	cout << "\t - Address: ";
	cin.getline(address, 100);
	fflush(stdin);
	cout << "\t - Score: ";
	cin >> score;
	
}

void Student::showInforStudent() {
	//cout << "Student Information: " << endl;
	cout << "\t \t - Id: " << id << endl;
	cout << "\t \t - Name: " << name << endl;
	cout << "\t \t - Age: " << age << endl;
	cout << "\t \t - Address: " << address << endl;
	cout << "\t \t - Score: " << score << endl;
}

//Student &Student::operator=(Student &a) {
//	this->id = a.id;
//	strcpy_s(this->name, a.name);
//	this->age = a.age;
//	strcat_s(this->address, a.address);
//	this->score = a.score;
//	return *this;
//}

int Student::operator==(Student &a) {
	if ((this->id == a.id) && (strcmp(this->name, a.name) == 0) && (this->age == a.age) &&
		(strcmp(this->address, a.address) == 0) && (this->score == a.score)) {
			return 1;
	}	
	else {
		return 0;
	}
}
Student::~Student() {
}
