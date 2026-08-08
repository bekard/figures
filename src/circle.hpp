#pragma once

#include "shape.hpp"

namespace figures
{

class Circle : public Shape
{
public:
    Circle(Vector2 position, float radius, Color color);
    ~Circle() override = default;

    void draw() const override;

private:
    float radius;
};

}