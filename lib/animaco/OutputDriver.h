#ifndef OUTPUTDRIVER_H
#define OUTPUTDRIVER_H

#pragma once

#include "DrawingBuffer.h"

namespace animaco
{
    class OutputDriver
    {
    public:
        OutputDriver();
        ~OutputDriver();
        virtual void output(DrawingBuffer *buffer);
    private:

    };
}

#endif