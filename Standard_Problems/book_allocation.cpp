#include<iostream>
using namespace std;

// n= number of books 
// m=number pf students

bool ispossible(int arr[],int n,int m,int mid){

    int stcount=1;
    int pagesum=0;

    for(int i=0;i<n;i++){
        if(pagesum+arr[i]<mid){
            pagesum+=arr[i];
        }
        else{
            stcount++;
            if(stcount>m || arr[i]>mid){

                return false;

            }
            pagesum=arr[i];
        }
    }

    return true;
    
}

int allocate(int arr[],int n,int m){

    int s=0;
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int ans=-1;

    while(s<e){
        int mid=(s+e)/2;

    if(ispossible(arr,n,m,mid)){
        ans=mid;
        e=mid-1;
    }
    else {
    s=mid+1;
}


}

return ans;


} 

int main(){
    int arr[4]={12,34,67,90};

    int answ=allocate(arr,4,2);

    cout<<"The answe is: "<<answ<<endl;
    return 0;
}