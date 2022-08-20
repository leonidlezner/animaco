#include <stdio.h>
#include "Pixel.h"

using namespace animaco;
Pixel::Pixel()
{

}

Pixel::~Pixel()
{
    
}

void Pixel::draw(DrawingBuffer *buffer)
{
    buffer->drawPoint(x(), y(), Color(0, 0, 255));
}

void Pixel::nextFrame()
{
    move(1, 0);
}