#include "DrawingBuffer.h"

using namespace animaco;

DrawingBuffer::DrawingBuffer(uint8_t width, uint8_t height)
{
    _width = width;
    _height = height;
    _buffer = new Color[_width * _height];
}

DrawingBuffer::~DrawingBuffer()
{
    delete[] _buffer;
}

void DrawingBuffer::drawPoint(uint8_t x, uint8_t y, Color color)
{
    if (x < _width && y < _height)
    {
        _buffer[x * _height + y] = color;
    }
}

void DrawingBuffer::clear()
{
    for(uint8_t y = 0; y < _height; y++)
    {
        for(uint8_t x = 0; x < _width; x++)
        {
            _buffer[x * _height + y] = _black;
        }
    }
}

uint8_t DrawingBuffer::w()
{
    return _width;
}

uint8_t DrawingBuffer::h()
{
    return _height;
}

Color* DrawingBuffer::buffer()
{
    return _buffer;
}