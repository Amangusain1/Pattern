#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n=5;
	for(int i=0;i<=n;i++)
	{
		for(int j=n;j>=n-i;j--)
		{
			cout <<j;
		}
		cout <<endl;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=i;j--)
		{
			cout <<j;
		}
		cout<<endl;
	}
}
