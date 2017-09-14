# include<iostream>
using namespace std;
int evenodd(int a)
{
	if(a%2 ==0)
	cout<<"the given integer is even.";
	else
	cout<<"the given integer is odd";
	return 0;
}
int main()
{
	int i;
	cout<<"enter the integer to check if it is odd or not.\n";
	cin>>i;
	evenodd(i);
	return 0;
}
