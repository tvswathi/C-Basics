/******************************************************************************

                            Create a class car with multiple objects 

*******************************************************************************/

#include <iostream>
using namespace std;

class car{
  public:
    string model;
    int year;
    string color;
};

int main() {
    
    car myobj1; //create obj1
    myobj1.year=2010;
    myobj1.color="Red";
    myobj1.model="abc";
    
    car myobj2;//create obj2
    myobj2.year=2015;
    myobj2.color="green";
    myobj2.model="dfg";
    
    car myobj3;//create obj3
    myobj3.year=2013;
    myobj3.color="yellow";
    myobj3.model="hbkj";
    
    cout<<myobj1.model<<"\n"<<myobj1.year<<"\n"<<myobj1.color;
    return 0;
}
