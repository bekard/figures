#pragma once

#include "raylib.h"

#include "canvas.hpp"
#include "color_panel.hpp"
#include "shape_panel.hpp"

namespace figures
{

class App
{
public:
    App(int screenWidth, int screenHeight);
    ~App();

    void run();

private:
    void update();
    void render();  

    Canvas canvas;
    ColorPanel colorPanel;
    ShapePanel shapePanel;

    struct Settings
    {
        Color color = BLACK;
        ShapeType shape = ShapeType::Square;
    };

    Settings settings;
};

}