#include <raylib.h>

#include "Player.h"

int main(void)
{
	InitWindow(800, 600, "Programa10ExemploRaylib01");
	
	SetTargetFPS(60);
	
	ChangeDirectory(GetApplicationDirectory());
	
	float deltaTime;

	Player player;
	
	while(!WindowShouldClose()){
		
		//TODO: update
		
		BeginDrawing();
			
			ClearBackground(BLACK);
			player.draw();
		
		EndDrawing();
	}
	
	CloseWindow();
	
	return 0;
}

