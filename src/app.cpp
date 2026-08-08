#include "raylib.h"
#include "raygui.hpp"

#include "app.hpp"
#include "constants.hpp"
#include "shape_factory.hpp"

namespace figures
{

App::App(int screenWidth, int screenHeight)
    :colorPanel({0, 0})
    ,shapePanel({BUTTON_WIDTH, 0})
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

    if(std::optional<ShapeType> newShape = shapePanel.update())
    {
        settings.shape = *newShape;
        return;
    }

    if(IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
    {
        Vector2 position = GetMousePosition();
        ShapePtr shape = ShapeFactory::create(settings.shape, position, settings.color);
        canvas.add(std::move(shape));
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