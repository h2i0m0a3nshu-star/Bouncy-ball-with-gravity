#pragma once
#include <raylib.h>
#include <iostream>
#include"Ball.h"
#include "physics.h"

using namespace std;
class Game
{
public:
	Game(int width, int height, string title);
	bool should_close() const;
	void tick();
	~Game() noexcept;
private:
	ball b1;
	ball b2;
	collision c;
	Rectangle border = { 20, 20, 760, 760 };
	Rectangle border_collision_rect = { 20, 20, 760, 760 };
	void draw();
	void update();
};