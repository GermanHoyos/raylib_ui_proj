#pragma once
#include "MasterHeader.h" // Include necessary headers to access GetTime() and other functions

enum class AnimationTarget
{
   Alpha          ,
   Position       ,
   Color          ,
   Vertice        
};

// KeyFrame example:
// KeyFrames keyFrame01 = {
//    {100,100},
//    {200,200}
// };

enum class TweenType
{
   TweenElasticIn ,
   TweenElasticOut
};

struct MyColors {
   int r;
   int g;
   int b;
   int a;
};

struct MyVertices {
   float x;
   float y;
};

class Animation
{
   // Accessor
   public:

   // Members
   AnimationTarget         target      ;
   TweenType               tween       ;
   KeyFrames               positions   ; //KeyFrames.h - KeyFrames keyFrame01 = {{100,100},{200,200}}
   std::vector<MyColors>   colors      ;
   std::vector<MyVertices> vertices    ;
   float                   alpha       ;
   int                     initialized ;
   int                     origX       ;
   int                     origY       ;
   int                     xPosIteratr ;
   int                     yPosIteratr ;

   // Constructor
   Animation
   (
      // Arguments
      AnimationTarget                  target         ,
      TweenType                        tween          ,
      KeyFrames                        positions      ,
      const std::vector<MyColors>&     colors =   {}  , // optional overload
      const std::vector<MyVertices>&   vertices = {}  , // optional overload
      float                            alpha =  1.0f  , // optional overload
      int                              initialized = 0,
      int                              origX       = 0,
      int                              origY       = 0,
      int                              xPosIteratr = 0,
      int                              yPosIteratr = 0
   )
   :
      // ".this" initilizers
      target(target)          ,
      tween(tween)            ,
      positions(positions)    ,
      colors(colors)          ,
      vertices(vertices)      ,
      alpha(alpha)            ,
      initialized(initialized),
      origX(origX)            ,
      origY(origY)            ,
      xPosIteratr(xPosIteratr),
      yPosIteratr(yPosIteratr)
   {
      // Additional inits here
   }

   template <typename T>
   void animate(T& obj, KeyFrames keyframe)
   {
      // The objects start position
      if (this->initialized == 0)
      {
         this->initialized = 1;
         this->origX = obj.x;
         // std::string initStr = std::to_string(initialized);
         // const char* initChar = initStr.c_str();
         // DrawText(initChar, 20, 200, 20, WHITE);
      }

      // Iterate through the passed keyframe positions as each
      // position is reached
      // float distanceFromPoint = sqrt((obj.x - ));
      // if (obj.x){

      // }




      if (target == AnimationTarget::Alpha)
      {
         if (tween == TweenType::TweenElasticIn)
         {
               // Your implementation here
         }
         else if (tween == TweenType::TweenElasticOut)
         {
               // Your implementation here
         }
      }
      else if (target == AnimationTarget::Position)
      {
         if (tween == TweenType::TweenElasticIn)
         {
               // Your implementation here
         }
         else if (tween == TweenType::TweenElasticOut)
         {
            obj.x = (int)EaseElasticOut(TimeClass::framesCounterResetable, this->origX, keyframe[0][1], 120);
         }
      }
      else if (target == AnimationTarget::Color)
      {
         if (tween == TweenType::TweenElasticIn)
         {
               // Your implementation here
         }
         else if (tween == TweenType::TweenElasticOut)
         {
               // Your implementation here
         }
      }
      else if (target == AnimationTarget::Vertice)
      {
         if (tween == TweenType::TweenElasticIn)
         {
               // Your implementation here
         }
         else if (tween == TweenType::TweenElasticOut)
         {
               // Your implementation here
         }
      }
   }
}; 

Animation animElasticOut(
   AnimationTarget::Position,
   TweenType::TweenElasticOut,
   keyFrame01
);