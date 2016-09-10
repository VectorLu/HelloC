//用指向字符串的指针数组来存储字符串列表
//test

//terminal test
#include <stdio.h>

const int MAX = 4;

int main() {
    int *char_string[4] = {
        "string_1",
        "string_2",
        "string_3",
        "string_4"
    };
    for(int i=0; i < 4; i++){
        printf("%s\n", char_string[i]);
    }

    return 0;
}
