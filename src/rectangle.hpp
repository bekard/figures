#pragma once

#include "shape.hpp"

namespace figures
{

class Rectangle : public Shape
{
public:
    Rectangle(Vector2 position, Vector2 size, Color color);
    virtual ~Rectangle() override = default;

    virtual void draw() const override;

protected:
    Vector2 size;
};

}