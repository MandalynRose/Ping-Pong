#include "PlayerPaddle.h"

void PlayerPaddle::Draw() {
    //DrawRectangleRounded(Rectangle{ x, y, width, height }, 0.8, 0, BLACK);  //Paddle color
    Rectangle sourceRec = { 0,0, texture_paddle.width,texture_paddle.height };
    Rectangle ballRect = { x, y, width, height };
    DrawTexturePro(texture_paddle, sourceRec, ballRect, Vector2{ 0,0 }, 0, WHITE);
}
void PlayerPaddle::Update() {
    if (IsKeyDown(KEY_UP)) {                            //Keys we used
        y = y - speed;
    }
    if (IsKeyDown(KEY_DOWN)) {
        y = y + speed;
    }
    LimitMovement();
}
void PlayerPaddle::LimitMovement() {
    if (y <= 0) {
        y = 0;
    }
    if (y + height >= GetScreenHeight()) {
        y = GetScreenHeight() - height;
    }
}
