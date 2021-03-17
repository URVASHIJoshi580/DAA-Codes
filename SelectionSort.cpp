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
    int n,i,j,temp,index;
    cout<<"Enter Array Limit\n";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Bound\n";
    for(i=0;i<n;i++)
    cin>>arr[i];

for(i=0;i<n-1;i++)
{
    temp=arr[i];
    index=i;
    for(j=i+1;j<n;j++)
    {
        if(arr[j]<temp){
          temp=arr[i];
            index=j;

    }
}
swap(&arr[i], &arr[index]);
}
display(arr,n);
}