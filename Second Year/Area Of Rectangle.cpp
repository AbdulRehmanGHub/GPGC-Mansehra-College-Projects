#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main()
{
	float L;
	cout <<" "<<setw(30)<<"Enter length of Rectangle"<<endl;
	cout <<endl; //New Blank Line.
	
	cin  >>L;
	
	cout <<endl; //New Blank Line.
	
	float W;
	cout <<" "<<setw(29)<<"Enter width of Rectangle"<<endl;
	cout <<endl; //New Blank Line.
	
	cin  >>W;
	
	cout <<endl; //New Blank Line.
	
	cout <<" "<<setw(29)<<"Area Of Rectangle is cm"<<" "<<L*L+W*W<<endl;
	
	getch();
	return 0;
}
