//
//  Game.h
//  GameTeste
//
//  Created by Luiz Carvalho on 13/11/14.
//  Copyright (c) 2014 Resource. All rights reserved.
//

#ifndef __GameTeste__Game__
#define __GameTeste__Game__

#include <stdio.h>
#include <SDL2_image/SDL_image.h>

#include "Graficos.h"

class Game {
public:
    //Screen dimension constants
    const int SCREEN_WIDTH = 800;
    const int SCREEN_HEIGHT = 600;
    
    Graficos *graficos;
    //Attributes
    
    //The window we'll be rendering to
    SDL_Window* janela = NULL;
    
    //The surface contained by the window
    SDL_Surface* gScreenSurface = NULL;
    
    //Current displayed PNG image
    SDL_Surface* gPNGSurface = NULL;
    SDL_Surface* gPNGSurface2 = NULL;
    
    //Constructors - Destructors
    Game();
    virtual ~Game();
    //Methods
    void Start();
    void GotoMenu();
private:

};

#endif /* defined(__GameTeste__Game__) */
