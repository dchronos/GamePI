//
//  Graficos.h
//  GameTeste
//
//  Created by Luiz Carvalho on 14/11/14.
//  Copyright (c) 2014 Resource. All rights reserved.
//

#ifndef __GameTeste__Graficos__
#define __GameTeste__Graficos__

#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include <string>

class Graficos {
public:
    //Attributes
    SDL_Surface* fundo;
    //SDL_Surface*
    
    //Constructors - Destructors
    Graficos();
    virtual ~Graficos();
    //Methods
private:
    SDL_Surface* Load_Image(std::string filename);
    
};

#endif /* defined(__GameTeste__Graficos__) */
