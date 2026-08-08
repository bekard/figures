#pragma once

#include "rectangle.hpp"

namespace figures
{

class Square : public Rectangle
{
public:
    Square(Vector2 position, float sideLength, Color color);
    ~Square() override = default;
};

}