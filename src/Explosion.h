//
//  Explosion.h
//  oFShooter
//
//  Created by Sloan Coffin on 9/17/17.
//
//


#ifndef Explosion_h
#define Explosion_h


#endif /* Explosion_h */

#include "ofMain.h"

class Explosion {
public:
    ofPoint pos;
    float max_radius;
    float min_radius;
    float current_radius;
    ofColor *color;
    float increment;
    ofPath circle;
    
    int alpha;
    int min_alpha;
    
    void draw();
    void update();
    void setup(float x, float y, float min_radius, float max_radius, ofColor *color, float increment, int _alpha=255, int _min_alpha=0);
    bool time_to_die();
};
