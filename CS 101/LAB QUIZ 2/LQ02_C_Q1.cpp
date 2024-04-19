#include <iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int i=0;
    while(i<n){
        int j=0;
        int p=i;
        while(j<n && p>=0){
            
            cout<<arr[p][j]<<" ";
            
            p=p-1;
            j=j+1;
        }
        i++;
        cout<<endl;
    }
    int j=1;
    while(j<n){
        int i=n-1;
        int p=j;
        while(i>0 && p<n){
            
            cout<<arr[i][p]<<" ";
            
            p=p+1;
            i=i-1;
        }
        j++;
        cout<<endl;
    }
    // int a=n-1;
    // int s=n-1;
    // while(s>0){
    // int j=1;
    // int y=a;
    // while(j<n & y>=0){
    //     cout<<arr[y][j]<<" ";
    //     y=y-1;
    //     j=j+1;
    // }
    // s--;
    // cout<<endl;
    // }
    

    
}