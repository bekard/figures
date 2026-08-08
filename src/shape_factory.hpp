#pragma once

#include "shape.hpp"

namespace figures
{

class ShapeFactory
{
public:
    ShapeFactory() = delete;

    static ShapePtr create(ShapeType type, Vector2 position, Color color);
};

}