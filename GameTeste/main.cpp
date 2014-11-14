//
//  main.cpp
//  GameTeste
//
//  Created by Luiz Carvalho on 09/11/14.
//  Copyright (c) 2014 Resource. All rights reserved.
//
/*This source code copyrighted by Lazy Foo' Productions (2004-2013)
 and may not be redistributed without written permission.*/

//Using SDL, SDL_image, standard IO, and strings
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include <stdio.h>
#include <string>
#include "Game.h"


int main( int argc, char* args[] ){
    Game* game_instance = new Game();
    game_instance->Start();
    delete game_instance;
    return 0;
    
}






