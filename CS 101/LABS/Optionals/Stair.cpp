#include <iostream>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(b>a && c>b) cout<<"STAIR"<<endl;
        else if(a<b && b>c) cout<<"PEAK"<<endl;
        else{
            cout<<"NONE"<<endl;
    }
    }
}