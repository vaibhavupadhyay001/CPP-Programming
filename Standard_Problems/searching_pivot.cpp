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

#include<iostream>
using namespace std;


int binarys(int arr[],int start,int end,int x){

    int middle=(start+end)/2; 

    while(start<=end){
        if(arr[middle]==x){
            return middle;
            
        }

        if(x>arr[middle]){
            start=middle+1;
        }

        else {
            end= middle-1;
        }

        middle=(start+end)/2;


    }
    return -1;
}


int binary(int arr[],int n,int key){

    int p=pivot(arr,n);

    if(key>=arr[p]&&key<=arr[n-1]){

        return binarys(arr,p,n-1,key);

    }
    else 
    return binarys(arr,0,p-1,key);

}

int main(){
    int arr[6]={7,9,1,2,3,5};

    int ans=0;
     ans=binary(arr,6,2);




    if(ans!=-1){

    cout<<"the index of pivot elements is "<<ans<<endl;

}
    else 

    cout<<"The elements is not find "<<ans<<endl;
    return 0;
    
}