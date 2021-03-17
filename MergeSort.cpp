#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void display(int arr[], int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

void merge(int arr[],int l,int mid,int h)
{
    int n1=mid-l+1;
    int n2=l-mid;
    int L[n1], R[n2];
    int i=0,j=0,k=l;
    while(i<n1)
    {
        L[i++]=arr[k++];
    }
    while(j<n2)
    {
        R[j++]=arr[k++];
    }
    //i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<R[j])
        {
            arr[k++]=L[i++];
        }
        else
        {
        
        arr[k++]=R[j++];
    }
    }
    while(i<n1)
    {
        arr[k++]=L[i++];
    }
    while(j<n2)
    {
        arr[k++]=R[j++];
    }
}
void MergeSort(int arr[],int l,int h)
{
    if(l<h)
    {
        int mid=(l+h)/2;
        MergeSort(arr,l,mid);
        MergeSort(arr,mid+1,h);
        merge(arr,l,mid,h);
    }
}
int main()
{
    int n,i,j,temp;
    cout<<"Enter the limit of the array\n";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    cin >>arr[i];
merge(arr,0,0,n);
display(arr,n);
return 0;
}

