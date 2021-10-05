#include<iostream>
using namespace std;
namespace First
{
	int add(int a,int b)
	{
		return (a+b);
	}
}
namespace Second
{
	float add(float a,float b)
	{
		return (a+b);
	}
}
int main()
{
	int a= add(2,9);
	float b=(5.9,6.3);
	cout<<a<<"\n"<<b;
}
