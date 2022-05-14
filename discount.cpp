#include<iostream>

using namespace std;

int main()
{
	int unit, quantity,total,discount;
	cout<<"Enter unit"<<endl;
	cin>>unit;
	cout<<"Enter quantity"<<endl;
	cin>>quantity;
	
	total=unit*quantity;
	cout<<"total is "<<total;
	
	if(total>1000)
	discount=total*10/100;
	total=total-discount;
	
	cout<<"After discount total is"<<total;
	return 0;
}
	
	
