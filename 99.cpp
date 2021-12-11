// Count Inversion

// If arr[i]> arr[j] && i<j then all the elements will be inversion

#include <iostream>
using namespace std;

long long merge(int arr[],int l,int mid,int r){
    long long inv=0;
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i]=arr[l+i];
    }
    for (int i = 0; i < n2; i++)
    {
        a[i]=arr[mid+i];
    }
    
}

long long mergeSort(int arr[],int l,int r){
    long long inv=0;

    if(l<r){
        int mid=(l+r)/2;
        inv+=mergeSort(arr,l,mid);
        inv+=mergeSort(arr,mid+1,l);
        inv+=merge(arr,l,mid,r);

    }


    return inv;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<mergeSort(arr,0,n-1);
    
    return 0;
}
