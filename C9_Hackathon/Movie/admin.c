#include <stdio.h>
void main(){
    int choice, flag = 1;
    printf("Enter choice: \n1-update_movie, 2-update_scrinfo\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1: printf("Enter new movie:\n");
        {
            FILE *fp = fopen("movie_list.txt", "a");
            // if(!fp) {printf("file %s can't be opened.\n", "movie_list.txt"); break;}
            int id;
            char name[50];
            char lang[50];
            while(flag){
                printf("ID    NAME     LANG\n");
                scanf("%d %s %s", &id, name, lang);
                fprintf(fp, "%d %s %s", id, name, lang);
                printf("continue? 1/0\n");
                scanf("%d", flag);
            }
            fclose(fp);
        }
        break;
    case 2: printf("Enter screen info:\n");
        {
            FILE *fp = fopen("screen_info.txt", "w");
            // if(!fp) {printf("file %s can't be opened.\n", "screen_info.txt"); break;}
            int n, m, x, y;
            scanf("%d %d %d %d", &n, &m, &x, &y);
            fprintf(fp, "%d %d %d %d", n, m, x, y);
            fclose(fp);            
        }
        break;
    
    default:
        break;
    }
}