#include<iostream>
using namespace std;


void binarys(int arr[],int n){

    int start=0;
    
    int end=n-1;
    int middle=(start+end)/2; 
    int x;
    cout<<"Enter the elements to be searched ";
    cin>>x;

    while(start<=end){
        if(arr[middle]==x){
            cout<<"The elements is found at index "<<middle<<endl;;
        }

        if(x>arr[middle]){
            start=middle+1;
        }

        else {
            end= middle-1;
        }

        middle=(start+end)/2;


    }


}

int main(){
    int arr[5]={3,6,9,12,15};
    binarys(arr,5);
    return 0;
}