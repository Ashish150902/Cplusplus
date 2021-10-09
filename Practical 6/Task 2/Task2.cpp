#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	string s,x;
	getline (cin, s);
	x=s;
	reverse(x.begin(),x.end());
	if(s==x)
		cout<<"String is palindrome";
	else
		cout<<"String is not palindrome";
	return 0;
	
}
