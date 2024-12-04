#ifndef CPU_PADDLE_H
#define CPU_PADDLE_H

#include "PlayerPaddle.h" //Must add this to derived for CPU
#include "raylib.h"
class CpuPaddle : public PlayerPaddle{  //For dervied
public:
	void Update(int ball_y);

};
#endif
