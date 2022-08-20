#ifndef ANIMATION_H
#define ANIMATION_H

#pragma once

#include <stdint.h>
#include "DrawingBuffer.h"

namespace animaco
{
    class Animation
    {
    public:
        Animation();
        ~Animation();
        virtual void nextFrame();
        virtual void draw(DrawingBuffer *buffer);
        void setSize(uint8_t w, uint8_t h);
        void setPosition(uint8_t x, uint8_t y);
        void move(int8_t dx, int8_t dy);
        uint8_t x();
        uint8_t y();
        uint8_t w();
        uint8_t h();
        Animation *parent();
        void setParent(Animation *animation);
        void enable(bool state);
        bool is_enabled();
        void show(bool state);
        bool is_visible();
    private:
        Animation *_parent;
        bool _enabled;
        bool _visible;
        uint8_t _x;
        uint8_t _y;
        uint8_t _w;
        uint8_t _h;
    protected:
        bool _overflow;
    };
}

#endif