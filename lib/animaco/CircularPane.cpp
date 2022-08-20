#include "CircularPane.h"
#include <stdio.h>

using namespace animaco;

CircularPane::CircularPane(uint8_t width)
{
    _buffer = new DrawingBuffer(width, 1);
    setSize(width, 1);
}

CircularPane::~CircularPane()
{
    delete _buffer;
}

void CircularPane::attach(Animation* animation)
{
    animation->setParent(this);
    _attached.push_back(animation);
}

void CircularPane::draw(DrawingBuffer *buffer)
{
    std::list<Animation*>::iterator it;

    for (it = _attached.begin(); it != _attached.end(); it++)
    {
        if ((*it)->is_visible())
        {
            (*it)->draw(_buffer);
        }
    }
}

void CircularPane::output(OutputDriver *driver)
{
    driver->output(_buffer);
    _buffer->clear();
}

void CircularPane::nextFrame()
{
    std::list<Animation*>::iterator it;

    for (it = _attached.begin(); it != _attached.end(); it++)
    {
        if ((*it)->is_enabled())
        {
            (*it)->nextFrame();
        }
    }
}