#pragma once

#include "shape.hpp"

class Circle : public Shape
{
    Circle(Vector2 position, float radius, Color color);
    ~Circle() override = default;

    void draw() const override;

private:
    float radius;
};