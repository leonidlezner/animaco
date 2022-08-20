#ifndef PIXEL_H
#define PIXEL_H

#pragma once

#include "Animation.h"
#include "DrawingBuffer.h"

namespace animaco
{
    class Pixel: public Animation
    {
    public:
        Pixel();
        ~Pixel();
        void draw(DrawingBuffer *buffer);
        void nextFrame();
    private:

    };
}


#endif