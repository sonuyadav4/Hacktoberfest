#include<iostream>
using namespace std;
int helper(int input[],int n,int x){
int count =0 ;
for(int i=0;i<n;i++){
    if(input[i]==x)
        count++;

        }
return count;
}

int main (){
    int n,x;
    cin>>n;
cin>>x;
    cout<<"put  arr value:";
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<<helper(arr,n,x);
return 0;
}
