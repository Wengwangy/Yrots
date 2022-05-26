#include <stdio.h>
#include <unistd.h>

int main() {
    printf("A story no one remembers...\n");
    sleep(2);
    printf("But that will soon change...\n");
    sleep(2);
    printf("as you were chosen as a writer and so...\n");
    sleep(2);
    printf("you will fill the void and create a story...\n");
    sleep(2);
    printf("that will be remembered forever...\n");
    sleep(3);
    printf("But first input your name, date of birth, bank information, your first pet's name, your favourite color and stuff like that...\n");
    char name[100];
    char dob[100];
    char bank[100];
    char pet[100];
    char color[100];
    scanf("%s %s %s %s %s", name, dob, bank, pet, color);
    printf("%s %s %s %s %s", name, dob, bank, pet, color);

    return 0;
}
