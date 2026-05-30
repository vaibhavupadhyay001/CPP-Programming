#include<iostream>
using namespace std;


 int first(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int ans=0;
    while(start<=end){

        int mid=(start+end)/2;

        if(key==arr[mid]){
            ans=mid;
            end=mid-1;
        }

        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
 }

 int last(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int ans=0;
    while(start<=end){

        int mid=(start+end)/2;

        if(key==arr[mid]){
            ans=mid;
            start=mid+1;
        }

        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
 }


 int main(){
    int arr[5]={1,3,3,3,5};

    int ans=first(arr,5,3);
    int ans1=last(arr,5,3);

    if(ans!=0){
        cout<<"The index of first occurance is "<<ans<<endl;
        cout<<"The index of last occurance is "<<ans1<<endl;
    }
    else{
        cout<<"Element not found in the array ";

    }

    int total=(ans1-ans)+1;
    cout<<"The total number of occuranes is: "<<total<<endl;
    return 0;



 }