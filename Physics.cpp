
#include "Physics.h"

bool collision::collision_check_x(Rectangle entity1, Rectangle entity2)
{
	if (entity1.x - entity2.x <= 0 ||
		(entity1.x + entity1.width) - (entity2.x + entity2.width) >= 0)
	{
		return true;
	}
	return false;
}

bool collision::collision_check_y(Rectangle entity1, Rectangle entity2)
{
	if (entity1.y - entity2.y <= 0 ||
		(entity1.y + entity1.height) - (entity2.y + entity2.height) >= 0)
	{
		return true;
	}
	return false;
}

void physics::kinematics(Vector2& p, Vector2& v, Vector2& a)
{
	v.x += 5*(a.x * del_t);
	p.x += v.x * del_t + a.x * (del_t*del_t);
	v.y += 5*(a.y * del_t);
	p.y += v.y * del_t + a.y * (del_t*del_t);
}

void physics::gravity_kinematics(Vector2& p, Vector2& v)
{
	v.y += 5*(g * del_t);
	p.y += v.y * del_t;
}
