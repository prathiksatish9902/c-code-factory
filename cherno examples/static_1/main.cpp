#include <iostream>
// extern int s_variable;
using namespace std;
struct entity{
  static int x , y;
   static void print(){
        cout<<x<<","<<y<<endl;
    }
};
int entity::x;
int entity::y;
int main()
{
    // cout << "Hello World!" <<s_variable<< endl;
    // entity e;
    // e.x = 2;
    // e.y = 3;
    entity::x = 2;
    entity::y = 3;
    // entity::print();
    // e.print();

    // entity e1 = {4 , 5};
    // entity e1;
    // e1.x = 4;
    // e1.y = 5;
    // e.print();

    // e1.print();

    entity::x = 4;
    entity::y = 5;
    entity::print();
    entity::print();

    return 0;
}
