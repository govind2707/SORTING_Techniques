#include<bits/stdc++.h>
using namespace std;
void bubblesort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            swap(a[j],a[j+1]);
        }
    }
    return;
}
int main()
{
    int n;
    cout<<"enter size of array";
    cin>>n;
    int a[n];
    cout<<"enter elements";
    for(int i=0;i<n;i++)
        cin>>a[i];
    bubblesort(a,n);
    cout<<"after sorting";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}