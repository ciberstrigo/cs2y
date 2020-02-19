#include <iostream>
#include "vertex.h"
#include "edge.h"
#include "triangle.h"
#include <math.h>

using namespace std;

class Triangle
{
    private:
        Vertex vertexes[3];
        Edge edges[3];
    public:
        Triangle(
            float x1, 
            float y1, 
            float x2, 
            float y2, 
            float x3, 
            float y3
        ) {
            this->vertexes[0] = new Vertex(x1, y1);
            this->vertexes[1] = new Vertex(x1, y1);
            this->vertexes[2] = new Vertex(x1, y1);
            this->edges[0] = new Edge(vertexes[0], vertexes[1]);
            this->edges[1] = new Edge(vertexes[1], vertexes[2]);
            this->edges[2] = new Edge(vertexes[2], vertexes[0]);
        }
        float calculatePerimeter() {
            float perimeter;
            for (int i = 0; i < 3; i++) {
                perimeter += this->edges[i].getLength();
            }
            return perimeter;
        }
        float calculateSquare() {
            float p = this->calculatePerimeter() / 2;
            float a = this->edges[0].getLength();
            float b = this->edges[1].getLength();
            float c = this->edges[2].getLength();
            return sqrt(p * (p - a) * (p - b) * (p - c));
        }
}