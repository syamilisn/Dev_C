/* TO CREATE MENU */
#include <stdio.h>
#include <string.h>
typedef char string[100];
typedef struct Food{
    int id;
    string name;
    float price;
    int qty;
}dish;

// dish menu[100]; //a menu of hundred dishes
dish menu;  //temporary dish storage
dish list[100];
int count = 0;  //count of dishes
int primkey = 0;    //primary key (ID)
string data = "menu.txt";
string stats = "stats.txt";

void save_data(){
    FILE *database = fopen(stats, "w");
    fprintf(database, "%d %d", count, primkey);
    fclose(database);
}
void reload_data(){
    FILE *database1 = fopen(stats, "r");
    fscanf(database1, "%d %d", &count, &primkey);
    fclose(database1);

    FILE *database2 = fopen(data, "r");
    for(int i=0; i<count; i++){
        fscanf(database2, "%d %s %f %d", &list[i].id, list[i].name , &list[i].price, &list[i].qty);
    }
    fclose(database2);
}
void add_dish(dish menu){
    FILE *database = fopen(data, "a+");
    fprintf(database, "%d %s %.2f %d\n", menu.id, menu.name, menu.price, menu.qty);
    fclose(database);
}

void view_menu(){
    FILE *database = fopen(data, "r");
    dish temp;
    for(int i=0; i<count; i++){
        fscanf(database, "%d %s %f %d", &temp.id, temp.name, &temp.price, &temp.qty);
        if(temp.id != -1)
            printf("%d %s %.2f %d\n", temp.id, temp.name, temp.price, temp.qty);
    }
    fclose(database);
}

void update_menu(){
    FILE *database = fopen(data, "w+");
    for(int i=0; i<count; i++){
        fprintf(database, "%d %s %.2f %d\n", list[i].id, list[i].name, list[i].price, list[i].qty);
    }
    fclose(database);
}

void main(){
    int choice;
    reload_data();
    printf("***HOTEL MANAGEMENT SYSTEM***\n");
    do{
        printf("Enter the choice: 0-exit, 1-add, 2-delete, 3-view\n");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:{
                printf("choice 1: Add dish (Enter name & price).\n");
                if(count < 100){    // only 100 dishes
                    menu.id = primkey++;
                    menu.qty = 0;
                    scanf("%s %f",menu.name, &menu.price);
                    add_dish(menu);
                    count++;
                }
                break;
            }

            case 2:{
                printf("choice 2: Remove dish (Enter dish ID).\n");
                int invalid;
                scanf("%d", &invalid);
                for(int i=0; i < count; i++){
                    if(list[i].id == invalid){
                        list[i].id = -1;    //make invalid dishes id as -1.
                        strcpy(list[i].name, "del");
                        list[i].price = 0;
                        list[i].qty = 0;
                    }
                }
                update_menu();
                count--;
                break;
            }
            case 3:{
                printf("choice 3: View menu.\n");
                view_menu();
                break;
            }
            // case 4:{
            //     printf("View valid dishes list.\n");
            // }
            default:{
                printf("Exit menu!!!\n");
                break;
            }
        }
        
    }while(choice != 0);
    save_data();
}