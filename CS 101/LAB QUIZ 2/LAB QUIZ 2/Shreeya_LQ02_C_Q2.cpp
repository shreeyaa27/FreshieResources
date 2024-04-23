#include <iostream>
using namespace std;
int main(){
    char arr[1000];
    cin.getline(arr, 1000);
    int w;
    cin>>w;
    int count=0;
    int m=0;
    while(arr[m]!='\0'){
        count++;
        m++;
    }
    // cout<<count<<endl;
    int y;
    if(count%w==0) y=count/w;
    else y=count/w +1;
    // cout<<y<<endl;
    char out[y][w];
    int x=0;
    while(x<count){
    for(int i=0; i<y; i++){
        
        for(int j=0; j<w; j++){
            out[i][j]=arr[x];
            x++;
            // cout<<out[i][j];

        }
    }
    }
    for(int i=0; i<y; i++){
        for(int j=0; j<w; j++){
            if(out[i][j]=='\0') break;
            cout<<out[i][j];
        }
        cout<<endl;
    }
}