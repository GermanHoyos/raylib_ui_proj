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

   // Main game loop
   while (!w.ShouldClose()) // Detect window close button or ESC key
   {

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
      AnimStateController animController_01(AnimationState::Play);
      animController_01.apply(myRect, animElasticOut, keyFrame01);

      EndDrawing();
   }

   return 0;
}