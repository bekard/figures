#pragma once

#include <vector>
#include "raylib.h"

namespace figures
{

class Canvas
{
public:
    Canvas() = default;

    void draw();
    void add(Vector2 pos);

private:
    std::vector<Vector2> coordinates;
};

}