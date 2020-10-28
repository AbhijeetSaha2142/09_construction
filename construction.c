#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "construction.h"

struct Pokemon * new_pokemon(int h, int a, int d, int sa, int sd, int spd, char * n){
    struct Pokemon *np;
    np = malloc(sizeof(struct Pokemon));

    strncpy(np->name, n, sizeof(np->name)-1);
    np->hp = h;
    np->attack = a;
    np->defense = d;
    np->sp_atk = sa;
    np->sp_def = sd;
    np->speed = sd;
    return np;
}

void print_stats(struct Pokemon * z){
    printf("Pokemon : %s\nHP : %d\nAttack : %d\nDefense : %d\nSp. Atk : %d\nSp. Def : %d\nSpeed : %d\n", z->name, z->hp, z->attack, z->defense, z->sp_atk, z->sp_def, z->speed);
}

void modify_stats(struct Pokemon * z, int h, int a, int d, int sa, int sd, int spd, char * n){
    strncpy(z->name, n, sizeof(z->name)-1);
    z->hp = h;
    z->attack = a;
    z->defense = d;
    z->sp_atk = sa;
    z->sp_def = sd;
    z->speed = sd;
}