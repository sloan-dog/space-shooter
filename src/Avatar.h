//
//  Avatar.h
//  oFShooter
//
//  Created by Sloan Coffin on 9/17/17.
//
//

#ifndef Avatar_h
#define Avatar_h


#endif /* Avatar_h */

#pragma once
#include "ofMain.h"

enum class Mode {DEAD, ALIVE};

class Avatar {
public:
    void draw(float _x, float _y);
    void update();
    void setup(ofPath _shape, ofColor _color, int _alpha_decrement=3, int _min_alpha=0, int _alpha=255, float stroke_width=1.0, float _death_interval=2.0);
    void die(float _death_start);
    bool is_death_complete(float _time);
    
    ofPath shape;
    ofColor color;
    int alpha_decrement;
    int min_alpha;
    int alpha;
    float stroke_width;
    Mode mode;
    float death_interval;
    float death_start;
};
