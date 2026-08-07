#include "rectangle.hpp"

namespace figures
{

Rectangle::Rectangle(Vector2 position, Vector2 newSize, Color color)
    :Shape(position, color)
    ,size(newSize)
{
}

void Rectangle::draw() const
{
    DrawRectangleV(position, size, color);
}

}