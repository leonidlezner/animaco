#include "CircularPane.h"
#include <stdio.h>

using namespace animaco;

CircularPane::CircularPane(uint8_t width)
{
    _buffer = new DrawingBuffer(width, 1);
}

CircularPane::~CircularPane()
{
    delete _buffer;
}

void CircularPane::attach(Animation &animation)
{
    _attached.push_back(animation);
}

void CircularPane::draw()
{

}

void CircularPane::nextFrame()
{
    std::list<Animation>::iterator it;

    for (it = _attached.begin(); it != _attached.end(); it++)
    {
        it->nextFrame();
    }
}