#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("love");
    q.push("babbar");
    q.push("kumar");

    cout<<"Size before pop--> "<<q.size()<<endl;

    cout<<"Top --> "<<q.front()<<endl;

    q.pop();

    cout<<"After pop the first elemet is--> "<<q.front()<<endl;

    cout<<"Size after pop--> "<<q.size()<<endl;
}