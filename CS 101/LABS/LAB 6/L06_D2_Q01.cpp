#include <iostream>
using namespace std;
double calculator(double &a, char &c, double &b){
    if(c=='+'){
        return a+b;

    }
    else if(c=='-'){
        return a-b;
    }
    else if(c=='*'){
        return a*b;

    }
    else{
        return a/b;
    }
}
int main(){
    double a;
    char c;
    double b;
    cin>>a;
    while(true){
        cin>>c;
        if(c=='=' || c=='X'){
            break;
        }
        else{
            cin >> b;
            a=calculator(a, c, b);
        }

    }
    cout<<a<<endl;
}