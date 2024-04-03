#pragma once
#include <Novice.h>
#include "Vector2.h"
#include "Vector3.h"
#include "Sword.h"


/*
enum BLOCKinfo 
{
	None,  // なにもなし
	BLOCK, // ブロック
	BLOCK2,
	BLOCK3,
	BLOCK4,
	BLOCK5
};
*/

class Player 
{
public:
	void Initialize();

	void Update(char* keys, char* prekeys);

	void Draw();
	

public:
	typedef struct vector {
		float X;
		float Y;
	} vector;

	typedef struct object {
		vector position;
		vector velocity;
		float radius;
	} object;

	object player;
	
	float GetcenterX() { return player.position.X; }
	float GetcenterY() { return player.position.Y; }
	void SetposX(float posX) { this->player.position.X = posX; }
	void SetposY(float posY) { this->player.position.Y = posY; }
	
	Sword sword;
	
	// 重力
	float gravity = 1.0f;

	// ジャンプのフラグ
	bool jampFlag = false;

	//int playerOldX = 0.0f;
	//int playerOldY = 0.0f;
	
    
	// スクロール
	int scrolX = 0;

};
