# include <iostream>

#include <conio.h>

#include <stdio.h>

#include <iomanip>

using namespace std;

int main()

{
	
	int no;
	
	cout <<setw(20)<<"1.New Game"<<endl;
	
	cout <<setw(20)<<"2.Load Game"<<endl;
	
	cout <<setw(20)<<"3.Delete Game"<<endl;
	
	cout <<setw(20)<<"4.Quit"<<endl;
	
	cout <<"Enter Your Choice "<<endl;
	
	cin >> no;
	
	switch(no)
	
	{
		
		case 1:
			cout <<setw(20)<<"New Game"<<endl;
			break;
			
			case 2:
				cout <<setw(20)<<"Load Game"<<endl;
				break;
				
				case 3:
					cout <<setw(20)<<"Delete Game"<<endl;
					
					case 4:
						cout <<setw(20)<<"Quit"<<endl;
						
						default:
							cout <<setw(20)<<"Soory wrong input"<<endl;
							break;	
		
	}
	
	
	getch();
	
	return 0;
	
}
