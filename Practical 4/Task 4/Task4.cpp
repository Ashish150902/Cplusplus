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
	int a= First::add(2.11,9);
	float b= Second::add(7,3.66);
	cout<<a<<"\n"<<b;
}
