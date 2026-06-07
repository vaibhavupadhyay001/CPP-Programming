#include<iostream>
using namespace std;
int main(){
    int arr[6]={4,5,7,8,3,2};

    for(int i=1;i<6;i++){

        int temp=arr[i];

        int j=i-1;
        for(;j>=0;j--){

            if(arr[j]>temp){

                arr[j+1]=arr[j];
            }
    
        
        }


        arr[j+1]=temp;
        
        
    }
    
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    return 0;


}