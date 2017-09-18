#pragma once
#include "ofMain.h"

class Player {
public:
	ofPoint pos;
	float width, height, speed;
	int lives;
    ofPath shape;

	bool is_left_pressed, is_right_pressed, is_down_pressed, is_up_pressed;
	
	void setup(ofImage *_img);
    void setup(ofPath shape);
	void update();
	void draw();
	void shoot();

	void calculate_movement();

	ofImage *img;
};
