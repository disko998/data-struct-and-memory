#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

 char *p = malloc(4);
 p[0] = 'H';
 p[1] = 'i';
 p[2] = '!';
 p[3] = '\0';

 free(p);

 printf("%s\n", *&p);

 // string s = "hi stefan!";
 // int i;

 // for(i = 0; i<100000; i++) {
 //    int c = s[i];

 //    if (c == 0) {
 //     if(s[i-1] != 0) {
 //         printf(" ");
 //     }
 //     continue;
 //    }

 //    printf("%c", c);

 // }

}

// 255,255,255 === #ffffff === 111111111111111111111111
// 3,3,3 === #030303 === 00110000001100000011
// 84,84,84 === #545454
// 72,73,33 === #484921