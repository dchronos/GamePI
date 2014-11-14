//
//  Game.cpp
//  GameTeste
//
//  Created by Luiz Carvalho on 13/11/14.
//  Copyright (c) 2014 Resource. All rights reserved.
//

#include "Game.h"

Game::Game() {
    //Init the game
    //Start SDL
    //Initialize SDL
    if( SDL_Init( SDL_INIT_EVERYTHING ) < 0 )
    {
        printf( "SDL could not initialize! SDL Error: %s\n", SDL_GetError() );
        //success = false;
    }
}
Game::~Game() {
    //Return the resources from SDL.
    SDL_Quit();
}
void Game::Start() {
    //Create window
    janela = SDL_CreateWindow( "SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
    if( janela == NULL )
    {
        printf( "Window could not be created! SDL Error: %s\n", SDL_GetError() );
        //success = false;
    }
    else
    {
        //Initialize PNG loading
        int imgFlags = IMG_INIT_PNG;
        if( !( IMG_Init( imgFlags ) & imgFlags ) )
        {
            printf( "SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError() );
            //success = false;
        }
        else
        {
            //Get window surface
            gScreenSurface = SDL_GetWindowSurface( janela );
        }
        graficos = new Graficos();
        GotoMenu();
    }
    

}
void Game::GotoMenu() {
    
    //Main loop flag
    bool quit = false;
    
    //Event handler
    SDL_Event e;
    
    //While application is running
    while( !quit ){
        //Handle events on queue
        while( SDL_PollEvent( &e ) != 0 ){
            //User requests quit
            if( e.type == SDL_QUIT ){
                quit = true;
            }
        }
        
        //Apply the PNG image
        SDL_BlitSurface( graficos->fundo, NULL, gScreenSurface, NULL );
        //SDL_BlitSurface( gPNGSurface2, NULL, gScreenSurface, NULL );
        
        //Update the surface
        SDL_UpdateWindowSurface( janela );
    }
}