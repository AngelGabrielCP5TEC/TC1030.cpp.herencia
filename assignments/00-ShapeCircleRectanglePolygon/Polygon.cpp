#include "Polygon.hpp"

Polygon::Polygon(){
    sides=0;
}

Polygon::Polygon(int valX, int valY, int valSides) : Shape{valX, valY} {
    sides=valSides;
}

int Polygon::getSides(){
    return sides;
}
