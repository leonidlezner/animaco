#include <iostream>

#include "CircularPane.h"
#include "Pixel.h"
#include "Arc.h"

using namespace animaco;

int main(int, char**) {

    CircularPane pane1(32);

    Pixel pix1;
    Arc arc1;

    pane1.attach(pix1);
    pane1.attach(arc1);

    //while(1)
    {
        pane1.nextFrame();
        pane1.draw();
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
