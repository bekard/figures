#pragma once

#include <optional>
#include <vector>

#include "button_panel.hpp"
#include "shape.hpp"

namespace figures
{

class ShapePanel
{
public:
    ShapePanel(Vector2 position);
    std::optional<ShapeType> update() const;

private:
    ButtonPanel<ShapeType> buttons;
};

}