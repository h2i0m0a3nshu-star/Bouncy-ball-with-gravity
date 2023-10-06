#include "Game.h"

Game::Game(int width, int height, string title)
	:b1({ 40,400 }, { 100,0 }, { 0,0 }, 20),
	b2({300,600},{200,0},{0,0},20)
{
	InitWindow(width, height, title.c_str());
	SetTargetFPS(60);
}

bool Game::should_close() const
{
	return WindowShouldClose();
}

void Game::tick()
{
	BeginDrawing();
	update();
	draw();
	EndDrawing();
}

Game::~Game()
{
	CloseWindow();
}

void Game::draw()
{
	ClearBackground(BLACK);
	b1.draw_ball();
	b2.draw_ball();
	DrawRectangleLines(border.x,border.y,border.width,border.height, BLUE);
}

void Game::update()
{
	b1.update_ball();
	b2.update_ball();
	if (c.collision_check_x(b1.ball_collision_rect, border_collision_rect))
	{
		b1.collision_response_x();
	}
	if (c.collision_check_x(b2.ball_collision_rect, border_collision_rect))
	{
		b2.collision_response_x();
	}
	if (c.collision_check_y(b1.ball_collision_rect, border_collision_rect))
	{
		b1.collision_response_y();
	}
	if (c.collision_check_y(b2.ball_collision_rect, border_collision_rect))
	{
		b2.collision_response_y();
	}
}


