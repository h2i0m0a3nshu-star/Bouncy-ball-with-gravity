#pragma once
#include <raylib.h>
#include"Physics.h"
using namespace std;

class ball
{
public:
	ball(Vector2 p, Vector2 v, Vector2 a, float r);
	Rectangle ball_collision_rect = { 0,0,0,0 };
	void draw_ball();
	void update_ball();
	void collision_response_y();
	void collision_response_x();
private:
	Vector2 pos, vel, acc, Force;
	float radius;
	physics p;
};
