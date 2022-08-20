#include "Animation.h"
#include <stdio.h>
#include <cstddef>

using namespace animaco;

Animation::Animation()
{
    _x = 0;
    _y = 0;
    _w = 0;
    _h = 0;
    _parent = nullptr;
    _overflow = true;
    _enabled = true;
    _visible = true;
}

Animation::~Animation()
{

}

void Animation::nextFrame()
{
    puts("Animation::nextFrame");
}

void Animation::setPosition(uint8_t x, uint8_t y)
{
    if (_overflow && _parent)
    {
        _x = x % _parent->w();
        _y = y % _parent->h();
    }
    else
    {
        _x = x;
        _y = y;
    }
}

void Animation::setSize(uint8_t w, uint8_t h)
{
    _w = w;
    _h = h;
}

void Animation::move(int8_t dx, int8_t dy)
{
    setPosition(x() + dx, y() + dy);
}

void Animation::draw(DrawingBuffer *buffer)
{

}

uint8_t Animation::x()
{
    return _x;
}

uint8_t Animation::y()
{
    return _y;
}

uint8_t Animation::w()
{
    return _w;
}

uint8_t Animation::h()
{
    return _h;
}

void Animation::setParent(Animation *animation)
{
    _parent = animation;
}

Animation * Animation::parent()
{
    return _parent;
}

void Animation::enable(bool state)
{
    _enabled = state;
}

bool Animation::is_enabled()
{
    return _enabled;
}

void Animation::show(bool state)
{
    _visible = state;
}

bool Animation::is_visible()
{
    return _enabled && _visible;
}