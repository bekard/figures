#include "app.hpp"

int main()
{
    constexpr int screenWidth = 800;
    constexpr int screenHeight = 600;
    
    figures::App app(screenWidth, screenHeight);
    app.run();
    return 0;
}