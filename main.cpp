#include "main.h"

int Main::main() 
{
    using namespace std;

    Vertex * vertex0 = new Vertex(1, 2);
    Vertex * vertex1 = new Vertex(-1, -2);
    Vertex * vertex2 = new Vertex(1, -2);

    Triangle * triangle = new Triangle(vertex0, vertex1, vertex2);

    printf("Triangle perimeter: %f", triangle->calculatePerimeter());
    printf("Triangle square: %f", triangle->calculateSquare());


    return 0;
}
