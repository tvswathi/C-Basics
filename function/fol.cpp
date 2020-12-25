// Function ovetloading in cpp: 
// overloading: same function name but different parameters.. eg: sum(x),sum(x,y)
#include<iostream>
using namespace std;
int add(int x,int y){
    return x+y;
}
float add(float x,double y){
    return x+y;
}
double add(double x,double y){
    return x+y;
}
int main(){
    int x,y;
    cout<<"AddInt: "<<add(5,4)<<"\n";
    cout<<"Add: "<<add(5.5,4.3)<<"\n";
    cout<<"Adddob: "<<add(10.00,4.88)<<"\n";
    return 0;
}
