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
   Color   color;                // By user
   float   h, w, x, y;           // By user

   // Constructor
   RectangleObj(const Color& color, float h, float w, float x, float y)
   : color(color), h(h), w(w), x(x), y(y) {}

   // Draw rectangle
   void drawRectMthd()
   {
      // If this object exists, then draw it
      DrawRectangleV({x, y}, {w, h}, color);
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

   }

};
