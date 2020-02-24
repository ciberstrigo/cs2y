#ifndef TRIANGLE
#define TRIANGLE
#include "vertex.h"
#include "edge.h"
class Triangle
{
private:
    Vertex * vertexes[3];
    Edge * edges[3];
public:
    Triangle(
        Vertex * vertex1,
        Vertex * vertex2,
        Vertex * vertex3
    );
    float calculatePerimeter();
    float calculateSquare();
    ~Triangle();
};
#endif