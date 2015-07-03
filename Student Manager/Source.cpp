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
						  cout << "\t Select the insert position: ";
						  cin >> p;
						  if (p < 1 || p > listStudent->lenList() + 1) {
							  cout << "\tError postion.! Positon > 0 and <= " << listStudent->lenList() + 1 << ". Try again." << endl;
						  }
						  else {
							  break;
						  }
					  }
					  st.enterInforStudent();
					  listStudent->insertList(st, p);
					  break;
				}
			case 3:
			{
					int p = 0;
					cout << "\t Select the delete position: ";
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
					  break;
			}
			case 5:
			{
					  int id = 0;
					  cout << "Enter ID: ";
					  cin >> id;
					  if (int p = listStudent->searchByID(id) != 0) {
						  cout << p;
					  }
					  break;
					  
			}
			case 6:
			{
					  listStudent->showListStudent();
			}
				default:
					break;
		}
		if (chose == 7) {
			break;
		}
	}

	system("pause");
}