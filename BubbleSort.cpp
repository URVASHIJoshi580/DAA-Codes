#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int*a, int*b)
{
int temp;
temp= *a;
*a = *b;
*b = temp;
}
void display(int arr[], int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
int main()
{
    int n,i,j;
    cout<<"Enter Array Limit\n";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Bound\n";
    for(i=0;i<n;i++)
    cin>>arr[i];

for(i=0;i<n;i++)
{
    for(j=0;j<n-i-1;j++)
    {
        if (arr[j]>arr[j+1])
        swap(&arr[j], &arr[j+1]);
    
    }
}
display(arr,n);
}
