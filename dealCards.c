#include <stdio.h>
#include <time.h>

void shuffle(int wDeck[4][13]);
void deal(int wDeck[4][13], char wSuit[4], char *wFace);

int main(int argc, char const *argv[])
{
    char wSuit[4] = {'\x3', '\x4', '\x5', 'x6'};
    char wFace[13] = {
        "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten",
        "Jake", "Queen", "King"
    };
    
    int wDeck [4][13] = {0};
    shuffle(wDeck);
    deal(wDeck, wSuit, wFace);
    
    return 0;
}

void shuffle(int wDeck[4][13]){
    int random;
    int card, row, column;
    
    for(card=1; card<=52; card++){
        random = rand();
        row = random % 4;
        printf("%d ", row);
        
    }
}
