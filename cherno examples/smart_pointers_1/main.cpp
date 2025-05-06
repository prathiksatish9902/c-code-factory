#include <iostream>
#include "entity.h"
// #include <memory>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    std::unique_ptr<Entity> entity(new Entity());
    std::unique_ptr<Entity> entity1 = std::make_unique <Entity>();

    std::shared_ptr<Entity> entity2(new Entity());
    std::shared_ptr<Entity> entity3 = std::make_shared <Entity>();

    std::weak_ptr<Entity> entity4;
    entity4 = entity3;
    return 0;
}
