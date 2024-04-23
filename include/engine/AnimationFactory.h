#pragma once
#include "../MasterHeader.h"// Include necessary headers to access GetTime() and other functions


Animation createElasticOutAnimation(const KeyFrames& keyframe) {
    return Animation(AnimationTarget::Position, TweenType::TweenElasticOut, keyframe);
}

// // Create Elastic Out Animation for Position
// Animation createElasticOutAnimation(const KeyFrames& keyframe) {
//     return Animation(AnimationTarget::Position, TweenType::TweenElasticOut, keyframe);
// }

// // Create Elastic Out Animation for Alpha
// Animation createElasticOutAnimation(float alphaStart, float alphaEnd, const KeyFrames& keyframe) {
//     Animation anim(AnimationTarget::Alpha, TweenType::TweenElasticOut, keyframe);
//     anim.alpha = alphaStart; // Set initial alpha value
//     return anim;
// }

// // Create Elastic Out Animation for Color
// Animation createElasticOutAnimation(const Color& colorStart, const Color& colorEnd, const KeyFrames& keyframe) {
//     Animation anim(AnimationTarget::Color, TweenType::TweenElasticOut, keyframe);
//     // Set initial and final colors
//     anim.colors.push_back({ colorStart.r, colorStart.g, colorStart.b, colorStart.a });
//     anim.colors.push_back({ colorEnd.r, colorEnd.g, colorEnd.b, colorEnd.a });
//     return anim;
// }

// // Add more overloaded functions for other animation types or parameters as needed