#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
    char pie=3.14;//Declare value of Pie.
    
	float r;//Declare a float variable r.
	
	cout <<"Enter the value of radious in centimeter (cm)."<<endl;
	
	cout <<" "<<endl;//New blank line.
	
	cout <<setw(9)<<"Value="; 
	
	cin  >> r;//Extract value of radious (r) from user.
	
	cout <<" "<<endl;//New blank line.
	
	cout <<"Area of circle is"<<endl;
	
	cout <<" "<<endl;//New blank line.
	
	cout <<setw(7)<<2*pie*r<<"cm"<<endl;//Use formula of circle.
	
	cout <<" "<<endl;//New blank line.
	
	char ch;
	
	cout <<"Press any key to exit_______"<<endl;
	
	cout <<" "<<endl;
	
	ch=getch();
	
	cout <<"You pressed"<<endl; cout <<" "<<endl;
	
    cout <<setw(7)<<ch;
    
	return 0;
}
