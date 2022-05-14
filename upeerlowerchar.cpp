#include<iostream>
using namespace std;
int main()
{
	char c;
	cout<<"Enter a Character: ";
	cin>>c;
		 if(c>=65 && c<=90) cout<<"Uppercase";
	else if(c>=97 && c<=122) cout<<"Lowercase";
	cout <<endl;

	return 0;	
}
