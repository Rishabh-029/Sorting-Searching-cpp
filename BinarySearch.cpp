#include<bits/stdc++.h>

using namespace std;

const int N=1e5+10;

int main()
{
	int n;
	cin>>n;
	int a[n];

	for (int i = 0; i <n ; ++i)
	{
		cin>>a[i];
	}

	int ele;
	cin>>ele;

	int low=0,high=n-1;

	while(low<=high)
	{
		int mid=(low+high)/2;

		if(a[mid]==ele)  
			{
				cout<<"position Ele is found in "<<mid;
				exit(0);
			}
		else if(ele <a[mid]) high=mid-1;

		else if(ele >a[mid]) low=mid+1;  
	}

	return 1;
}
