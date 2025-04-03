#include <iostream>
#include <vector>
#include <string>
#include "wire.h"
#include "switch.h"
#include "light.h"
using namespace std;

int main()
{
    int numLights;

    std::cout << "Enter the number of lights you want to create: ";
    std::cin >> numLights;

    if (numLights <= 0) {
        std::cout << "Invalid number of lights. Please enter a positive number." << endl;
        return 1;
    }

    Wire wireobject;

    std::vector<Light> lightobjects;

    for(int i = 0; i < numLights; i++) {
        string lightName;
        std::cout << "Enter a name for Light " << (i+1) << ": ";
        std::cin >> lightName;

        Light newLight(lightName);
        newLight.SetWireObject(wireobject);
        std::cout<<"hai.........................................................\n";
        lightobjects.push_back(newLight);
        std::cout<<"bye............................................................\n";

        std::cout<<"light object address = "<<&lightobjects[i]<<std::endl;
        // std::cout<<"light object address = "<<&lightobjects[i+1]<<std::endl;

    }

    Switch switchobject;
    switchobject.SetWireObject(wireobject);

    switchobject.SwitchON();



    return 0;
}
