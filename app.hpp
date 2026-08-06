#pragma once

#include "canvas.hpp"

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
    // Menu menu;
};