#pragma once
#include "../MasterHeader.h" // Include necessary headers to access GetTime() and other functions

enum class AnimationTarget
{
   Alpha          ,
   Position       ,
   Color          ,
   Vertice        
};

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
   float                     origX       ;
   float                     origY       ;
   float                     xPosIteratr ;
   float                     yPosIteratr ;

   // Constructor
   Animation
   (
      // Arguments
      AnimationTarget                  target         , // Alpha, Position, Color, Vertice
      TweenType                        tween          , // TweenElasticIn, TweenElasticOut
      KeyFrames                        positions      , // KeyFrames.h KeyFrames defaultKeyFrame = {{300,1000},   {200,200}};
      const std::vector<MyColors>&     colors =   {}  , // optional overload
      const std::vector<MyVertices>&   vertices = {}  , // optional overload
      float                            alpha =  1.0f  , // optional overload
      int                              initialized = 0, // optional overload
      float                              origX       = 0.0f, // optional overload
      float                              origY       = 0.0f, // optional overload
      float                              xPosIteratr = 0.0f, // optional overload
      float                              yPosIteratr = 0.0f  // optional overload
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
            
            obj.x = EaseElasticOut(TimeClass::framesCounterResetable, this->origX, keyframe[0][0], 120);
            obj.y = EaseElasticOut(TimeClass::framesCounterResetable, this->origY, keyframe[0][1], 120);
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

// Animation animElasticOut(
//    AnimationTarget::Position,
//    TweenType::TweenElasticOut,
//    keyFrame01
// );