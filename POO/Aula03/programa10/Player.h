#pragma once

#include <raylib.h>

class Player {
	
public:
	
	Player(); // Construtor da classe
	
	~Player(); // Destrutor da classe
	
	void draw() const; // Desenha player na tela
	
	void update(float deltaTime); // Atualiza lógica do player
	
	void CheckScreenLimits(); // Verifica limites da tela (tipo colisão )
	
private:
	
	Texture2D texture; // Textura player
	
	Vector2 position; // Posição jogador tela
	
	float speed; // Velocidade do player
};
