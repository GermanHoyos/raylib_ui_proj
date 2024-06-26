#pragma once
#include "../MasterHeader.h" // Include necessary headers to access GetTime() and other functions


/****************
**             **
**  Rectangle  **
**             **
**             **
****************/
class RectangleObj
{
public:
   // Member variables
   Color   color;
   float   h, w, x, y, z; 

   // Constructor
   RectangleObj(const Color& color, float h, float w, float x, float y, float z)
   : color(color), h(h), w(w), x(x), y(y), z(z) {}

   // Draw rectangle
   void drawRectMthd()
   {
      DrawRectangleV({x, y}, {w, h}, color);

      // Axis relative to the camera position and angle
      // x = x + 0.02f;    // (+) = to the RIGHT ->    (-) = to the LEFT <-
      // y = y + 0.02f;    // (+) = up ^               (-) = down \/
      // z = z - 0.02f;    // (-) = foward             (+) = backward
   }
};


/****************
**             **
**  Cube       **
**             **
**             **
****************/
class CubeObj
{
   public:
   // Member variables
   float x, y, z;

   CubeObj(float x, float y, float z) 
   : x(x), y(y), z(z) {}

   void drawCubeMthd()
   {
      DrawCube({x,y,z}, 1.0f, 1.0f, 1.0f, RED);

      // Axis relative to the camera position and angle
      // x = x + 0.02f;    // (+) = to the RIGHT ->    (-) = to the LEFT <-
      // y = y + 0.02f;    // (+) = up ^               (-) = down \/
      // z = z - 0.02f;    // (-) = foward             (+) = backward
   }
};
