#pragma once

#include "raylib.h"

namespace figures
{

enum class ShapeType
{
    Circle, Square, Rectangle, Triangle
};

class Shape
{
public:
    Shape(Vector2 newPosition, Color newColor);
    virtual ~Shape() = default;

    virtual void draw() const = 0;

protected:
    Vector2 position;
    Color color;
};

}