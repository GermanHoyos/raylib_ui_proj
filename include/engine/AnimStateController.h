#pragma once
#include "../MasterHeader.h" // Include necessary headers to access GetTime() and other functions

enum class AnimationState
{
   Play        ,
   Pause       ,
   Stop        ,
   Infinite    ,
   Repeat
};

class AnimStateController
{
   public:
   // Members
   AnimationState       state;

   // Constructor
   AnimStateController
   (
      // Arguments
      AnimationState state
   )
   :
      // ".this" initializers
      state(state)
   {
      // Additional inits if needed
   }

   template <typename T>
   void apply(T& obj, Animation& animation, KeyFrames keyframe)
   {
      // Play animation if
      if(state == AnimationState::Play)
      {
         animation.animate(obj, keyframe);
      }

      // Pause animation if
      if(state == AnimationState::Pause)
      {

      }

      // Stop animation if
      if(state == AnimationState::Stop)
      {

      }
      // Loop forever if
      if(state == AnimationState::Infinite)
      {

      }

      // Loop x times if
      if(state == AnimationState::Repeat)
      {

      }
   }

};

