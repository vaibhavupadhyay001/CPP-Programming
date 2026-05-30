#include<iostream>
using namespace std;

int ispossible(int stalls[],int n,int k,int mid){
    int cow=1;
    int lastpos=stalls[0];

    for(int i=0 ; i < n ;i++){
        if(stalls[i]-lastpos>=mid){

            cow++;
            if(cow==k){
                return true;
            }

            lastpos=stalls[i];
            
        }

    }
    return false;
}


int cows(int stalls[],int n,int k){

    sort(stalls,stalls+n);
    int s=0;
    int maxi=-1;

    for(int i=0;i<n;i++){

        maxi=max(maxi,stalls[i]);

    }
    int e=maxi;
    int ans=-1;


    while(s<e){
       int mid=(s+e)/2;
        if(ispossible(stalls,n,k,mid)){
            ans=mid;
            s=mid+1;

        }
        else {
            e=mid-1;
        }
    }
    return ans;

}


int main(){
    int arr[5]={4,2,1,3,6};
    int n=5;
    int ans=cows(arr,n,2);

    cout<<"The answer is "<<ans<<endl;
    return 0;
}