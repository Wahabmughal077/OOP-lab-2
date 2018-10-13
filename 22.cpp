#include<iostream>
using namespace std;
int main()
{
	unsigned long int n;
	unsigned long long int factorial=1;
	cout<<"Enter number for factorial ";
	cin>>n;
	for(int i=n;i>=1;i--)
	{
		factorial=factorial*i;
	}
	cout<<"Factorial of number is "<<factorial;
}
