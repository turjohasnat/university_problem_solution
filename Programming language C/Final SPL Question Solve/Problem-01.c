#include<stdio.h>

void removeSpecialCharacters(char str[]);
char changeAlphabet(char alphabet);
void encoder(char *p);

int main(){
    char str[100];
    gets(str);

    encoder(str);
    puts(str);
    return 0;
}

void removeSpecialCharacters(char str[]){
    for( int i = 0; str[i] != 0; i++ ){
        if(!((str[i] >= 'A' && str[i] <= 'Z')||(str[i] >= 'a' && str[i] <= 'z'))){
            str[i] = ' ';
        }
    }
}

char changeAlphabet(char alphabet){
    if(alphabet >= 'A' && alphabet <= 'Z'){
        return 'Z' - (alphabet - 'A');
    }
    if(alphabet >= 'a' && alphabet <= 'z'){
        return 'z' - (alphabet - 'a');
    }
}

void encoder(char *p){
    removeSpecialCharacters(p);
    for( int i = 0; p[i] != 0; i++ ){
        p[i] = changeAlphabet(p[i]);
    }
}
