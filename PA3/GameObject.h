// Jungjae Lee
// Boston University College of Engineering
// EC 327 Programming Assignment 3
// November 23, 2022

// required headerfile
#include <iostream>
#include <cmath>
#include "Point2D.h"
#include "Vector2D.h"

using namespace std;


// prototyped
#ifndef GAMEOBJECT.H
#define GAMEOBJECT.H

class GameObject {
    protected:
        Point2D location;   // location of the object
        int id_num;         // object's id
        char display_code;  // how the object is represented in the view
        char state;         // state of the object

    public:
        GameObject (char in_code);
        GameObject (Point2D in_loc, int in_id, char in_code);
        ~GameObject ();
        Point2D GetLocation();
        int GetId ();
        char GetState ();
        void ShowStatus ();
};


#endif