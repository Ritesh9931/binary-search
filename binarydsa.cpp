#include<iostream>
using namespace std;

    int firstoccurance(int arr[],int n,int key){
    int s=0, e = n-1;
    int mid = s+(e-s)/2;
    int ans =-1;
    while(s<=e)
    {
        if(arr[mid] == key){
        ans = mid;
        e = mid-1;
        }
        else if(key > arr[mid])
        {
            s=mid+1;
        }
        else{
            e = mid -1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int lastoccurance(int arr[],int n,int key){
    int s=0, e = n-1;
    int mid = s+(e-s)/2;
    int ans =-1;
    while(s<=e)
    {
        if(arr[mid] == key){
        ans = mid;
        s = mid+1;
        }
        else if(key > arr[mid])
        {
            s=mid+1;
        }
        else{
            e = mid -1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

  int main()
  {
    int even[6]={5,6,8,8,8,3};
    cout<<"first occurance of 8 is at index" << firstoccurance(even,6,8)<<endl;
    cout<<"last occurance of 8 is at index" << lastoccurance(even,6,8)<<endl;
  
    return 0;
  }
