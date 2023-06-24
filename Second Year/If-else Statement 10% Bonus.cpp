#include <iostream>

#include <conio.h>

using namespace std;


int main()

 {
 	
	 // Declare an integer "sal" for salary and an integer "bon" for bonus.
	 
	 int sal,bon;
 	 
 	 // Display a string "Enter your salary".
 	 
 	 cout <<"Enter your salary"<<endl;
 	 
	  // Get value of "sal" from user.
 	 
 	 cin >>sal;
     
     // New blank line.
     cout<<endl;
     
// Apply condition for 10% bonous.
 	 
 	 if (sal>10000)
{   

    // Use bonus formula.
    
	bon = (sal*10)/100;
	
	// Now display bonus amount.
	
	cout <<"Your bonus is "<<bon<<endl;
	
	// Add bonus to salary.
	sal = sal+bon;     
 } 
 
 else
 {
 	cout <<"Sorry you are not eligible for bonus."<<endl;
 	
 	// New blank line.
	 cout<<endl;
 }
 
 // Display Salary after adding 10% bonus.
 
 cout <<"Total Salary is  "<<sal<<endl;
 
 	
getch();

return 0;
 	
 }
