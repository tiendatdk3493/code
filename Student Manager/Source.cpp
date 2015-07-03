#include "Student.h"
#include "PLISTLIB.h"
#include "ListStudent.h"

int main(){
	ListStudent list = ListStudent();// = new ListStudent();
	cout << list.isEmptyList();

	system("pause");
}