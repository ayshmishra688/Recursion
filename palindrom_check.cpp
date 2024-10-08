#include<iostream>
using namespace std;

bool ispelindrom(int i, string &s){
    if(i>s.size()/2){
        return true;
    }
    else if(s[i] != s[s.size()-i-1]){
        return false;

    }
    return ispelindrom(i+1, s);


}


int main(){
    string s;
    cin>>s;
    cout<< ispelindrom(0, s);
}