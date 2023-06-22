#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()

{
	int age;
	
	cout <<"Please enter your age"<<endl;
	
	cout<<endl;//New Blank Line.
	
	cin  >>age;
	
	cout<<setw(20)<<endl;
	
	cout <<"Your age is "<<" "<<age<<endl;
	
	getch();
	
	return 0;
}
