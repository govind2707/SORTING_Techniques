#include<bits/stdc++.h>
using namespace std;
int partition(int low,int high,int a[])
{
	int pivot=a[low];
	int s=low;
	int e=high;
	while(s<=e)
	{
		while(a[s]<=pivot)
		{
			s++;
		}
		while(a[e]>pivot)
		{
			e--;
		}
		if(s<e)
		swap(a[e],a[s]);
	}
	swap(a[low],a[e]);
	return e;		
}
void quicksort(int a[],int low,int high)
{
	if(low<high)
	{
		int loc=partition(low,high,a);
		quicksort(a,low,loc-1);
		quicksort(a,loc+1,high);
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	quicksort(a,0,n-1);
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	
}
