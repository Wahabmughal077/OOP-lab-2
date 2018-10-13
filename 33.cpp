#include<iostream>
using namespace std;
int main()
{
	int sum=0,n;
	cout<<"Enter number  ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			cout<<"Even number "<<i<<endl;
			sum=sum+i;
		}
		else
		{
			cout<<"Odd number "<<i<<endl;
		}
	}
	cout<<"Sum of even number "<<sum;
}
