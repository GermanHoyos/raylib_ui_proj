#include "include/MasterHeader.h"

int main()
{

   // Initilize the camera
   Camera3D camera = { 0 };
   camera.position = (Vector3){ 0.0f, 2.2f, 8.99f };// X,Y,Z position of camera
   camera.target = (Vector3){ 0.0f, 2.3f, 0.0f };  // Where is the camera pointing to
   camera.up = (Vector3){ 0.0f, 1.0f, 0.0f };      // Which way is up for the camera
   camera.fovy = 60.0f;                            // Camera field-of-view Y
   camera.projection = CAMERA_PERSPECTIVE;         // Camera mode type

   // 2D - Initializations
   int screenWidth = 1600;
   int screenHeight = 1000;
  
   // Boundaries
   DrawSections outlineSections;

   // Window title / target FPS
   raylib::Window w(screenWidth, screenHeight, "C++ 3D Experiments");
   SetTargetFPS(60);

   // Test reasings.h
   int ballPositionX = 300;

   // Steps for creating an animation:
   //    1) instantiate a KeyFrames.h
   //    2) instantiate a AnimStateController.h
   //    3) instantiate a Animation.h
   //       then you can ".apply()" to whatever obj you desire, for ex: "animController_01.apply(myRect, myAnim, keyFrame01);"
   AnimStateController animController_01(AnimationState::Play);
   Animation myAnim = createElasticOutAnimation(keyFrame01);

   // Main game loop
   while (!w.ShouldClose()) // Detect window close button or ESC key
   {
      // Generic aproach to easing calls
      ballPositionX = (int)EaseElasticOut(TimeClass::framesCounterResetable, 300, 800, 120);

      // Drawing context loop:
      BeginDrawing();
      ClearBackground(BLACK);
      
      //Z index of the 3D render is before all other 2d objects
      draw3DContext(camera);

      TimeClass::displayGameTime();

      // Define section borders and descriptions
      outlineSections.draw();

      // Test reasings.h
      DrawCircle(ballPositionX, 700, 10.0f, RED);
      myRect.drawRectMthd();

      // Animation tests
      animController_01.apply(myRect, myAnim, keyFrame01);

      EndDrawing();
   }

   return 0;
}