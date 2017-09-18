//
//  Explosion.cpp
//  oFShooter
//
//  Created by Sloan Coffin on 9/17/17.
//
//

#include "Explosion.h"


void Explosion::draw() {
    cout << "drawing circle\n";
    circle.draw();
}
//----------------------
void Explosion::update() {
    current_radius += increment;
    alpha -= 2;
    
//    Don't want a million circles
    circle.clear();
    
    int h = color->getHex();
    color->setHex(h, alpha);
    
    circle.setStrokeColor(*color);
    circle.circle(pos.x, pos.y, current_radius);
}
bool Explosion::time_to_die() {
    return current_radius > max_radius || alpha == min_alpha;
}
//----------------------
void Explosion::setup(float _x, float _y, float _min_radius, float _max_radius, ofColor *_color, float _increment, int _alpha, int _min_alpha) {
    
    cout << "explosion alive\n";
    
    min_radius = _min_radius;
    increment = _increment;
    current_radius = _min_radius;
    max_radius = _max_radius;
    pos.set(_x, _y);
    alpha = _alpha;
    min_alpha = _min_alpha;
    
    color = _color;
    circle.setFilled(false);
    circle.setStrokeColor(*_color);
    circle.setStrokeWidth(1.0);
    circle.circle(pos.x, pos.y, current_radius);
}
