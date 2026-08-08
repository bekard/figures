#include "canvas.hpp"

namespace figures
{

void Canvas::draw() const
{
    for(const ShapePtr& figure : figures)
    {
        figure->draw();
    }
}

void Canvas::add(ShapePtr&& shape)
{
    figures.push_back(std::move(shape));
}

}