# include<iostream>
using namespace std;
int cube(int a)
{
	return(a*a*a);
}
int main()
{
	int i;
	cout<<"enter any integer to cube it\n";
	cin>>i;
	cout<<"the cube of the given integer is "<<cube(i);
	return 0;
}
