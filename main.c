#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "construction.h"
#include <time.h>

int main(){
    srand(time(NULL));
    printf("Modifying a Pokemon's stats\n\n");
    struct Pokemon *first_pokemon = new_pokemon(35, 55, 40, 50, 50 , 90,"Pikachu");
    print_stats(first_pokemon);
    modify_stats(first_pokemon, 60, 90, 55, 90, 80, 110, "Raichu");
    printf("\n");
    print_stats(first_pokemon);

    printf("\nPokemon with random stats:\n\n");
    struct Pokemon *Ditto = new_pokemon(rand()%100+1, rand()%100+1, rand()%100+1, rand()%100+1, rand()%100+1, rand()%100+1, "Ditto");
    print_stats(Ditto);
    struct Pokemon *Darkrai = new_pokemon(rand()%150+1, rand()%150+1, rand()%150+1, rand()%150+1, rand()%150+1, rand()%150+1, "Darkrai");
    printf("\n");
    print_stats(Darkrai);

    printf("\nArceus with one imperfect stat:\n\n");
    struct Pokemon *Arceus = new_pokemon(120, 120, 120, 120, 120, 120, "Arceus");
    int x = rand() % 6;
    if (x == 0){modify_stats(Arceus, rand()%120+1, 120, 120, 120, 120, 120, "Arceus");}
    else if (x == 1){modify_stats(Arceus, 120, rand()%120+1, 120, 120, 120, 120, "Arceus");}
    else if (x == 2){modify_stats(Arceus, 120, 120, rand()%120+1, 120, 120, 120, "Arceus");}
    else if (x == 3){modify_stats(Arceus, 120, 120, 120, rand()%120+1, 120, 120, "Arceus");}
    else if (x == 4){modify_stats(Arceus, 120, 120, 120, 120, rand()%120+1, 120, "Arceus");}
    else {modify_stats(Arceus, 120, 120, 120, 120, 120, rand()%120+1, "Arceus");}
    print_stats(Arceus);

}