#include <iostream>
using namespace std;
int main(){
    char arr[1000];
    cin.getline(arr, 1000);
    int count=0;
    for(int i=0; arr[i]!='.'; i++){
        if(arr[i]!=' ' && arr[i+1]==' ') count++;

    }
    cout<<count+1<<endl;
}