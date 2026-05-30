#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"The fisrt index element-->"<<d.at(1)<<endl;



    //d.pop_back();
    d.pop_front();
   // cout<<"After pop back-->"<<" ";
   cout<<"After pop front--> "<<" ";
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Empty or not--> "<<d.empty()<<endl;

    cout<<"Before erase--> "<<d.size()<<endl;

    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase--> "<<d.size()<<endl;
}