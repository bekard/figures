#include "shape_factory.hpp"
#include "circle.hpp"
#include "rectangle.hpp"
#include "square.hpp"
#include "triangle.hpp"

namespace figures
{

std::unique_ptr<Shape> ShapeFactory::createShape(ShapeType type, Vector2 position, Color color)
{
    switch(type)
    {
        case ShapeType::Circle:
            return std::make_unique<Circle>(position, 20, color);

        case ShapeType::Rectangle:
            return std::make_unique<Rectangle>(position, Vector2{20, 40}, color);

        case ShapeType::Square:
            return std::make_unique<Square>(position, 20, color);

        case ShapeType::Triangle:
            return std::make_unique<Triangle>(position, 20, color);

        default:
            return nullptr;
    }
}

}