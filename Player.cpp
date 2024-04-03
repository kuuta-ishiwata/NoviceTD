#include "Player.h"

void Player::Initialize()
{

     player= {
	    {64, 600},
        {0,  0 },
        32
    };


}

void Player::Update(char* keys, char* prekeys) 
{
	// 右に動く
	if (keys[DIK_A]) {
		player.velocity.X = -5;
	}
	if (keys[DIK_A] == 0 && prekeys[DIK_A]) {
		player.velocity.X = 0;
	}

	// 左に動く
	if (keys[DIK_D]) {
		player.velocity.X = 5;
	}

	if (keys[DIK_D] == 0 && prekeys[DIK_D]) {
		player.velocity.X = 0;
	}

	if (keys[DIK_SPACE] && prekeys[DIK_SPACE] == 0) {
		if (jampFlag == false)
		{
			jampFlag = true;
			player.velocity.Y = -20;
			gravity = 1.0f;
		}
	}
	
	// 重力をかける
	if (player.position.Y <= 610)
	{
		gravity = 0;

	}

	player.velocity.Y += gravity;



	player.position.X += player.velocity.X;
	player.position.Y += player.velocity.Y;


	if (player.position.X <= sword.swordposition.x + sword.radius_ &&
		sword.swordposition.x <= player.position.X + player.radius &&
		player.position.Y <= sword.swordposition.y + sword.radius_ &&
	    sword.swordposition.y <= player.position.Y + player.radius)
	{
		Novice::ScreenPrintf(50, 0, "atari", sword.swordflag);
		sword.OnCollision();

	}


}

void Player::Draw() { Novice::DrawBox(player.position.X, player.position.Y, player.radius, player.radius, 0.0f, WHITE, kFillModeSolid); }