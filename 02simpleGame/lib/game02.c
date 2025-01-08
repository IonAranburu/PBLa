#include "game02.h"
#include "ebentoak.h"
#include "graphics.h"
#include "imagen.h"
#include "soinua.h"
#include "text.h"
#include <stdio.h>

#define MAX_TILES 8
#define TILE_SIZE 64

#define MAP_WIDTH 40
#define MAP_HEIGHT 20

#define MAP_RENDER_WIDTH 20
#define MAP_RENDER_HEIGHT 12

EGOERA JOKOA_egoera(JOKO_ELEMENTUA jokalaria, JOKO_ELEMENTUA oztopoa);

void jokoaAurkeztu(void)
{
    int ebentu = 0;

    pantailaGarbitu();
    pantailaBerriztu();
}
void doInput(void)
{
    SDL_Event event;

    while (SDL_PollEvent(&event))
    {
        switch (event.type)
        {
        case SDL_QUIT:
            exit(0);
            break;

        default:
            break;
        }
    }
}
