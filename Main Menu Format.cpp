#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int opt=1;
	int name, pass; //change this to char array later
	do
	{
        system("cls");
        cout << "==============================="   <<'\n';
        cout << "            Main Menu          "   <<'\n';
        cout << "==============================="   <<'\n' <<'\n';
        cout << "1. Admin"   <<'\n';
        cout << "2. Employee"   <<'\n';
        cout << "3. About"        <<'\n' <<'\n';
        cout << "4. Exit"                     <<'\n' <<'\n';
        cout << "-------------------------------"    <<'\n';
        cout << ">> ";
		cin>>opt;
		
		switch(opt)
		{				
			case 1:
				system ("cls");
				cout << "Administration Access\n\n";
				// log-in
					cout << "Username: ";
					cin >> name;
					
					if(name==111){
						cout << "Password: ";
						cin >> pass;
						
						if(pass==123){
							system ("cls");
							cout << "Hello Admin.\n\n";
						}
						
						else{
							cout << "\n\nIncorrect Password\n\n";
						}						
					}
					
					else{
						cout << "\n\nUser does not exist\n\n";
					}
					
				system ("pause");
				break;
		
			case 2:
				system ("cls");
				system ("pause");
				break;
		
			case 3:
				system ("cls");
				cout << "MGM Project\n\n";
				cout << "Creators:";
				cout << "\t SANTOS, Michael\n";
				cout << "\t\t SUPETRAN, Gia\n";
				cout << "\t\t SYBAL, May\n";
				cout << "\nSubmitted to:\t Mr. Melvin Cabatuan\n";
				cout << "\nIn partial fulfillment of requirements for LBYEC72\n";
				cout << "\nAbout the Program:";
				cout << "\n*insert program description here*\n\n";
				system ("pause");
				break;
		
			case 4:
				break;
	
			default:	
				cout << "\nInvalid input!\n\n";
				system ("pause");
				opt = 1;
				break;
		}
	} while(opt >= 1 && opt <= 3);


	cout << "\nThank you for using this program!\n\n";
	system("pause");
	return 0;	
	
}
