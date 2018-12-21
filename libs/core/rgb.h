#ifndef __RGB_H
#define __RGB_H

namespace rgb {

    /**
     * Set the rgb led to a specific red, green, blue color.
     * @param red the red color
     * @param green the green color
     * @param blue the blue color
     */
    void setRGBLed(int r, int g, int b);

    /**
     * Set a chain of rgb leds to a specific red, green, blue color.
     * @param red the red color
     * @param green the green color
     * @param blue the blue color
     * @param n the number of leds to set
     */
    void setRGBLedChainSame(int r, int g, int b, int n);
}

#endif