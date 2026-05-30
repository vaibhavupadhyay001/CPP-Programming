#include<iostream>
using namespace std;

int firstposition(int arr[],int n,int key){
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
        else
            end=mid-1;
    }
    return ans;

}

int lastpos(int arr[],int n,int key){
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
        else
            end=mid-1;
    }
    return ans;

}


int main(){
    int arr[5]={1,2,2,2,4};
    int ans=firstposition(arr,5,2);
    int ans1=lastpos(arr,5,2);

    if(ans!=0)

    {
        cout<<"The first position of elements is: "<<ans<<endl;
        cout<<"the last position of elements is: "<<ans1<<endl;
}  
else {
    cout<<"The elements is not found: ";
}


    return 0;
}