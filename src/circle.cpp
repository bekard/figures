#include "circle.hpp"

Circle::Circle(Vector2 position, float newRadius, Color color)
    :Shape(position, color)
    ,radius(newRadius)
{
}

void Circle::draw() const
{
    DrawCircleV(position, radius, color);
}