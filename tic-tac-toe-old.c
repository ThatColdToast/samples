#include <stdio.h>
#include <stdbool.h>

int main()
{
	bool playing = true;
	while (playing)
	{
		// Get Number of rounds
		printf("How many rounds of tic tac toe do you want to play? (number): ");
		int rounds = 0;
		scanf("%d", &rounds);

		for(int r = 0; r < rounds; r++)
		{
			// Create Board
			// 0 => blank
			// 1 => X
			// 2 => O
			int board[] =
			{
				0, 0, 0,
				0, 0, 0,
				0, 0, 0
			};

			bool in_game = true;
			char turn = 'X';
			while (in_game)
			{
				// Show Board
				printf("  A B C\n");
				for (int j = 0; j < 3; j++)
				{
					printf("%d|", j+1);
					for (int i = 0; i < 3; i++)
					{
						char name;
						if (board[i + j * 3] == 0) {
							name = ' ';
						} else if (board[i + j * 3] == 1) {
							name = 'X';
						} else if (board[i + j * 3] == 2) {
							name = 'O';
						} else {
							// error
						}

						printf("%c|", name);
					}
					printf("\n");
				}

				// Get Input
				while (true)
				{
					printf("It is %c's turn, where would you like to play? (eg. A1): ", turn);
					char input[3];
					int error = scanf("%2s", &input);
					// todo: fix overflow
					// todo: handle errors
					// todo: add to board
					break;
				}

				// Check Win


				if (turn == 'X') turn = 'O';
				else if (turn == 'O') turn = 'X';
			}
		}

		printf("You have played %d rounds, do you wish to continue? (y/n): ", rounds);
		char input;
		scanf("%c", &input);
		if (input == 'n')
		{
			playing = false;
		}
	}
}
