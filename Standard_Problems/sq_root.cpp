#include<iostream>
using namespace std;
int squareroot(int n){
   int start=0;
  int  end=n;

  int ans=0;
  while(start<=end){
    int m=(start+end)/2;

    if(m*m==n){
        return m;

    } 
    if(m*m<n){
        ans=m;
        start=m+1;
    }
    else 
    end=m-1;
  } 
  return ans;

} 

int main(){
    int arr[5]={2,3,4,5,6};

    int ans=squareroot(99);

    cout<<"The square root is nearly: "<<ans<<endl;
    return 0;
}