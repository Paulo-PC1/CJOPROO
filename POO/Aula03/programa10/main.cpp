#include <raylib.h>

#include "Player.h"

int main(void)
{
	InitWindow(800, 600, "Programa10ExemploRaylib01");
	
	InitAudioDevice();
	
	SetTargetFPS(60);
	
	ChangeDirectory(GetApplicationDirectory());
	
	float deltaTime;

	Player player;
	
	Music bgMusic = LoadMusicStream("assets/music/music.mp3");
	
	PlayMusicStream(bgMusic);
	
	while(!WindowShouldClose()){
		
		//retorna tempo que last frame foi processado
		deltaTime = GetFrameTime();
		
		UpdateMusicStream(bgMusic);
		
		player.update(deltaTime);
		
		BeginDrawing();
			
			ClearBackground(BLACK);
			player.draw();
		
		EndDrawing();
	}
	
	UnloadMusicStream(bgMusic);
	
	CloseWindow();
	
	return 0;
}

