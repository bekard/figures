#include "canvas.hpp"

void Canvas::draw()
{
    for(const Vector2& pos : coordinates)
    {
        DrawRectangleV(pos, {50, 50}, LIME);
    }
}

void Canvas::add(Vector2 pos)
{
    coordinates.push_back(pos);
}
