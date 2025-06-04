#include <iostream>
#include "base.h"
#include "derived1.h"
using namespace std;

int main()
{
    Derived1 d1;
    Base *bp = new Derived1;
    // Base *bp;
    // Base bp;
d1.Print();
    bp->Print();
    // Derived1 *dptr = dynamic_cast<Derived1*>(bp);
    Derived1 *dptr = static_cast<Derived1*>(bp);
dptr->Print1();
    if(dptr == nullptr){
        std::cout<<"casting faild"<<std::endl;
    }
    else{
        std::cout<<"casting successfull"<<std::endl;
    }
    return 0;
}
