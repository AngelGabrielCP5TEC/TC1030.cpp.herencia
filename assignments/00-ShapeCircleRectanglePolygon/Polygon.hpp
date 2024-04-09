#pragma once

#include "Shape.hpp"

class Polygon: public Shape{
    private:
        int sides;
    public:
        Polygon();
        Polygon(int valX, int valY, int valSides);
        int getSides();
};