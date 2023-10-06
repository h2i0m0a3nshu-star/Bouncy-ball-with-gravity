#include "Game.h"
int main()
{
	const int w = 800;
	Game g(w,w,"Ball");
	while (!g.should_close())
	{
		g.tick();
	}
	return 0;
}