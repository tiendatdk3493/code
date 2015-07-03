#include "ListStudent.h"


ListStudent::ListStudent()
{
	ListStudent *Header = (ListStudent*)malloc(sizeof(ListStudent));
	(*Header).next = NULL;
}

bool ListStudent::isEmptyList() {
	return this->next;
}

void ListStudent::insertList(Student st) {
	ListStudent listSt = ListStudent();
	listSt.student = st;
	listSt.next = NULL;
}

//ListStudent ListStudent::getFirstList() {
//
//}


ListStudent::~ListStudent()
{
}
