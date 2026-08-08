#include <cmath>

#include "triangle.hpp"

namespace figures
{

Triangle::Triangle(Vector2 position, float newPolyRadius, Color color)
    :Shape(position, color)
    ,polyRadius(newPolyRadius)
{
}

void Triangle::draw() const
{
    float radius = polyRadius/ std::sqrt(3.0f);
    DrawPoly(position, 3, radius, -90.0f, color);
}

}