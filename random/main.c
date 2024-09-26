#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main()
{
	int fin = 0;
	int menu = 0;

	while(menu != 1)
	{
		int count = 0;

		srand(time(NULL));
		int random = rand() % 100 + 1;
		int approxInf = random - 3;
		int approxSup = random + 3;

		int jouer,input;

		printf("Magic number, trouver le nombre inclu entre 1 et 100!\nJouer: 1\nQuitter: 2\n");
		scanf("%d", &jouer);

		if (jouer == 2)
		{
			printf("Fin du jeu\n");
			exit(0);
		}
		else if((jouer != 0)&&(jouer != 1)&&(jouer != 10))
		{
			printf("Erreur, choisir entre 1 et 0\n");
		}
		else if((jouer == 1)||(jouer == 10))
		{
			if(jouer == 10)
			{
				printf("Debug mode, le nombre est: %d\n", random);
			}
			
			while (fin != 1)
			{
				printf("Choisissez un nombre entre 1 et 100: \n");
				scanf("%d", &input);


				if((count >= 3)&&(input != random))
				{
					if(input < random)
					{
						printf("C'est plus! %d essaie, un indice pour aider: les nombres mystère est entre %d et %d\n", count, approxInf,approxSup);
					}
					else if(input > random)
					{
						printf("C'est moins! %d essaie, un indice pour aider: les nombres mystère est entre %d et %d\n", count, approxInf,approxSup);
					}
				}
				else if (input < random)
				{
					printf("C'est plus!\n");
					count =  count + 1;
					printf("%d", count);
				}
				else if(input > random)
				{
					printf("C'est moins!\n");
					count = count + 1;
				}

				else if(input == random)
				{
					printf("Gagné!\n");
					fin = 1;
				}
			}
		}
		menu = 0;
		
	}

	exit(0);
}