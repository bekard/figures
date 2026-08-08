#pragma once

#include "shape.hpp"

namespace figures
{

class Triangle : public Shape
{
public:
    Triangle(Vector2 position, float polyRadius, Color color);
    ~Triangle() override = default;

    void draw() const override;

private:
    float polyRadius;
};

}