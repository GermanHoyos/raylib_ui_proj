#pragma once
#include "../MasterHeader.h" // Include necessary headers to access GetTime() and other functions

// Animation 2
AnimStateController animController_02(AnimationState::Play);
Animation animCube = createElasticOutAnimation(tween3D_01);

void draw3DContext(Camera& camera) {
   // CAMERA_OBITAL is an enum
   // UpdateCamera(&camera, CAMERA_ORBITAL); // <-- rotate the camera
   BeginMode3D(camera);

   DrawGrid(10, 1.0f);

   myCube.drawCubeMthd();
   animController_02.apply(myCube, animCube, tween3D_01);




   EndMode3D();
}



