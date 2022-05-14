#include<iostream>
using namespace std;

int main()
{
	double grade;
	cout<<"please enter your grade?";
	cin>>grade;
	
	if((grade >=80) && (grade<100))
	{
		cout<<" your letter grade is: "<<"A";
	}
	else if((grade >=60) && (grade <80))
	{
		cout<<" your letter grade is: "<<"B";
	}
	else if((grade >=50) && (grade <60))
	{
		cout<<" your letter grade is: "<<"C";
	}
	else if((grade >= 45) && (grade <50))
	{
		cout<<" your letter grade is: "<<"D";
	}
	else if((grade >= 25) && (grade <45))
	{
		cout<<" your letter grade is: "<<"E";
	}
	else if((grade >= 0) && (grade <25))
	{
		cout<<" your letter grade is: "<<"F";
	}
	
	return 0;
	
	
}
