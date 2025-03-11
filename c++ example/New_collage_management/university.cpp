#include "university.h"

University::University() {
    std::cout<<"university constructor called"<<std::endl;
}

University::~University()
{
    std::cout<<"university destructor called"<<std::endl;

}

void University::addCollage()
{
    std::cout<<"add collage function called"<<std::endl;

    collages = new Collage;

    collages->SetcollageName("Jyothy");
    collages->SetcollageId(1);
    collages->SetcollageAddress("Bengaluru");

    collageList.push_back(collages);
}
