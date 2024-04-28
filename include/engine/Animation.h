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
   float                   origX       ;
   float                   origY       ;
   float                   origZ       ;
   int                     xPosIteratr ;
   int                     yPosIteratr ;
   int                     zPosIteratr ;
   int                        animIndex;

   // Constructor
   Animation
   (
      // Arguments
      AnimationTarget                  target            , // Alpha, Position, Color, Vertice
      TweenType                        tween             , // TweenElasticIn, TweenElasticOut
      KeyFrames                        positions         , // KeyFrames.h KeyFrames defaultKeyFrame = {{300,1000},   {200,200}};
      const std::vector<MyColors>&     colors      =   {}, // optional overload
      const std::vector<MyVertices>&   vertices    =   {}, // optional overload
      float                            alpha       = 1.0f, // optional overload
      int                              initialized =    0, // optional overload
      float                            origX       = 0.0f, // optional overload
      float                            origY       = 0.0f, // optional overload
      float                            origZ       = 0.0f,
      int                                 xPosIteratr = 0, // optional overload
      int                                 yPosIteratr = 0, // optional overload
      int                                 zPosIteratr = 0,
      int                                   animIndex = 0
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
      origZ(origZ)            ,
      xPosIteratr(xPosIteratr),
      yPosIteratr(yPosIteratr),
      zPosIteratr(zPosIteratr),
      animIndex(animIndex)
   {
      // Additional inits here
   }

   template <typename T>
   void animate(T& obj, KeyFrames keyframe)
   {
      /* Example keyframe
         KeyFrames keyFrame01 = 
         {//{x     ,y     ,     z}
            {130.0f, 60.0f, 0.00f},
            {100.0f, 50.0f, 0.00f}
         };
      */

      if (animIndex < keyframe.size()) // size = 2
      {
         float xDistance = fabs(obj.x - keyframe[animIndex][0]);
         float yDistance = fabs(obj.y - keyframe[animIndex][1]);
         //float zDistance = (obj.z - keyframe[animIndex][2]);

         string xDistStr = to_string(xDistance);
         string yDistStr = to_string(yDistance);
         string animIndx = to_string(this->animIndex);
         string keyframeSize = to_string(keyframe.size());
         DrawText(xDistStr.c_str(), 2, 100, 20, GREEN);
         DrawText(yDistStr.c_str(), 2, 125, 20, GREEN);
         DrawText(animIndx.c_str(), 2, 150, 20, GREEN);
         DrawText(keyframeSize.c_str(), 2, 180, 20, GREEN);


         if (xDistance < 0.000001f && yDistance < 0.000001f && animIndex < 1)
         {
            this->animIndex++;
         }
      }

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
            obj.x = EaseElasticOut(TimeClass::framesCounterResetable, this->origX, keyframe[this->animIndex][0], 220);
            obj.y = EaseElasticOut(TimeClass::framesCounterResetable, this->origY, keyframe[this->animIndex][1], 220);
            obj.z = EaseElasticOut(TimeClass::framesCounterResetable, this->origZ, keyframe[this->animIndex][2], 220);
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
