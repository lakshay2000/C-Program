// Find the first and last occurence of index of number in an array

#include <iostream>
using namespace std;
int firstOcc(int arr[], int n,int i,int key){
    
    if(i==n){
        return -1;
    }
    
    if(arr[i]==key){
        return i;
    }
    return firstOcc(arr,n,i+1,key);
}

int lastOcc(int arr[], int n,int i,int key){
    
    if(i==n){
        return -1;
    }
    
    int resArr =  lastOcc(arr,n,i+1,key);
    if(resArr!=-1){
        return resArr;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;

}



int main()
{
    int arr[]={4,2,1,2,5,2,7};
    cout<<firstOcc(arr,7,0,2)<<endl;
    cout<<lastOcc(arr,7,0,2);
    return 0;
}