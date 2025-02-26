#include <iostream>
#include"electronicitem.h"
#include"mobile.h"
using namespace std;

int main()
{
    ElectronicItem *eci1;
    Mobile mob1("samsung");
    mob1.setPrice(25000);
    mob1.display();
    eci1 = &mob1;
    eci1->display();

    return 0;
}
