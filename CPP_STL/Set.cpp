#include<iostream>
#include<set>
using namespace std;

int main(){
// No modification in it insert and delete only 

set<int> s;
s.insert(5);
s.insert(5);
s.insert(5);
s.insert(1);
s.insert(1);
s.insert(1);
s.insert(6);
s.insert(0);

for(auto i:s){
    cout<<i<<endl;
}
cout<<endl;
//one one time print hoga bs , and BST ka use krke

//s.erase(s.begin());// removes 0

set<int>::iterator it=s.begin();
it++;
s.erase(it);
for(auto i:s){
    cout<<i<<endl;
}

cout<<"Is five present or not. "<<s.count(5)<<endl;//0 or 1 

set<int>::iterator itr=s.find(5);
for(auto it=itr;it!=s.end();it++){
    cout<<*it<<" ";
}cout<<endl;

}