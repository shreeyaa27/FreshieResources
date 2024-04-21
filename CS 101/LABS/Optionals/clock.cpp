// #include <bits/stdc++.h>
#include <iostream>
#define int long long
#define vi vector<int>
#define vb vector<bool>
#define get(a)        \
    for (auto &i : a) \
    cin >> i
#define put(a)        \
    for (auto &i : a) \
    cout << i << ' '
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
        string str;
        cin>>str;
        if(str[0]=='0' && str[1]!='0'){
            cout<<str[0]<<str[1]<<str[2]<<str[3]<<str[4]<<" "<<"AM"<<endl;
        }
        else if(str[0]=='1' && str[1]<'2'){
            cout<<str[0]<<str[1]<<str[2]<<str[3]<<str[4]<<" "<<"AM"<<endl;

        }
        else if(str[0]=='1' && str[1]=='2'){
            cout<<str[0]<<str[1]<<str[2]<<str[3]<<str[4]<<" "<<"PM"<<endl;
        }
        else if(str[0]=='1' && str[1]>'2'){
            str[0]='0';
            int a=str[1];
            str[1]=a-2;
            cout<<str[0]<<str[1]<<str[2]<<str[3]<<str[4]<<" "<<"PM"<<endl;
        }
        else if(str[0]=='2'){
            if(str[1]=='0'){
                str[0]='0';
                str[1]='8';

            }
            if(str[1]=='1'){
                str[0]='0';
                str[1]='9';
                
            }
            if(str[1]=='2'){
                str[0]='1';
                str[1]='0';
                
            }
            if(str[1]=='3'){
                str[0]='1';
                str[1]='1';
                
            }
            if(str[1]=='4'){
                str[0]='1';
                str[1]='2';
                
            }
            cout<<str[0]<<str[1]<<str[2]<<str[3]<<str[4]<<" "<<"PM"<<endl;

        }
        else if(str[0]=='0' && str[1]=='0'){
            str[0]='1';
            str[1]='2';
            cout<<str[0]<<str[1]<<str[2]<<str[3]<<str[4]<<" "<<"AM"<<endl;
        }
        
    }
        
}