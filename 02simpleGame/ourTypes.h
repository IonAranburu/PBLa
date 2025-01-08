#ifndef OURTYPES_H
#define OURTYPES_H
#include "ebentoak.h"
#include <stdbool.h>

typedef enum
{
    JOLASTEN,
    GALDU,
    IRABAZI
} EGOERA;
typedef enum
{
    IRUDIA,
    MARGOA,
    TESTUA
} MOTA;

typedef struct
{
    POSIZIOA pos;
    int id;
    MOTA mota;
} JOKO_ELEMENTUA;

// Estructura del cubo
typedef struct
{
    int x, y;
    int dx, dy;
    bool onGround;
} Cube;

// Estructura de la plataforma
typedef struct
{
    int x, y;
    int width, height;
} Platform;

typedef struct
{
    SDL_Renderer *renderer;
    SDL_Window *window;
} App;

#endif