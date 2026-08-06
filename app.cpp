#include "raylib.h"
#include <iostream>

#include "app.hpp"

App::App(int screenWidth, int screenHeight)
{
    InitWindow(screenWidth, screenHeight, "figures");
    SetTargetFPS(60);
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
    if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
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
