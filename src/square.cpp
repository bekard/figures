#include "square.hpp"

Square::Square(Vector2 position, float size, Color color)
    :Shape(position, color)
    ,size(Vector2{size, size})
{
}

void Square::draw() const
{
    DrawRectangleV(position, size, color);
}