#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define vb vector<bool>
#define get(a)        \
    for (auto &i : a) \
    cin >> i
#define put(a)        \
    for (auto &i : a) \
    cout << i << " "
#define endl "\n"
#define sp << " " <<
#define pb push_back
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
const int N = 1e6 + 2;
const int mod = 1e9 + 7;
const int INF = LLONG_MAX;
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int x=1;x<=2*n;x++){
            if(x%4==1 || x%4==2){
                for(int m=1;m<=2*n;m++){
                    if(m%4==1 || m%4==2){
                        cout<<"#";
                    }
                    else{
                        cout<<".";
                    }
                }
            }
            else{
                for(int m=1;m<=2*n;m++){
                    if(m%4==1 || m%4==2){
                        cout<<".";
                    }
                    else{
                        cout<<"#";
                    }
                }
            }
            cout<<endl;
        }
    }
}
        
