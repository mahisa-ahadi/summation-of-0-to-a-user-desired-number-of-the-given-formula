#include<iostream>
#include<cmath>
using namespace std;
float expression(int n,int x)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact*=i;
	}		
	float numerator=pow(-1,n);
	float b=pow(x,n);
	float total=(numerator/fact)*b;
	return total;
}
int main(void)
{
	int n,x;
	cout<<"enter a value for n: ";
	cin>>n;
	cout<<"enter a value for x: ";
	cin>>x;
	float sum=0;
	for(int i=0;i<=n;i++)
	{
	  	sum+=expression(i,x);
	}
	cout<<"the result is "<<sum;
	return 0;
}