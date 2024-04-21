#include <iostream>
using namespace std;
int main(){
    int Roll[999];
    int count=0;
    int count2=0;
    
    for(int i=0; i<999; i++){
        cin>>Roll[i];
        if(Roll[i]==-1)break;
            
        
        

    }
    int r;
    cin>>r;
    for(int i=0; Roll[i]!=-1; i++){
        if(Roll[i]==r){
            count++;
        }
    }
    if(count==0)cout<<-1;
    else{
        cout<<count;
    }

        

        
        

    
    
    
}