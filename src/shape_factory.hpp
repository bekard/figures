#pragma once

#include <memory>

#include "shape.hpp"

namespace figures
{

class ShapeFactory
{
    ShapeFactory() = delete;

    static std::unique_ptr<Shape> createShape(ShapeType type, Vector2 position, Color color);
};

}