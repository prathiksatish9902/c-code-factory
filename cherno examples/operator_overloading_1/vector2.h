#ifndef VECTOR2_H
#define VECTOR2_H
#include <iostream>
#include <ostream>
class Vector2
{
private:
    float m_x , m_y;
public:
    Vector2(float x , float y);

    Vector2 operator+(const Vector2 &other)const;
    Vector2 operator*(const Vector2 &other)const;
    friend std::ostream& operator<<(std::ostream& stream , const Vector2& other);
};

#endif // VECTOR2_H
