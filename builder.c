#include <stdio.h>
#include <string.h>

typedef struct{
    char name[30];
    float weight;
    float ergo;
    float recoil;
    int gunID;
} Mod;

typedef struct{
    char name[30];
    int id;
    float weight;
    float ergo;
    float recoil;
} Gun;