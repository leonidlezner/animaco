#ifndef DRAWINGBUFFER_H
#define DRAWINGBUFFER_H

#pragma once

#include <stdint.h>

namespace animaco
{
    class DrawingBuffer
    {
    public:
        DrawingBuffer(uint8_t width, uint8_t height);
        ~DrawingBuffer();
        void drawPoint(uint8_t x, uint8_t y, uint32_t data);
    private:
        uint8_t _width;
        uint8_t _height;
    };
}

#endif