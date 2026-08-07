#pragma once

#include <optional>
#include <string>
#include <vector>

#include "raylib.h"

class ColorPanel
{
public:
    ColorPanel();
    std::optional<Color> update();

private:
    struct Button
    {
        Button(const Rectangle& newBounds, const std::string& newName, Color newColor)
            :bounds(newBounds), name(newName), color(newColor) {}

        Rectangle bounds;
        std::string name;
        Color color;
    };

    std::vector<Button> buttons;
};