#include "vector2.h"

Vector2::Vector2(float x, float y):m_x(x),m_y(y) {}

Vector2 Vector2::operator+(const Vector2 &other) const
{
    return Vector2(m_x + other.m_x , m_y + other.m_y);
}

Vector2 Vector2::operator*(const Vector2 &other) const
{
    return Vector2(m_x * other.m_x , m_y * other.m_y);
}

std::ostream &operator<<(std::ostream &stream, const Vector2 &other)
{
    stream<<other.m_x<<","<<other.m_y;
    return stream;
}
