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
using namespace First;
using namespace Second;
int main()
{
	int a= add(2,9);
	cout<<a<<"\n";
}
