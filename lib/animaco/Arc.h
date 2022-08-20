#ifndef ARC_H
#define ARC_H

#pragma once

#include "Animation.h"

namespace animaco
{
    class Arc: public Animation
    {
    public:
        Arc();
        ~Arc();
        void draw(DrawingBuffer *buffer);
        void nextFrame();
    private:
        
    };
}

#endif