//
//  main.c
//  passward
//
//  Created by Naoki Takahashi on 01/11/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void){
    int pass_code;
    char Username[10];
    char My_Username[]="Naoki";
    char Rami_Username[]="Ramihatim";
    char string[] ="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789#@@@@@$";// it is character
    char string_number[] ="0123456789";
    char string_dice[] ="123456";
    int password_length = 5; //length of passward
    printf("<Please enter your name and PIN to log-in>\n");
loop:
    printf("Username:");
    scanf("%s",Username);
    if ((strncmp(Username,My_Username,5) != 0)
        &&(strncmp(Username,Rami_Username,9)!=0)){
        printf("[username is invaild]\n");
        goto loop;
}
    printf("[Username is correct]\n");
loop2:
    printf("PIN:");
    scanf("%d",&pass_code);
    if (pass_code != 8989) {
        printf("[passcode is invaild]\n");
        goto loop2;
}
    printf("[passcode is correct]\n");
    printf("<Specify the number of words>\n");
    printf("\n");
    printf("Number of Passward:");
    scanf("%d", &password_length);
    srand((unsigned int)time(NULL));
    printf("Passward:");
    for(int i=0;i<password_length;i++){
        int index = rand() % strlen(string);
        printf("%c",string[index]);
    }
    printf("\n");
    printf("Number-only passward:");
    for(int i=0;i<password_length;i++){
        int index = rand() % strlen(string_number);
        printf("%c",string_number[index]);
    }
    printf("\n");
    printf("<Only one passward is displayed>\n");
    printf("\n");
    printf("Dice type passward:");
        int index = rand() % strlen(string_dice);
        printf("%c",string_dice[index]);
    

    printf("\n");
    return 0;
}

