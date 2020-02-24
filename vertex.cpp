#include "vertex.h"

Vertex::Vertex(float x, float y)
{
    this->x = x;
    this->y = y;
}

float Vertex::getX()
{
    return x;
}

float Vertex::getY()
{
    return y;
}
