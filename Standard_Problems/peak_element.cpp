#include<iostream>
using namespace std;

int peak(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        int mid=(start+end)/2;
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else {
            end=mid;
        }
    }
    return start;
}


int main(){
    int arr[6]={2,4,5,7,4,2};

    int ans=peak(arr,6 );

    cout<<"The index of peak element is: "<<ans<<endl;
    return 0;
}