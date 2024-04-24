#pragma once
#include "../MasterHeader.h" // Include necessary headers to access GetTime() and other functions

void draw3DContext(RenderTexture2D& target,Camera& camera, Rectangle& destinationRect) {
   BeginTextureMode(target);       // Enable drawing to texture
    ClearBackground(BLACK);         // Clear texture background
      BeginMode3D(camera);
      UpdateCamera(ref camera);
      DrawGrid(10, 1.0f);
      EndMode3D();
   EndTextureMode();
   
   // NOTE: Render texture must be y-flipped due to default OpenGL coordinates (left-bottom)
   //DrawTextureRec(target.texture, (Rectangle){ 0, 0, (float)target.texture.width, (float)-target.texture.height }, (Vector2){ 0, 0 }, WHITE); 
   DrawTexturePro(
      target.texture,
      (Rectangle){ 0, 0, (float)target.texture.width, (float)-target.texture.height },
      destinationRect,
      (Vector2){ 0, 0 },
      0,
      WHITE
   );
}