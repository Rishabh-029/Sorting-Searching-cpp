#include<bits/stdc++.h>

using namespace std;

const int N=1e5+10;

int main()
{
	
	int a[5]={10,20,30,40,50};
	int n=5;
	int ele=30;

	for (int i = 0; i < n; ++i)
	{
		if(a[i]==ele)
		{
			cout<<i;
			exit(0);
		}
	}

	return 1;
}
