// calling a function with default parmeters

#include <iostream>
using namespace std;
void fun(string state="Kerala"){
    cout<<state<<"\t";
}
int main(){
    fun("Goa");
    fun("TN");
    fun();
    
    return 0;
}
