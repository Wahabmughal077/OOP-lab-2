#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char op;
	cout<<"Enter ist number ";
	cin>>a;
	cout<<"Enter 2nd number ";
	cin>>b;
	cout<<"Enter operation ";
	cin>>op;
	switch(op)
	{
	case'+':
			cout<<a+b;
		break;
	case'-':
			cout<<a-b;
		break;
	case'*':
			cout<<a*b;
		break;
	case'/':
			cout<<a/b;
		break;
	}
	return 0;
}
