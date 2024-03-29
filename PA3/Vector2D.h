// Jungjae Lee
// Boston University College of Engineering
// EC 327 Programming Assignment 3
// November 23, 2022

// required headerfile
#include <iostream>
#include <cmath>
// #include "Point2D.h"


// prototyped
#ifndef VECTOR2D.H
#define VECTOR2D.H

class Vector2D {
    // public member functions
    public:
        double x;   // x displacement value of the vector
        double y;   // y displacement value of the vector

        Vector2D ();
        Vector2D (double in_x, double in_y);
        ~Vector2D (); 
};

Vector2D operator * (Vector2D v1, double d);
Vector2D operator / (Vector2D v1, double d);
ostream& operator << (ostream& out, Vector2D v1);


#endif