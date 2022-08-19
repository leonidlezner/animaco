#ifndef CIRCULARPANE_H
#define CIRCULARPANE_H

#pragma once

#include "Animation.h"
#include "DrawingBuffer.h"
#include <list>

namespace animaco
{
    class CircularPane: public Animation
    {
    public:
        CircularPane(uint8_t width);
        ~CircularPane();
        void attach(Animation &animation);
        void draw();
        void nextFrame();
    private:
        std::list<Animation> _attached;
        DrawingBuffer *_buffer;
    };
}

#endif