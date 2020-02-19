#ifndef EDGE
#define EDGE
#include "vertex.h"
class Edge
{
    private:
        Vertex vertex[2];
    public: 
        Edge(Vertex vertex1, Vertex vertex2);
        float getLength();
};
#endif 