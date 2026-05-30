#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;
    s.push("Vaibhav");
    s.push("Kumar");
    s.push("Upadhyay");

    cout<<"Top Element-> "<<s.top()<<endl;
    cout<<"Size of the stack-->"<<s.size()<<endl;
    cout<<"Empty or Not "<<s.empty()<<endl;
}