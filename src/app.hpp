#pragma once

#include "raylib.h"

#include "canvas.hpp"
#include "color_panel.hpp"

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

    struct Settings
    {
        Color color = BLACK;
        // Shape shape;
    };

    Settings settings;
};