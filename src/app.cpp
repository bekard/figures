#include "raylib.h"
#include "raygui.hpp"

#include "app.hpp"

namespace figures
{

App::App(int screenWidth, int screenHeight)
{
    InitWindow(screenWidth, screenHeight, "figures");
    SetTargetFPS(60);
    GuiSetStyle(DEFAULT, TEXT_SIZE, 15);
}

App::~App()
{
    CloseWindow();
}

void App::run()
{
    while (!WindowShouldClose())
    {
        update();
        render();
    }
}

void App::update()
{
    if(std::optional<Color> newColor = colorPanel.update())
    {
        settings.color = *newColor;
        return;
    }

    // if(std::optional<Shape> newShape = shapePanel.update())
    // {
    //     settings.shape = *newShape;
    //     return;
    // }

    if(IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
    {
        Vector2 pos = GetMousePosition();
        canvas.add(pos);
    }
}

void App::render()
{
    BeginDrawing();
        ClearBackground(RAYWHITE);
        canvas.draw();
    EndDrawing();
}

}