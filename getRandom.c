#include <time.h>
#include <stdlib.h>

int *getRandom(){
    static int random [10];
    srand((unsigned)time(NULL));
    
    for(int i = 0; i < 10; i++){
        random[i] = rand();
        printf("%d\n", random[i]);
    }
    return random;
}

int main ()
{
    int *random_pointer = getRandom();
    for(int i=0; i < 10; i++){
        printf("*(random_pointer + [%d]) is %d\n", i, *(random_pointer + i));
    }
    return 0;
}
