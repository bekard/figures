#include "square.hpp"

namespace figures
{

Square::Square(Vector2 position, float sideLength, Color color)
    :Rectangle(position, Vector2{sideLength, sideLength}, color)
{
}

}