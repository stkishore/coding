#include<bits/stdc++.h>

void initialise(char board[][side],int moves[])
{
	srand(time(NULL));
	for(int i=0;i<side;i++)
		
		{
			for(int j=0;j<side;j++)
			{
				board[i][j]=' ';
			}
		}
		for(i=0;i<side*side;i++)
			moves[i]=i;
		random_shuffle(moves,moves+sidee*side);
}

tictactoe(int whoseturn)
{
	char board[side][side];
	int moves[side*side];
	initialise(board,moves);
	showinstructions();
	
	

int main()
{
	tictactoe(computer);
return 0;
	}
