/******************************************************************
 * Name   : Time.h
 * Purpose: Header File for NeoQuad
 * 
 * Author: Akkas Uddin Haque
 * Email : akkasuddin@live.com
 *
 * Creation Date: 09/19/2015
 *******************************************************************/

#ifndef _QUADTIMER_
#define _QUADTIMER_

#include <ctime>
#include <sys/time.h>


class QuadTimer
{
    double time;
    static double StartTime;
    static double ProcessTime;
    static int fps;
public:

    QuadTimer();
    // Gets the time elapsed since the last function call.
    // Useful for animations that involve time. 
    // Usage: timeDifference = ti.getTimeDiffSec();
    double getTimeDiffSec();
    
    static void updateProcessTime();
    // Gets the time since call to initTimer().
    // Used to keep track of the time since the program has been running.
    static double GetProcessTime();
    
    // Gets the current system time in seconds since epoch
    static double GetCurrentSystemTime();
    
    static void initializeTimer(double seconds = 0);
};

#endif