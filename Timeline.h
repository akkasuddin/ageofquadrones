/******************************************************************
 * Name   : Timeline.h
 * Purpose: Responsible for the getting keyframe information from Timeline.txt
 * 
 * Author: Akkas Uddin Haque
 * Email : akkasuddin@live.com
 *
 * Creation Date: 09/19/2015
 *******************************************************************/
#ifndef _TIMELINE_
#define _TIMELINE_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Timeline
{
    //string tags;
    private:
        char commands[100][256];
    
    public:
        int currentCommand;
        int numCommands;
        Timeline(char* tag);
        char* readNextCommand();
        void displayLines();
        ~Timeline();
    

};
#endif