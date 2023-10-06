#include "ball.h"

ball::ball(Vector2 p, Vector2 v,Vector2 a, float r)
	:pos(p),vel(v),radius(r),acc(a)
{

}

void ball::draw_ball()
{
	DrawCircle(int(pos.x), int(pos.y), radius, RED);
}

void ball::update_ball()
{
	p.kinematics(pos, vel, acc);
	p.gravity_kinematics(pos, vel);
	ball_collision_rect.x = pos.x - radius;
	ball_collision_rect.y = pos.y - radius;
	ball_collision_rect.width = 2 * radius;
	ball_collision_rect.height = 2 * radius;
}

void ball::collision_response_y()
{
	vel.y *= -1;
	acc.x *= -1;
}

void ball::collision_response_x()
{
	vel.x *= -1;
}

