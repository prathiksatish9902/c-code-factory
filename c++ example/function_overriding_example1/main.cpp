#include <iostream>
#include"electronicitem.h"
#include"mobile.h"
using namespace std;

int main()
{
    ElectronicItem *eci1;
    Mobile mob1("samsung");
    mob1.setPrice(25000);
    eci1 = &mob1;
    eci1->display();
    mob1.ElectronicItem ::display();

    return 0;
}
