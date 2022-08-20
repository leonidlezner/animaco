#include "Arc.h"
#include <stdio.h>

using namespace animaco;

Arc::Arc()
{

}

Arc::~Arc()
{

}

void Arc::draw(DrawingBuffer *buffer)
{
    int _x = 0;

    for (int dx = 0; dx < w(); dx++)
    {
        if (_overflow)
        {
            _x = (x() + dx) % parent()->w();
        }
        else
        {
            _x = x() + dx;
        }

        buffer->drawPoint(_x, 0, Color(255, 0, 0));
    }
}

void Arc::nextFrame()
{
    move(1, 0);
}