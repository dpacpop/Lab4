# include<iostream>
using namespace std;
int max(int a,int b)
{
	if(a>b)
	return a;
	else
	return b;
}
int min(int a,int b)
{
	if(a>b)
	return b;
	else
	return a;
}
int main()
{
	int i,j;
	cout<<"enter the two integers to compare them\n";
	cin>>i>>j;
	if(i==j)
	cout<<"both numbers are equal";
	else
	{
		cout<<"the maximum number is "<<max(i,j)<<" and the minimum number is "<<min(i,j);
	}
	return 0;
}
