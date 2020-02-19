#include <iostream>
#include <math.h>
#include "vertex.h"

using namespace std;

class Edge
{
    private:
        Vertex vertex[2];
    public: 
        Edge(Vertex vertex1, Vertex vertex2) {
            vertex[0] = vertex1;
            vertex[1] = vertex2;
        }
        float getLength() {
            return sqrt( 
                pow(vertex[1].getX() - vertex[0].getX(), 2) + 
                pow(vertex[1].getY() - vertex[0].getY(), 2)
            );
        }
};