#pragma once
#include "../MasterHeader.h" // Include necessary headers to access GetTime() and other functions

using KeyFrames = std::vector<std::vector<int>>;

// KeyFrame defualt if 1 isnt explicitly chosen
KeyFrames defaultKeyFrame = {
   {300,1000},
   {200,200}
};

// keyFrame01 start
KeyFrames keyFrame01 = {
   {300,800},
   {200,200}
};

