#include <iostream>
using namespace std;

void variableSwap(){
    int a = 100;
    int b = 200;

    cout<<"Before swap a is "<< a<<endl<<"Before swap b is "<<b<<endl;

    swap(a,b);

    cout<<"\nAfter swap a is "<<a<<endl<<"After swap b is "<<b<<endl;
}

