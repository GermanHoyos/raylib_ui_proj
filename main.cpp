#include "include/MasterHeader.h"

int main()
{
   // 2D - Initializations
   int screenWidth = 1600;
   int screenHeight = 1000;
  
   // Boundaries
   DrawSections outlineSections;

   // Window title / target FPS
   raylib::Window w(screenWidth, screenHeight, "C++ Easing Maths Visualized");
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
      TimeClass::displayGameTime();

      // Define section borders and descriptions
      outlineSections.draw();

      // Test reasings.h
      DrawCircle(ballPositionX, 700, 10.0f, RED);
      DrawRectangle(myRect.x, myRect.y, myRect.h, myRect.y, WHITE);

      // Animation tests
      animController_01.apply(myRect, myAnim, keyFrame01);

      EndDrawing();
   }

   return 0;
}