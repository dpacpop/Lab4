# include <iostream>
using namespace std;
void prime(int n)
{
	int b=0,i;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		b++;
	}
	if(b==1)
	cout<<"the number is prime.\n";
	else
	cout<<"the number is not prime.\n";
}
void armstrong(int n)
{
	int a,b,c=0;
	a=n;
	while(a!=0)
	{
		b=a%10;
		c=c+(b*b*b);
		a=a/10;
	}
	if(c==n)
	cout<<"the number is Armstrong number.\n";
	else
	cout<<"the number is not Armstrong number.\n";
}
void perfect(int n)
{
	int b=0,i;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		b=b+i;
	}
	if(n==b)
	cout<<"the number is a perfect number\n";
	else
	cout<<"the number is not a perfect number\n";
}
int main()
{
	int n;
	cout<<"enter a natural number\n";
	cin>>n;
	if(n<0)
	cout<<"incorrect input";
	else
	{
		prime(n);
		armstrong(n);
		perfect(n); 
	}
	return 0;
}
