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
        lightobjects.push_back(newLight);

        newLight->SetWireObject(wireobject);

    }

    Switch *switchobject = new Switch;
    switchobject->SetWireObject(wireobject);

    std::cout << "\n=== Demonstrating Copy Constructors ===\n" << std::endl;

    std::vector<Light*> copiedLights;
    for(const auto* light : lightobjects) {
        std::cout<<"hai.........................................................\n";
       Light* copiedLight = new Light(*light);
        // Light* copiedLight = new Light();

        std::cout<<"bye............................................................\n";
        std::cout << "Copied light name: " << copiedLight->GetName() << std::endl;


        copiedLights.push_back(copiedLight);


    }

    Wire* copiedWire = new Wire(*wireobject);

    Switch* copiedSwitch = new Switch(*switchobject);
    copiedSwitch->SetWireObject(copiedWire);

    std::cout << "\n=== Testing Original Objects ===\n" << std::endl;
    switchobject->SwitchON();

    std::cout << "\n=== Testing Copied Objects ===\n" << std::endl;
    for(auto* copiedLight : copiedLights) {
        copiedLight->SetWireObject(copiedWire);

        std::cout<<"address"<<copiedLight<<std::endl;


    }
    copiedSwitch->SwitchON();

    delete wireobject;
    for(auto* light : lightobjects) {
        delete light;
    }
    delete switchobject;

    delete copiedWire;
    delete copiedSwitch;
    for(auto* copiedLight : copiedLights) {
        delete copiedLight;

    }
    return 0;
}
