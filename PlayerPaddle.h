#ifndef PADDLE_H
#define PADDLE_H

#include "raylib.h"
class PlayerPaddle
{
protected:
    void LimitMovement();
public:
    float x, y;
    float width, height;
    int speed;
    Texture2D texture_paddle;

    void Draw();
    void Update();

};

#endif
