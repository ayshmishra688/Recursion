#include<iostream>
using namespace std;

int pow_calculation(int base, int power){
    if(power==0){
        return 1;
    }
    else{
        return (base* pow_calculation(base, power-1));

    }

}


int main(){
    int base, power;
    cin>> base;
    cin>> power;
    cout<< pow_calculation(base, power) <<endl;
    return 0;

}