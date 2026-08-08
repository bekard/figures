#pragma once

#include <vector>

#include "raylib.h"

#include "shape.hpp"

namespace figures
{

class Canvas
{
public:
    Canvas() = default;

    void draw() const;
    void add(ShapePtr&& shape);

private:
    std::vector<ShapePtr> figures;
};

}