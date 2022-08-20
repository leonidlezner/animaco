#ifndef COLOR_H
#define COLOR_H

#pragma once

#include <stdint.h>

namespace animaco
{
    class Color
    {
    public:
        Color();
        Color(uint8_t r, uint8_t g, uint8_t b);
        ~Color();
        uint8_t r();
        uint8_t g();
        uint8_t b();
    private:
        uint8_t _r;
        uint8_t _g;
        uint8_t _b;
    };
}

#endif