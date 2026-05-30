#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"Size-->"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Size-->"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Size-->"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Size-->"<<v.capacity()<<endl;
    
    cout<<"The size is-->"<<v.size()<<endl;

    cout<<"The element at index 2-->"<<v.at(2)<<endl;
    cout<<"Back-->"<<v.back()<<endl;

    cout<<"Before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"after pop"<<" ";
    for(int i:v){
        cout<<i<<" "<<endl;
    }

        cout<<"Before clear-->>"<<v.size()<<endl;
        v.clear();
        cout<<"After clear-->>"<<v.size()<<endl;



        vector<int> a(5,1);// assigning a limit to vector 
        cout<<"Printing a--->"<<" ";
        for(int i:a){
            cout<<i<<" ";
        }



    




}