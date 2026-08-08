#include "raylib.h"
#include "raygui.hpp"

#include "color_panel.hpp"

#include <array>
#include <string>

namespace figures
{

ColorPanel::ColorPanel(Vector2 position)
{
    static const std::vector<std::pair<std::string, Color>> namesAndColors
    {
        {"blue", BLUE},
        {"orange", ORANGE},
        {"red", RED},
        {"green", GREEN},
        {"yellow", YELLOW},
    };

    buttons = ButtonPanel<Color>(namesAndColors, position);
}

std::optional<Color> ColorPanel::update() const
{
    return buttons.update();
}

}