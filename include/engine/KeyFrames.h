#pragma once
#include "../MasterHeader.h" // Include necessary headers to access GetTime() and other functions

using KeyFrames = std::vector<std::vector<float>>;

// All animations can be aniamted in a 3D context.
// {x, y, z}

// KeyFrame defualt if 1 isnt explicitly chosen
KeyFrames defaultKeyFrame = {
   {300.0f, 1000.0f, 0.05f},
   {200.0f, 200.0f , 0.05f}
};

// keyFrame01 start
KeyFrames keyFrame01 = {
   {300.0f, 800.0f, 0.05f},
   {200.0f, 200.0f, 0.05f}
};

