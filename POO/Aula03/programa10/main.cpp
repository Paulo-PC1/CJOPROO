#include <raylib.h>
#include <iostream>
#include <vector>
#include <memory>
#include "Player.h"
#include "Enemy.h"

int main(void)
{
	InitWindow(800, 600, "Programa10ExemploRaylib02");
	
	InitAudioDevice();
	
	SetTargetFPS(60);
	
	ChangeDirectory(GetApplicationDirectory());
	
	float deltaTime;

	Player player;
	
	std::cout << "\n >> Enemy count:" << Enemy::getEnemyCount() << "\n\n";
	
	std::vector<std::unique_ptr<Enemy>> enemies;
	
	for(int i = 0; i < 5; ++i)
	{
		enemies.emplace_back(std::unique_ptr<Enemy>(new Enemy()));
	}
	
	std::cout << "\n >> Enemy count: " << Enemy::getEnemyCount() << "\n\n";
	
	Music bgMusic = LoadMusicStream("assets/music/music.mp3");
	
	PlayMusicStream(bgMusic);
	
	while(!WindowShouldClose()){
		
		//retorna tempo que last frame foi processado
		deltaTime = GetFrameTime();
		
		UpdateMusicStream(bgMusic);
		
		player.update(deltaTime);
		
		for(auto& enemy : enemies)
		{
			enemy->update(deltaTime);
		}
		
		BeginDrawing();
			
			ClearBackground(BLACK);
			player.draw();  
		
			for(const auto& enemy : enemies)
			{
				enemy->draw();
			}
		
		DrawText(TextFormat("Enemies: %d", Enemy::getEnemyCount()), GetScreenWidth() - 130.0f, 20.0f, 22, WHITE);
		
		
		EndDrawing();
	}
	
	UnloadMusicStream(bgMusic);
	
	CloseWindow();
	
	return 0;
}

