#pragma once
#include "../MasterHeader.h" // Include necessary headers to access GetTime() and other functions

using KeyFrames = std::vector<std::vector<float>>;

// All animations can be aniamted in a 3D context.
// Even if the object is in a 2d context and animated
//    only on a 2d plane, the Animation.h still needs
//    a 3d z member. the Z simply will be ignored
// {x, y, z}

// Axis relative to the camera position and angle
// x = x + 0.02f;    // (+) = to the RIGHT ->    (-) = to the LEFT <-
// y = y + 0.02f;    // (+) = up ^               (-) = down \/
// z = z - 0.02f;    // (+) = foward             (-) = backward


KeyFrames defaultKeyFrame = 
{  // Defualt keyframe if one isnt explicitly chosen
   {300.0f, 1000.0f, 0.05f},
   {200.0f, 200.0f , 0.05f}
};


KeyFrames keyFrame01 = 
{
   {130.0f, 60.0f, 0.00f},
   {100.0f, 50.0f, 0.00f}
};


KeyFrames tween3D_01 = 
{
   {2.0f, 0.0f, 0.0f},
   {0.0f, 0.0f, 0.10f}
};

