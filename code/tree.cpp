#include<iostream>
#include<vector>
using namespace std;
template <typename t>
class tree{
public:
t data;
vector <tree<t>*>child;
tree( t data){
this->data =data;
    }
};
tree<int>*take(){
int rootdata;
cout<<"enter data"<<endl;
cin>>rootdata;
tree<int>*root=new tree <int>(rootdata);
int n;
cout<<"enter no of child "<<endl;
cin>>n;
for(int i=0;i<n;i++){
    tree<int>*children=take();
    root->child.push_back(children);
}
return root;

}

void print(tree <int>*root){
if(root==NULL){
    return;
}
cout<<root->data<<":";
for(int i=0;i<root->child.size();i++){
    cout<<root->child[i]->data<<",";
}
cout<<endl;
for(int i=0;i<root->child.size();i++){
    print(root->child[i]);
}

}
int main(){

tree<int>*root=take();
print(root);
}
