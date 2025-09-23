#include <stdio.h>
typedef struct Anime
{
    int id;
    char name[50];
    char series[50];
}anime;

void main(){
    anime list[5];
    list[0] = (anime){1, "Inuyasha", "Inuyasha"};
    list[1] = (anime){2, "Kagome", "Inuyasha"};
    FILE *fp = fopen("anime.txt", "w");
    fwrite(&list, sizeof(anime), 2, fp);
    fclose(fp);
    printf("");
}