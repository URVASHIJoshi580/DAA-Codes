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
void InsertionSort(int *arr,int n)
    {
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        while(arr[j]>temp && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
        }
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

InsertionSort(arr,n);
display(arr,n);
}

    