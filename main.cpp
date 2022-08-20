#include <iostream>

#include "CircularPane.h"
#include "Pixel.h"
#include "Arc.h"
#include "ConsoleDriver.h"

using namespace animaco;

int main(int, char**) {

    CircularPane pane1(32);
    ConsoleDriver outputDriver;

    Pixel pix1;
    Arc arc1;

    pix1.setPosition(0, 0);
    arc1.setPosition(0, 0);

    arc1.setSize(5, 1);

    pane1.attach(&arc1);
    pane1.attach(&pix1);

    pix1.enable(false);

    for(int x = 0; x < 32; x++)
    {
        pane1.draw(nullptr);
        pane1.output(&outputDriver);
        pane1.nextFrame();
    }

    

    /* 
    CircularPane pane1;

    

    HLine line1(0, 3, 0);

    pane1.attach(arc1);
    pane1.attach(pix1);
    pane1.attach(line1);

    arc1.rotating(5);

    while(timer) {
        pane1.draw();
    } */



}
