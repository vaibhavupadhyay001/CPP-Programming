#include <iostream>
using namespace std;

// k=number of walls to be painted i.e. n;
//m=number of painters

int isp(int arr[],int k,int m,int mid){
    
    int pc=1;
    int painter=0;
    for(int i=0;i<k;i++){
        if(painter+arr[i] <= mid){
            painter+=arr[i];
        }
        else{
            pc++;
            if(pc>m || arr[i]>mid){
                return false;
            }
            painter=arr[i];
        }
    }
    return true;
}

int partition(int arr[],int k,int m){
    int s=0;
    int sum=0;
    for(int i=0;i<k;i++){
        sum=sum+arr[i];
    }
        
  int e=sum;

int ans=-1;

while(s<e){
    int mid=s+(e-s)/2;
    if(isp(arr,k,m,mid)){
        ans=mid;
        e =mid-1;
    }
    else {
    s=mid+1;
}

}
return ans;
} 


int main(){
    int arr[4]={5,5,5,5};
    
    int answer=partition(arr,4,2);
    cout<<"The anwer is: "<<answer<<endl;
    return 0;
}
