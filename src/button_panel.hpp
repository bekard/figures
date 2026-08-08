#pragma once

#include <optional>
#include <string>
#include <vector>
#include <utility>

namespace figures
{

template <typename PanelType>
class ButtonPanel
{
public:
    ButtonPanel() = default;
    ButtonPanel(const std::vector<std::pair<std::string, PanelType>>& namesAndValues, Vector2 position);
    std::optional<PanelType> update() const;

private:
    struct Button
    {
        Button(const Rectangle& newBounds, const std::string& newName, PanelType newValue)
            :bounds(newBounds), name(newName), value(newValue) {}

        Rectangle bounds;
        std::string name;
        PanelType value;
    };

    std::vector<Button> buttons;
};

}

#include "button_panel_impl.hpp"