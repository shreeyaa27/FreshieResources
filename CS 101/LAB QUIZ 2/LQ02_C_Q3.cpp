#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mass[n];
    for(int i=0; i<n; i++){
        cin>>mass[i];

    }
    int volume[n];
    for(int i=0; i<n; i++){
        cin>>volume[i];
        
    }
    int capacity;
    cin>>capacity;
    int maxmass=0;
    int index_i=-1;
    int index_j=-1;
    int index_k=-1;
    int index_l=-1;
    int index_m=-1;
    
    for(int i=0; i<n; i++){
        if(volume[i]<=capacity && mass[i]>maxmass){
            maxmass=mass[i];
            index_i=i;

        }
    }
    {
        for(int i=0;i<n-1; i++){
            for(int j=i+1; j<n; j++){
                int vol=volume[i]+volume[j];
                int mas=mass[i]+mass[j];
                if(vol<=capacity && mas>maxmass){
                    maxmass=mas;
                    index_i=i;
                    index_j=j;
                }
            }
        }
    }
    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                int vol=volume[i]+volume[j]+volume[k];
                int mas=mass[i]+mass[j]+mass[k];
                if(vol<=capacity && mas>maxmass){
                    maxmass=mas;
                    index_i=i;
                    index_j=j;
                    index_k=k;
                }


            }
        }
    }
    for(int i=0; i<n-3; i++){
        for(int j=i+1; j<n-2; j++){
            for(int k=j+1; k<n-1; k++){
                for(int l=k+1; l<n; l++){
                    int vol=volume[i]+volume[j]+volume[k]+volume[l];
                    int mas=mass[i]+mass[j]+mass[k]+mass[l];
                    if(vol<=capacity && mas>maxmass){
                        maxmass=mas;
                        index_i=i;
                        index_j=j;
                        index_k=k;
                        index_l=l;
                    }
                }


            }
        }
    }
    for(int i=0; i<n-4; i++){
        for(int j=i+1; j<n-3; j++){
            for(int k=j+1; k<n-2; k++){
                for(int l=k+1; l<n-1; l++){
                    for(int m=l+1; m<n; m++){
                        int vol=volume[i]+volume[j]+volume[k]+volume[l]+volume[m];
                        int mas=mass[i]+mass[j]+mass[k]+mass[l]+mass[m];
                        if(vol<=capacity && mas>maxmass){
                            maxmass=mas;
                            index_i=i;
                            index_j=j;
                            index_k=k;
                            index_l=l;
                            index_m=m;
                        }
                    }
                }


            }
        }
    }
    if(index_m!=-1){
        cout<<index_i+1<<" "<<index_j+1<<" "<<index_k+1<<" "<<index_l+1<<" "<<index_m+1<<endl;
    }
    else if(index_l!=-1){
        cout<<index_i+1<<" "<<index_j+1<<" "<<index_k+1<<" "<<index_l+1<<endl;
    }
    else if(index_k!=-1){
        cout<<index_i+1<<" "<<index_j+1<<" "<<index_k+1<<" "<<endl;

    }
    else if(index_j!=-1){
        cout<<index_i+1<<" "<<index_j+1<<" "<<endl;
    }
    else{
        cout<<index_i+1<<endl;
    }
}