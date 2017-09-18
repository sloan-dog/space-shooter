//
//  Avatar.cpp
//  oFShooter
//
//  Created by Sloan Coffin on 9/17/17.
//
//

#include <stdio.h>
#include "Avatar.h"

void Avatar::draw(float _x, float _y) {
    shape.clear();
    shape.setStrokeColor(color);
    shape.draw(_x, _y);
}
//----------------------
void Avatar::update() {
    if (mode == Mode::ALIVE) {
        
    } else {
        int hex = color.getHex();
        alpha -= alpha_decrement;
        color.setHex(hex, alpha);
    }
}
//----------------------
void Avatar::setup(ofPath _shape, ofColor _color, int _alpha_decrement, int _min_alpha, int _alpha, float _stroke_width, float _death_interval) {
    shape = _shape;
    color = _color;
    alpha_decrement = _alpha_decrement;
    alpha = _alpha;
    
    stroke_width = _stroke_width;
    shape.setStrokeWidth(stroke_width);
    
    death_interval = _death_interval;
    mode = Mode::ALIVE;
}
//----------------------
void Avatar::die(float _death_start) {
    mode = Mode::DEAD;
    death_start = _death_start;
}
//----------------------
bool Avatar::is_death_complete(float _time) {
    return _time > death_start + death_interval;
}
//----------------------
//----------------------
//----------------------
//----------------------
//----------------------
