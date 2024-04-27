#pragma once
#include "../MasterHeader.h" // Include necessary headers to access GetTime() and other functions

void draw3DContext(Camera& camera) {
   // CAMERA_OBITAL is an enum
   // UpdateCamera(&camera, CAMERA_ORBITAL); // <-- rotate the camera
   BeginMode3D(camera);

      DrawGrid(10, 1.0f);
      
      myCube.drawCubeMthd();









   EndMode3D();
}



