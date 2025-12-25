#include <stdio.h>
#include <string.h>
/**
* str_swap:
* input should be char array and not string literal.
* otherwise segmentation fault error will occur.
*/
char* str_swap(char *s, int pos1, int pos2){
    char temp = s[pos1];
    s[pos1] = s[pos2];
    s[pos2] = temp;
    return s;
}
char* str_ordered(char *s){
    return s;
}
char* str_reverse(char *s){
    int n = strlen(s);
    for(int i=0; i<n/2; i++){
        //printf("%c %c\n", s[i], s[n-i-1]);
        str_swap(s,i, n-i-1);
    }
    return s;
}
char* str_reverse_substring(char *s, int start, int end){
    while(start<end){
        char t = s[start];
        s[start++] = s[end];
        s[end--] = t;
    }
    return s;
}
/**source: chat
* Rotation Using Reversal Algorithm (Interview-favorite ⭐)
* This is O(n) and in-place, no extra array.
* abcdef
* ab | cdef
* ba | fedc
* cdefab
*/
char* str_rotate(char *s, int pos){
    int n = strlen(s);
    pos %= n;
    str_reverse_substring(s,0,pos-1);
    str_reverse_substring(s,pos,n-1);
    str_reverse_substring(s,0,n-1);
}

/**
* str-rotate_MINE: Rotate by 'pos' number of positions
* DONT TRUST, NEED TO CHECK
*/
char* str_rotate_MINE(char *s, int pos){
    int n = strlen(s);
    char first=s[0];
    int i=0,j=0;
    for(; i<n; i++){
        if (pos+i<n)
            str_swap(s, i, pos+i);
        else
            str_swap(s, i, n-1);
    }
    printf("%s ", s);
    if (s[n-1] == first && pos !=1){
        printf("%c == %c\n", s[n-1], first);
        str_swap(s, n-1, n-2);
    }
    return s;
}
void main()
{
    char *s="hellow";   // Immutable/Read-only/String Literal
    char str[]="hellow";        // Mutable/Writeable String
    int n = strlen(str);
    char str2[]="hello"; 
    char str3[]="abcde";
    printf("sizeof(n)=%d\n", sizeof(str3));
    printf("strlen(n)=%d\n", strlen(str3));
    printf("strlen = %d\n", n);
    printf("        ip:literal: %s\n", s);
    printf("1. string - ordered: %s\n", str_ordered(s));
    printf("        ip:array  : %s\n", str);
    printf("2. string - reverse: %s\n", str_reverse(str));
    printf("        ip:array  : %s\n", str);
    printf("3. string - swap characters: %s\n", str_swap(str,0,n-0-1));
    printf("        ip:array  : %s\n", str2);
    printf("4. string - rotate: %s\n", str_rotate(str2,2));
    // for(int i=1; i<5; i++)
    int i = 3;
    printf("4. string - rotate - %d: %s\n", i,str_rotate(str3,i));
    // str_reverse_substring(str3, 0, 6);
    printf("2. string - reverse: %s\n", str_reverse_substring(str3, 0, strlen(str3)));

}
