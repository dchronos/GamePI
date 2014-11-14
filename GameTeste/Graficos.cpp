//
//  Graficos.cpp
//  GameTeste
//
//  Created by Luiz Carvalho on 14/11/14.
//  Copyright (c) 2014 Resource. All rights reserved.
//

#include "Graficos.h"

Graficos::Graficos(){
    fundo = Load_Image( "/Users/luizcarvalho/Desktop/organizar/GameTeste/GameTeste/FundoMenu_640.png" );
    if( fundo == NULL )
    {
        printf( "Failed to load PNG image!\n" );
        //success = false;
    }
}

Graficos::~Graficos(){
    
}


//Loading optimazed images
SDL_Surface* Graficos::Load_Image(std::string filename) {
    //Temporary storage for the image that's loaded
    SDL_Surface* loadedImage = NULL; //The optimized image that will be used
    SDL_Surface* optimizedImage = NULL;
    //Load the image
    loadedImage = IMG_Load(filename.c_str());
    if(loadedImage != NULL) {
        //If nothing went wrong in loading the image
        //Create an optimized image
        //optimizedImage = SDL_ConvertSurfaceFormat(loadedImage, <#Uint32 pixel_format#>, <#Uint32 flags#>)
        //optimizedImage = SDL_DisplayFormatAlpha(loadedImage);
        //Free the old image
        //SDL_FreeSurface(loadedImage);
    }
    //Return the optimized image
    return loadedImage;
}