#include <stdio.h>

void show_board(char* board) {
//	printf(" A B C");
//
//	printf("\n1|");
//	printf("%c|", board[0]);
//	printf("%c|", board[1]);
//	printf("%c|", board[2]);
//	printf("\n2|");
//	printf("%c|", board[3]);
//	printf("%c|", board[4]);
//	printf("%c|", board[5]);
//	printf("\n3|");
//	printf("%c|", board[6]);
//	printf("%c|", board[7]);
//	printf("%c|", board[8]);
//
//	printf("\n\n\n\n\n");

	printf("  A B C");
	for (int j = 0; j < 3; j++) {
		printf("\n%d|", j + 1);
		for (int i = 0; i < 3; i++) {
			printf("%c|", board[i + j * 3]);
		}
	}
}

char get_input() {
	printf("What column do you want to play in? (A-C): ");
	char column;
	scanf("%c", &column);

	printf("What row do you want to play in? (1-3): ");
	char row;
	scanf("%c", &row);

	
}

int main() {
	char board[] = {
		'X', 'O', ' ',
		' ', 'O', 'X',
		' ', 'X', ' '
	};

	show_board(board);
}
