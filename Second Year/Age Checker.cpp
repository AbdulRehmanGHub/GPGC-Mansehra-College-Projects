#include <iostream>

#include <conio.h>

using namespace std;

int main()

{
  // Declare an integer "age".
  
  int age;
  
  cout <<"Enter your age"<<endl;
  
  // Get vale of "age" from user.
  
  cin >> age;
  
  // Apply condition.
  
  if (age>=1 && age<=100)
  
{
     
     if (age<18)
     
     cout <<"Teenager"<<endl;
     
     if (age>=18 && age<=32)
     
     cout <<"Adult"<<endl;
     
     if (age>32 && age<=45)
     
     cout <<"Middle Age"<<endl;
     
     if (age>=45 && age<=60)
     
     cout <<"Grewing Old"<<endl;
     
     if (age>60)
     
     cout <<"Old Fellow"<<endl;
     
     }
     
     else
    
    {
    cout <<"Sorry Jani"<<endl;
    cout<<" You are expired... hahaha";
    }
    getch();
    
    return 0;
    
    }
