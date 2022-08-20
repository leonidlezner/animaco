#include "ConsoleDriver.h"
#include <stdio.h>

using namespace animaco;

ConsoleDriver::ConsoleDriver()
{

}

ConsoleDriver::~ConsoleDriver()
{

}

void ConsoleDriver::output(DrawingBuffer *buffer)
{
    for(uint8_t y = 0; y < buffer->h(); y++)
    {
        for(uint8_t x = 0; x < buffer->w(); x++)
        {
            Color pix = buffer->buffer()[x * buffer->h() + y];
            printf("\x1b[38;2;%d;%d;%dm● ", pix.r(), pix.g(), pix.b());
        }
        puts("");
    }
}
