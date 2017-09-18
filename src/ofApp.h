#pragma once

#include "ofMain.h"
#include "Player.h"
#include "Life.h"
#include "Enemy.h"
#include "Bullet.h"
#include "Explosion.h"
#include "LevelController.h"

class ofApp : public ofBaseApp{
    
public:
    string game_state;
    ofTrueTypeFont score_font;
    int score;
    
    Player player_1;
    ofImage player_image;
    ofImage enemy_image;
    
    vector<Bullet> bullets;
    ofImage enemy_bullet_image;
    ofImage player_bullet_image;
    
    vector<Enemy> enemies;
    vector<Life> bonuses;
    vector<Explosion> explosions;
    ofImage life_image;
    LevelController level_controller;
    
    ofImage start_screen;
    ofImage end_screen;
    
    float max_enemy_amplitude;
    float max_enemy_shoot_interval;
    float min_exp_radius, max_exp_radius, exp_growth;
    ofColor exp_color;
    
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    void update_bullets();
    void check_bullet_collisions();
    
    void update_bonuses();
    
    void draw_lives();
    void draw_score();
    
    void draw_explosions();
    void update_explosions();
    
};
