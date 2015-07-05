#include "Student.h"
#include "PLISTLIB.h"
#include "ListStudent.h"

int main(){
	
	functionList();
	ListStudent *listStudent = new ListStudent();
	int chose = 0;
	while (true)
	{
		cout << endl << ">> Chose: ";
		cin >> chose;
		switch (chose)
		{
			case 1:
				{
					  listStudent = new ListStudent();
					  listStudent->enterListStudent();
					  break;
				}
			case 2:
				{
					  Student st = Student();
					  int p = 0;
					  while (true)
					  {
						  cout << "\t>> Select the insert position: ";
						  cin >> p;
						  if (p < 1 || p > listStudent->lenList() + 1) {
							  cout << "\tError postion.! Positon > 0 and <= " << listStudent->lenList() + 1 << ". Try again." << endl;
						  }
						  else {
							  break;
						  }
					  }
					  st.enterInforStudent();
					  if (!listStudent->searchByID(st.getId())) {
						  listStudent->insertList(st, p);
					  }
					  else
					  {
						  cout << "\t=>Error Insert. ID already exists.!";
					  }
					  
					  break;
				}
			case 3:
			{
					int p = 0;
					cout << "\t>> Select the delete position: ";
					cin >> p;
					if (p < 1 || p > listStudent->lenList()) {
						cout << "\tError postion.! Positon > 0 and <= " << listStudent->lenList() << endl;
					}
					else{
						listStudent->deleteStudent(p);
					}
					
					break;
			}
			case 4:
			{
					  int id = 0;
					  int slect = 0;
					  cout << "\t>> Enter ID: ";
					  cin >> id;
					  if (listStudent->searchByID(id)) {
						  cout << "\t>> 1.Name \t2.Age \t3.Address \t4.Score: ";
						  cin >> slect;
						  switch (slect)
						  {
							  case 1:
							  {
										char name[50];
										cout << "\t>> Name: ";
										fflush(stdin);
										cin.getline(name, 50);
										listStudent->setNameStudent(id, name);
										break;
							  }
							  case 2:
							  {
										int age;
										cout << "\t>> Age: ";
										fflush(stdin);
										cin >> age;
										listStudent->setAgeStudent(id, age);
										break;
							  }
							  case 3:
							  {
										char address[100];
										cout << "\t>> Address: ";
										fflush(stdin);
										cin.getline(address, 100);
										listStudent->setAddressStudent(id, address);
										break;
							  }
							  case 4:
							  {
										float score = 0;
										cout << "\t>> Score: ";
										fflush(stdin);
										cin >> score;
										listStudent->setScoreStudent(id, score);
										break;
							  }

							  default:
								  break;
						  }
					  }
					  else
					  {
						  cout << "\t=> Error Edit. ID not exists.!";
					  }
					  break;
			}
			case 5:
			{
					  int id = 0;
					  cout << "\t>> Enter ID: ";
					  cin >> id;
					  int p = listStudent->searchByID(id);
					  if (p != 0) {
						  cout << p;
						  listStudent->retrieveStudent(p).showInforStudent();
					  }
					  break;
			}
			case 6:
			{
					  listStudent->showListStudent();
					  break;
			}
			case 7:
			{
					  functionList();
					  break;
			}
				default:
					break;
		}
		if (chose == 8) {
			break;
		}
	}

	system("pause");
}