#include "triangle.h"
#include <math.h>

Triangle::Triangle(
    Vertex * vertex1,
    Vertex * vertex2,
    Vertex * vertex3
) {
    this->vertexes[0] = vertex1;
    this->vertexes[1] = vertex2;
    this->vertexes[2] = vertex3;
    
    this->edges[0] = new Edge(this->vertexes[0], this->vertexes[1]);
    this->edges[1] = new Edge(this->vertexes[0], this->vertexes[1]);
    this->edges[2] = new Edge(this->vertexes[0], this->vertexes[1]);
}

float Triangle::calculatePerimeter()
{
    float perimeter;
    for (int i = 0; i < 3; i++) {
        perimeter += this->edges[i]->getLength();
    }
    return perimeter;
}

float Triangle::calculateSquare()
{
    float p = this->calculatePerimeter() / 2;
    float a = this->edges[0]->getLength();
    float b = this->edges[1]->getLength();
    float c = this->edges[2]->getLength();
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

Triangle::~Triangle()
{

}

