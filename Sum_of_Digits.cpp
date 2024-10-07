#include<iostream>
using namespace std;

int Sumofdigit(int n){
    if(n==0){
        return 0;
    }
    else{
        return (n%10+ Sumofdigit(n/10));
    }
}

int main(){
    int n;
    cin>>n;
    cout<<Sumofdigit(n) <<endl;
}