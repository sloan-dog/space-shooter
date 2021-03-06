#include "Player.h"

void Player::setup(ofImage *_img) {
	lives = 3;

	speed = 5;

	img = _img;
	width = height = img -> getWidth();

	pos.x = ofGetWidth()/2;
	pos.y = ofGetHeight() - height * 2;

}
//---------------------------------------
void Player::update() {
	calculate_movement();
}
//---------------------------------------
void Player::draw() {
	img->draw(pos.x - width/2, pos.y - width/2);
}
//---------------------------------------

void Player::calculate_movement() {
	/*
	in openFrameworks origin is top left, aka

	O - - - -
	|        |
	|        |
	|        |
	| _ _ _ _|

	*/
//    cout << ofGetWidth() << "," << ofGetHeight() << "," << pos.x << "," << pos.y << "\n";

	if (is_left_pressed && pos.x > 0 + width/2) {
		pos.x -= speed;
	}
	if (is_right_pressed && pos.x < ofGetWidth() - width/2) {
		pos.x += speed;
	}
	if (is_up_pressed && pos.y > height/2) {
		pos.y -= speed;
	}
	if (is_down_pressed && pos.y < ofGetHeight() - height/2) {
		pos.y += speed;
	}
}
//---------------------------------------
