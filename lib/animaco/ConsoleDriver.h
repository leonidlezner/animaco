#ifndef CONSOLEDRIVER_H
#define CONSOLEDRIVER_H

#pragma once

#include "OutputDriver.h"

namespace animaco
{
    class ConsoleDriver: public OutputDriver
    {
    public:
        ConsoleDriver();
        ~ConsoleDriver();
        void output(DrawingBuffer *buffer);
    private:

    };
}

#endif