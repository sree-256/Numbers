#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,i,a=0;
	cin>>num;
	for(i=2;i<=int(sqrt(num));i++)
	{
		if(num%i==0)
		{
			a+=1;
		}
	}
		cout<<a<<endl;
		if(a==0)
		{
			cout<<"Prime Number";
		}
		else
		{
			cout<<"NOt Prime Number";
		}
}
