#include <iostream>
using namespace std;
int main(){
    float x,y;
    float u=-1;
    float v=1;
    float count=0;
    for(int i=1; i<=100000; i++){
        x=u + (v-u)*rand()/(1.0 + RAND_MAX);
        y=u + (v-u)*rand()/(1.0 + RAND_MAX);
        if(x*x + y*y <= 1){
            count++;
        }
    
    }
    cout<<count/100000<<endl;
}