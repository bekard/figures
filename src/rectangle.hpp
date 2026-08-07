#pragma once

#include "shape.hpp"

namespace figures
{

class Rectangle : public Shape
{
    Rectangle(Vector2 position, Vector2 size, Color color);
    ~Rectangle() override = default;

    void draw() const override;

private:
    Vector2 size;
};

}