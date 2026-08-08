#include "raylib.h"

#include "shape_panel.hpp"

namespace figures
{

ShapePanel::ShapePanel(Vector2 position)
{
    static const std::vector<std::pair<std::string, ShapeType>> namesAndShapes
    {
        {"circle", ShapeType::Circle},
        {"rectangle", ShapeType::Rectangle},
        {"square", ShapeType::Square},
        {"triangle", ShapeType::Triangle},
    };

    buttons = ButtonPanel<ShapeType>(namesAndShapes, position);
}

std::optional<ShapeType> ShapePanel::update() const
{
    return buttons.update();
}

}