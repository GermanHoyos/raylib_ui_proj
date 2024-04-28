#pragma once
#include "../MasterHeader.h" // Include necessary headers to access GetTime() and other functions



// 2d objects
RectangleObj myRect(WHITE, 100.0f, 50.0f, 200.0f, 150.0f, 0.0f);


// 3d objects
   // Axis relative to the camera position and angle
   // x = x + 0.02f;    // (+) = to the RIGHT ->    (-) = to the LEFT <-
   // y = y + 0.02f;    // (+) = up ^               (-) = down \/
   // z = z - 0.02f;    // (-) = foward             (+) = backward
//

CubeObj myCube(0,0.5,4);
