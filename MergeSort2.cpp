#include <bits/stdc++.h>
using namespace std;
void merge(int arr[],int s,int mid,int e)
{
    int i = s;
    int j = mid+1;
    int k = s;
    int *b = new int[e-s+1]; //dynamic array to store sorted element
    while (i<=mid && j<=e)
    {
        if(arr[i]<arr[j])
        {
            b[k++]=arr[i++];
        }
        else b[k++]=arr[j++];
    }
    while (i<=mid)
        b[k++]=arr[i++];
    while (j<=e)
        b[k++]=arr[j++];
    for(int i=s;i<=e;i++) // refilling original array
        arr[i]=b[i];
    
    delete []b; //deleting dynamic array
}
void mergeSort(int arr[],int s,int e)
{
    if(s>=e) return;

    int mid = (s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,mid,e);
   
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++)
        cin>>arr[i];
    mergeSort(arr,0,n-1);


    for(int i=0; i<n;i++)
        cout<<arr[i]<<' ';
    return 0;
}