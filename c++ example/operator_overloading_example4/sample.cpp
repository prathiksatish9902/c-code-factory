#include "sample.h"

static int count = 0;
Sample::Sample() {

    std::cout<<"Sample constructor called" << ++count << this <<std::endl;
}

Sample::Sample(const Sample &o)
{
    std::cout<<"Sample COPY constructor called" << ++count << this <<std::endl;

}
