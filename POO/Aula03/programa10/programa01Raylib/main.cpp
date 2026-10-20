#include "raylib.h"
//#include "player.hpp"

int main(void)
{
	InitWindow(800, 600, "Programa10ExemploRaylib01");
	
	//float deltaTime;
	
	SetTargetFPS(60);
	
	while(!WindowShouldClose()){
		
		//TODO: update
		
		BeginDrawing();
		
			ClearBackground(RAYWHITE);
	
		
		EndDrawing();
	}
	
	CloseWindow();
	
	return 0;
}

