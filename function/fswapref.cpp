// pgm to swap number using a third variable using call by reference
#include<iostream>
using namespace std;
void swap(int &x, int &y){
    int z;
    z=x;
    x=y;
    y=z;
}

int main(){
    int x=10,y=20;
    cout<<"Before swap: "<< x <<"\t" <<y;
    swap(x,y);
    cout<<"After swap: "<< x <<"\t" <<y;
    return 0;
}
