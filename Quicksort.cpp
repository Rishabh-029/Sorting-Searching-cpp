#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int low,int high)
{
    int pivot=a[high];
    int i=low-1;
    for (int j = low; j <high ; ++j)
    {
        if(a[j]<pivot)
        {
            i++;

            swap(a[i],a[j]);
        }
    }
    //adding pivot in its correct position
    i++;

    swap(a[i],a[high]);

    return i;
}
void quicksort(int a[],int low,int high)
{
    if(low<high)
    {
        int pivotindex=partition(a,low,high);
        quicksort(a,low,pivotindex-1);
        quicksort(a,pivotindex+1,high);
    }
}
int main()
{
    int a[6]={90,20,50,70,10,60};
    int n=6;
     quicksort(a,0,n-1);


     for (int i = 0; i < n; ++i)
     {
         cout<<a[i]<<" ";
     }

     return 1;
}
