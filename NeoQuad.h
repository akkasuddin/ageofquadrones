#ifndef NEOQUAD_H
#define NEOQUAD_H

#include <ctime>
#include <sys/time.h>
#include "Quadrotor.h"

using namespace std;

#define sqrt2 1.41421356237

enum State{NEUTRAL=1,POWERINGUP,POWEREDUP};

class NeoQuad:public Quadrotor
{
private:
    
    timeval startTime;
    float propAngle;
    float propSpeed;
    bool animate;
    State currentState;
    
    void drawEllipsoid(unsigned int uiStacks, unsigned int uiSlices, float fA, float fB, float fC);
    void drawBlade();
    void drawPropellers(int rotorDirection);
    void rotateProps();
    
public:
  
    NeoQuad();
    void toggleAnimate();
    void drawQuad();
    void changePropSpeed(float increment);
    void powerUp();
    void powerDown();
};

#endif