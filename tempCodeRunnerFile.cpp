#include<iostream>
using namespace std;

int main(){
    int number = 12;
    int x = 0;
    int y = 0;
    while(number != 0){
    cout << "Enter an integer: ";
    cin >> number;
    if(number%2==0){
        x += 1;
    }else{
        y += 1;
    }
    }
    cout << "#Even numbers = " << x-1 << endl;
    cout << "#Odd numbers = " << y << endl;
    return 0;
}