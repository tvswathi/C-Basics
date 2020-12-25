// call a function with multiple parameters in cpp
#include<iostream>
using namespace std;

void fun(string name, int age){
    cout<<"Name:"<<name<<"\n";
    cout<<"Age:"<<age<<"\n";
}
int main(){
    fun("Swathi",10);
    fun("Ram",5);
    
    return 0;
}
