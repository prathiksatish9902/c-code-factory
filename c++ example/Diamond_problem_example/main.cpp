#include <iostream>
#include"hybrid.h"
using namespace std;
class a{
public:
    a(){}
   virtual void start(){
       std::cout<<"a";
    }
};
class b :public a{
public:
    b(){}
    void start(){
        std::cout<<"b";
    }
};

int main()
{
    // Hybrid c1(1000,4);
    // c1.start();
  //  b *z=new a();//compilation error
    a *z=new b();
    z->start();
    return 0;
}
