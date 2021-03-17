#include <bits/stdc++.h>

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
int partition(int arr[],int l,int h)
{
    int i=l-1;
    int pivot=arr[h];
    int j;
    for(j=l;j<h;j++)
    {
    if(arr[j]<pivot)
    {
        i++;
        swap(&arr[i], &arr[j]);
    }
}
swap(&arr[i+1], &arr[h]);
return i+1;
}
void randomisation(int arr[], int l, int h)
{
    //int random=(h-l+1)+l;
    int temp=rand()%(h-l+1)+l;
    swap(&arr[temp], &arr[h]);
}
void QuickSort(int arr[], int l, int h)
{
    int pivot;
    if(l<h)
    {
        randomisation(arr,l,h);
        QuickSort(arr,l,pivot-1);
        QuickSort(arr,pivot+1,h);
      
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
QuickSort(arr,0,n-1);
display(arr,n);
return 0;
}

