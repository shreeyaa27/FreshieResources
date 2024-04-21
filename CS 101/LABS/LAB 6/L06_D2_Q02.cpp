#include <iostream>
using namespace std;
void insertionSort(float arr[]){
    int i, j; 
    float key;
    for (i = 1; i < 4; i++) {
        key = arr[i];
        j = i - 1;
 
       
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int main(){
    float arr[4];
    for(int i=0; i<4; i++){
        cin>>arr[i];
    }
    insertionSort(arr);
    for(int i=3; i>=0; i--){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}
