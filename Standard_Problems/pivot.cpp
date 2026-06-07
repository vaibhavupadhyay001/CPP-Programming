#include<iostream>
using namespace std;

int pivot(int arr[],int n){
    int start=0;
    int end=n-1;

    while(start<end){
        int mid=(start+end)/2;

        if(arr[mid]>arr[start]){
            end=mid-1;

        }
        else{
            start=mid;
        }
    }
    return end;
}

int main(){
    int arr[6]={9,7,1,2,3,5};

    int ans=pivot(arr,6);

    cout<<"the index of pivot elements is "<<ans<<endl;
    cout<<"The pivot is: "<<arr[ans]<<endl;

return 0;
    
}