#include "raylib.h"
#include "raygui.hpp"

#include "color_panel.hpp"

#include <array>
#include <string>

ColorPanel::ColorPanel()
{
    constexpr int WIDTH = 70;
    constexpr int HEIGHT = 30;
    constexpr size_t SIZE = 5;

    constexpr std::array<Color, SIZE> colors{ BLUE, ORANGE, RED, GREEN, YELLOW };
    constexpr std::array<std::string_view, SIZE> names{ "blue", "orange", "red", "green", "yellow" };

    const float x = 0;
    float y = 0;

    for(size_t i = 0; i < SIZE; i++)
    {
        Rectangle bounds{x, y, WIDTH, HEIGHT};
        buttons.emplace_back(bounds, std::string(names[i]), colors[i]);

        y += HEIGHT;
    }
}

std::optional<Color> ColorPanel::update()
{
    for(const Button& button : buttons)
    {
        if(GuiButton(button.bounds, button.name.c_str()))
        {
            return button.color;
        }
    }

    return std::nullopt;
}