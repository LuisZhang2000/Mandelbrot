// Assignment 1 Mandelbrot: Pixel coloring functions
// pixelColor.c
//
// Completed by
// Luis Zhang (z5205864)
//
// Modified on 2018-09-09
// Andrew Bennett Wed-lab
//
// Version 1.0.1: Fix issues with spacing and indentation.
// Version 1.0.0: Assignment released.

#include "mandelbrot.h"
#include "pixelColor.h"

char red_color(int steps);
char green_color(int steps);
char blue_color(int steps);

// This function should take a number (of steps taken to escape the
// Mandelbrot set), and convert it to a color.
//
// You have artistic licence here, so make your Mandelbrot look amazing.
struct pixel pixelColor(int steps) {
    struct pixel color = {
        .red = steps,
        .green = steps,
        .blue = steps,
    };

    // TODO: Change the color of the pixel for different numbers of
    // steps.
    color.red = red_color(steps);
    color.green = green_color(steps);
    color.blue = blue_color(steps);

    return color;
}

char red_color(int steps) {
    int temp = (steps / 10);
    return temp;
}


char green_color(int steps) {
    int temp = (steps / 10);
    return temp;
}


char blue_color(int steps) {
    int temp = (steps / 10);
    return temp;
}


