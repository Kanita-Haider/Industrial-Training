#include<bits/stdc++.h>
using namespace std;

int main(){

    int f1=0,f2=1,current;

    cout<<f1<<"\n"<<f2<<endl;
    
    for(int i=3;i<=10;i++){
        current = f1+f2;
        cout<<current<<endl;
        f1=f2;
        f2=current;
    }
}