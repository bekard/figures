#pragma once

#include <optional>
#include <string>
#include <vector>

#include "raylib.h"

#include "button_panel.hpp"

namespace figures
{

class ColorPanel
{
public:
    ColorPanel(Vector2 position);
    std::optional<Color> update() const;

private:
    ButtonPanel<Color> buttons;
};

}