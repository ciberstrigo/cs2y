#include <iostream>
using namespace std;

class Vertex
{
    private:
        float x, y;
    public: 
        Vertex(float x, float y) {
            this->x = x;
            this->y = y;
        }
        float getX() {
            return x;
        }
        float getY() {
            return y;
        }
};