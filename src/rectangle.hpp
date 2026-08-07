#pragma once

#include "shape.hpp"

class Rectangle1 : public Shape
{
    Rectangle1(Vector2 position, Vector2 size, Color color);
    ~Rectangle1() override = default;

    void draw() const override;

private:
    Vector2 size;
};