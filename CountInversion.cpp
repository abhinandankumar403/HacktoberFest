#include<bits/stdc++.h>
using namespace std;

//Algorithm used is Merge Sort
//Time Complexity is O(n log n)

long long int merge(int a[], int low, int mid, int high);

int mergeSort(int a[], int low, int high)
{
    long long int count=0;
    if(low<high)
    {
        int mid=(low+high)/2;
        count+= mergeSort(a,low,mid); //counts inversions in left half
        count+= mergeSort(a,mid+1,high); //counts inversions in right half

        count+= merge(a,low,mid,high); //counts inversions when two halves are merged
    }
    return count;
}

long long int merge(int arr[], int low, int mid, int high)
{
    long long int count=0;
    int n1=mid-low+1; //size of left half
    int n2=high-mid; //size of right half (high-(mid+1)+1)==high-mid
    int a[n1],b[n2];

    for(int i=0;i<n1;i++)
    a[i]=arr[low+i];//storing sorted left half in a temporary array

    for(int i=0;i<n2;i++)
    b[i]=arr[mid+i+1];//storing sorted right half in a temporary array

    int i=0,j=0,k=low;
    while((i<n1)&&(j<n2))
    {
        if(a[i]<=b[j]) //No inversion occurs
        arr[k++]=a[i++];
        else {
        arr[k++]=b[j++]; //Inversion occurs! 
        count+=(n1-i); //if a[i] is greater, a[i+1], a[i+2] etc will also be greater. So all inversions are counted here
        }
    }
    while(i<n1)
    arr[k++]=a[i++];
    while(j<n2)
    arr[k++]=b[j++];

    return count;
}

int main()
{   
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    long long int ans=mergeSort(a,0,n-1);
    cout<<ans<<endl;
    return 0;
}