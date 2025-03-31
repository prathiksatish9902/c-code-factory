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

    Wire *wireobject = new Wire;

    std::vector<Light*> lightobjects;

    for(int i = 0; i < numLights; i++) {
        string lightName;
        std::cout << "Enter a name for Light " << (i+1) << ": ";
        std::cin >> lightName;

        Light* newLight = new Light(lightName);
        // Light newLight(lightName);
        lightobjects.push_back(newLight);

        newLight->SetWireObject(wireobject);
    }

    Switch *switchobject = new Switch;
    switchobject->SetWireObject(wireobject);

    switchobject->SwitchON();

    delete wireobject;
    for(auto* light : lightobjects) {
        delete light;
    }

    delete switchobject;

    return 0;
}
