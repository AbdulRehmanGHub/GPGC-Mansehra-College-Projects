#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<iomanip>

using namespace std;

int main()

{
	// Declare an integer "x".
	int x;

    // Display a string "Please enter a number".
	cout <<"Please enter a number"<<endl;
     
    // Get value of "x" from user 
	cin >>x;
    
    /* Apply condition for Even Number.
	   If condition is true it displays string "Even Number".
	*/
	if (x%2==0)
	{
	cout <<"Even Number.";}
	
	// Otherwise it displays string "Odd Number"
	else
	{
	cout <<"odd number";}
	getch();
	
    return 0;
}




