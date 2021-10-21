#include<iostream>
using namespace std;
int main(){
    int n,x,y,t;
    cin>>t;
    while(t--){
        cin>>n>>x>>y;
        if(((n+1)*y) >= x)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}