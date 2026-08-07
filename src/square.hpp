#pragma once

#include "shape.hpp"

class Square : public Shape
{
    Square(Vector2 position, float size, Color color);
    ~Square() override = default;

    void draw() const override;

private:
    Vector2 size;
};