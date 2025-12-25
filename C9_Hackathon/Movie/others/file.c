#include <stdio.h>
struct colors{
    int id;
    char name[100];
};
void main(){
    FILE *fp = fopen("colors.csv", "a");
    struct colors c1= {.id = 1, .name = "red"};
    struct colors c2= {.id = 2, .name = "blue"};
    struct colors c3= {.id = 3, .name = "green"};
    printf("%d %s", 1, "me"); 

    fprintf(fp, "%d %s\n", c1.id, c1.name);
    fprintf(fp, "%d %s\n", c2.id, c2.name);
    fprintf(fp, "%d %s\n", c3.id, c3.name);
    fclose(fp);
}