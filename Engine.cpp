#include <iostream>
#include "class.h"

//Axis Aligned Bounding Boxes
struct AABB {
    Vec2 min;
    Vec2 max;
};

//Circle formula
struct Circle {
    float radius;
    Vec position;
};

//Test

//https://github.com/danistefanovic/build-your-own-x#build-your-own-physics-engine

//https://gamedevelopment.tutsplus.com/tutorials/how-to-create-a-custom-2d-physics-engine-the-basics-and-impulse-resolution--gamedev-6331
