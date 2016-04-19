//simulate to deal a deck(52 cards)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int wDeck[4][13]);
void deal(int wDeck[4][13], char *wFace[13], char *wSuit[4]);

int main(){
    char *wSuit[4]={"Hearts","Diamonds","Clubs","Spades"};
    
    char *wFace[13]={"Ace","Deuce","Three","Four",
        "Five","Six","Seven","Eight",
        "Nine","Ten","Jack","Queen","King"};
    
    int wDeck[4][13]={0};

    srand(time(NULL));

    shuffle(wDeck);
    deal(wDeck, wFace, wSuit);

    printf("\n");   
    return 0;
}

void shuffle(int wDeck[4][13]){
	int r;
	int card, row, column;
	for(card = 1; card <= 52; card++){
		r = rand();
		row = r % 4;
		r = rand();
		column = r % 13;

		while(wDeck[row][column] != 0){
			r = rand();
			row = r % 4;
			r = rand();
			column = r %13;
		}

		wDeck[row][column] = card;
	}
}

void deal(int wDeck[4][13], char *wFace[13], char *wSuit[4]){
	char c;
	int card, row, column;

	for(card=1; card<=52; card++){
		for(row=0; row<4; row++){
			for(column=0; column<=12; column++){
				if(wDeck[row][column]==card){
					if(card%3==0){
						c = '\n';
					}else{
						c = '\t';
					}
				printf(" %5s of %-8s%c", wFace[column], wSuit[row],c);
			}
		}
		}
	}
}
