#include "Color.h"

using namespace animaco;

Color::Color()
{
    _r = 0;
    _g = 0;
    _b = 0;
}

Color::Color(uint8_t r, uint8_t g, uint8_t b)
{
    _r = r;
    _g = g;
    _b = b;
}

Color::~Color()
{

}

uint8_t Color::r()
{
    return _r;
}

uint8_t Color::g()
{
    return _g;
}

uint8_t Color::b()
{
    return _b;
}