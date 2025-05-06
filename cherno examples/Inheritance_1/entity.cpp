#include "entity.h"

Entity::Entity() {}

void Entity::move(float xa, float ya)
{
    x += xa;
    y += ya;
}
