# include<iostream>
using namespace std;
double diameter(double r)
{
	return(2*r);
}
double circumference(double r)
{
	return(2*3.14*r);
}
double area(double r)
{
	return(3.14*r*r);
}
int main()
{
	double i;
	cout<<"enter the radius of the circle\n";
	cin>>i;
	cout<<"the diameter of the circle is "<<diameter(i)<<endl;
	cout<<"the circumference of the  circle is "<<circumference(i)<<endl;
	cout<<"the area of the circle is "<<area(i);
	return 0;
}
