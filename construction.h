struct Pokemon{
    char name[256];
    int hp;
    int attack;
    int defense;
    int sp_atk;
    int sp_def;
    int speed;
};

struct Pokemon * new_pokemon(int h, int a, int d, int sa, int sd, int spd, char * n);

void print_stats(struct Pokemon *x);

void modify_stats(struct Pokemon *x, int h, int a, int d, int sa, int sd, int spd, char * n);