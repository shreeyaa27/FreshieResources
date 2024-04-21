#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int *arr=new int (N);
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    int i=1;
    while(arr[i]>arr[i-1]&& arr[i]<arr[i+1]){
        i++;
    }
    cout<<i;
}