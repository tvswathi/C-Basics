// pgm to create a class and object of the class

#include <iostream>
using namespace std;

class myclass{
    public:  
        int num;
        string mstring;
    };
int main(){
    myclass myobj;
    myobj.num=15;
    myobj.mstring="hello";
    
    cout<<myobj.num<<"\n";
    cout<<myobj.mstring;
    
    return 0;
}
