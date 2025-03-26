#include <iostream>
#include "wire.h"
#include "switch.h"
#include "light.h"
using namespace std;

int main()
{
    Wire *wireobject = new Wire;

     int light = 3;
    // std::cout<<"enter the number of lights"<<std::endl;
    //  std::cin>>light;


    Light* lightobjects[light] = {
        new Light("Living Room Light"),
        new Light("Kitchen Light"),
        new Light("Bedroom Light")
    };



    for(int i = 0; i < light; i++) {
        lightobjects[i]->SetWireObject(wireobject);
    }

    Switch *switchobject = new Switch;
    switchobject->SetWireObject(wireobject);
    switchobject->SwitchON();

    delete wireobject;
    for(int i = 0; i < light; i++) {
        delete lightobjects[i];
    }
    delete switchobject;

    return 0;
}
