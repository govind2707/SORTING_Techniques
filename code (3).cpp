#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int sum=0;
void merge(int low,int mid,int high,int a[])
{
    vector<int> ve;
    int left=low;
    int right=mid+1;
    while(left<=mid&&right<=high)
    {
        if(a[left]<a[right])
        {
            ve.push_back(a[left]);
            left++;
        }
        else
        {
            ve.push_back(a[right]);
            right++;
            sum=sum+(mid-left)+1;
        }
    }
    while(left<=mid)
    {
        ve.push_back(a[left]);
        left++;
    }
    while(right<=high)
    {
        ve.push_back(a[right]);
        right++;
    }
    for(int i=low;i<=high;i++)
    {
        a[i]=ve[i-low];
    }
    
}
void mergesort(int low,int high,int a[])
{
    if(low==high)
    return;
    int mid=(low+high)/2;
    mergesort(low,mid,a);
    mergesort(mid+1,high,a);
    merge(low,mid,high,a);
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    mergesort(0,n-1,a);
    cout<<sum;
}
    