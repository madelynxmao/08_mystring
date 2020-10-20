#include "mystring.h"

//strlen
int mystrlen( char *s ){ //*s points to mem location of s
    int i = 0;
    while (*s){
        i++;
        s++;
    }
    return i;
}

//strcpy
char * mystrcpy( char *dest, char *source ){
    char *ans = dest;
    while(*source){
        *dest = *source;
        source++;
        dest++;
    }
    *dest = '\0'; //end
    return ans;
}

//strcat
char * mystrcat( char *dest, char *source ){
    mystrcpy(dest + mystrlen(dest), source);
    return dest;
}

//strcmp
int mystrcmp( char *s1, char *s2 ){
    while(*s1 == *s2){
        if (*s1 == '\0') return 0;
        s1++;
        s2++;
    }
    if (*(unsigned char *)s1 < *(unsigned char*)s2){
        return -1;
    }
    else{
        return 1;
    }

}
//strchr 
char * mystrchr( char *s, char c ){
    while(++s){
        if (*s == c){
            return (char *)s;
        }
        if(*s == '\0'){
            return " ";
        }
    }
    return " ";
}