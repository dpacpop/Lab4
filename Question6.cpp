#include <iostream>
using namespace std;
void prime(int m,int n)
{
	int b,i,j;
	cout<<"the prime numbers between "<<m<<" and "<<n<<" are:\n";
	for(i=m;i<=n;i++)
	{
		b=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			b++;
		}
		if(b==1)
		cout<<i<<endl;
	}
}
int main()
{
	int m,n;
	cout<<"enter the upper and lower limits\n";
	cin>>m>>n;
	if(n<0 || m<0)
	cout<<"incorrect input";
	else
	prime(m,n);
	return 0;
}
