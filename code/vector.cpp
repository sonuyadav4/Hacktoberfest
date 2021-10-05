#include<iostream>
#include<vector>
using namespace std;
int main(){
vector <int> *vp=new vector<int>();
vector <int > v;
v.push_back(10);
v.push_back(20);
v.push_back(30);
v.push_back(50);
v[43]=50;

for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
v.pop_back();
v.pop_back();
v.pop_back();
for(int i=0;i<60;i++){
   cout<<"size="<<v.size()<<endl;
   cout<<"capactity="<<v.capacity()<<endl;

   cout<<v[i]<<endl;
}
delete vp;
}
