#ifndef DRAWINGBUFFER_H
#define DRAWINGBUFFER_H

#pragma once

#include <stdint.h>
#include <Color.h>

namespace animaco
{
    class DrawingBuffer
    {
    public:
        DrawingBuffer(uint8_t width, uint8_t height);
        ~DrawingBuffer();
        void drawPoint(uint8_t x, uint8_t y, Color color);
        void clear();
        uint8_t w();
        uint8_t h();
        Color* buffer();
    private:
        Color* _buffer;
        uint8_t _width;
        uint8_t _height;
        const Color _black;
    };
}

#endif