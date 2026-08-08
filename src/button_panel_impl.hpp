#pragma once

#include <string>

#include "raylib.h"
#include "raygui.hpp"

#include "constants.hpp"

namespace figures
{

template <typename PanelType>
ButtonPanel<PanelType>::ButtonPanel(const std::vector<std::pair<std::string, PanelType>>& namesAndValues, Vector2 position)
{
    const float& x = position.x;
    float& y = position.y;

    for(const auto& [name, value] : namesAndValues)
    {
        Rectangle bounds{x, y, BUTTON_WIDTH, BUTTON_HEIGHT};
        buttons.emplace_back(bounds, name, value);

        y += BUTTON_HEIGHT;
    }
}

template <typename PanelType>
std::optional<PanelType> ButtonPanel<PanelType>::update() const
{
    for(const Button& button : buttons)
    {
        if(GuiButton(button.bounds, button.name.c_str()))
        {
            return button.value;
        }
    }

    return std::nullopt;
}

}