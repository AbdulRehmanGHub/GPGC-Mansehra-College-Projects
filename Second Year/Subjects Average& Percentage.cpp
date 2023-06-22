#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main()
{
	int total; //Declare an integer "total".
	
	cout <<"Enter the total Marks"<<endl;
	
	cout <<endl; //New Blank Line.
	
	cin  >>total; //Get value of "total" from user.
	
	cout <<endl; //New Blank Line.
	
	float Eng,Urdu,Maths,Phy,CS,PakStudies; //Declare a float "Eng,Urdu,Maths,Phy,CS,PakStudies"
	
	cout <<"Enter you English Marks"<<endl;
	
	cout <<endl; //New Blank Line.
	
	cin  >>Eng; //Get value of "Eng" from user.
	
	cout <<endl; //New Blank Line.
	
	cout <<"Enter you Urdu Marks"<<endl;
	
	cout <<endl; //New Blank Line.
	
	cin  >>Urdu; //Get value of "Urdu" from user.
	
    cout <<endl; //New Blank Line.
	
	cout <<"Enter you Maths Marks"<<endl;
	
	cout <<endl; //New Blank Line.
	
	cin  >>Maths; //Get value of "Maths" from user.
	
	cout <<endl; //New Blank Line.
	
	cout <<"Enter you Physics Marks"<<endl;
	
	cout <<endl; //New Blank Line.
	
	cin  >>Phy; //Get value of "Phy" from user.
	
	cout <<endl; //New Blank Line.
	
	cout <<"Enter you Computer Science Marks"<<endl;
	
	cout <<endl; //New Blank Line.
	
	cin  >>CS; //Get value of "CS" from user.
	
	cout <<endl; //New Blank Line.
	
	cout <<"Enter you Pak Studies Marks"<<endl;
	
	cout <<endl; //New Blank Line.
	
	cin  >>PakStudies; //Get value of "PakStudies" from user.
	
	cout <<endl; //New Blank Line.
	
	float avg=Eng+Urdu+Maths+Phy+CS+PakStudies; //Declare a float "avg" and apply average formula on it.
	
	cout <<"Average is ="<<" "<<avg<<endl;
	
	cout <<endl; //New Blank Line.
	
	float per=avg/total*100; //Declare a float "per" and apply percentage formula on it.
	
	cout <<"Percentage is ="<<" "<<per<<endl;
	
	cout <<endl; //New Blank Line.
	
	cout <<setw(30)<<"Superb !"<<" "<<"Thanks Alot Dear User.";
	
	getch();
	
	return 0;
}
