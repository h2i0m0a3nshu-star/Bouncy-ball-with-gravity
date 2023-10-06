#pragma once
#include <raylib.h>

class physics
{
private:
	const double del_t = 1.0/ 60.0,g =20;
public:
	void kinematics(Vector2 &p,Vector2 &v,Vector2 &a);
	void gravity_kinematics(Vector2& p, Vector2& v);
};

class collision
{
public:
	bool collision_check_x(Rectangle entity1, Rectangle entity2);
	bool collision_check_y(Rectangle entity1, Rectangle entity2);
};
