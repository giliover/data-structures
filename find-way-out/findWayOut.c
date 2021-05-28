# include <stdio.h>
# include <stdlib.h>
# include "stack-headers/stacksADT.h"
# include "findWayOut-headers/findWayOut.h"
# include <unistd.h>

/////////////////////////////----/////////////////////////////----/////////////////////////////----/////////////////////////////
int main() {
	STACK* way;
	way = createStack();
	Cartesian *pointVector, *newPointVector;

	pointVector = malloc(k * sizeof(Cartesian));
	printMaze();
	analyzesNeighbors(pointVector);

	printf("Digite onde vai ficar o rato na matriz: (i, j) \n");
	scanf("%d \n %d", &x, &y);
	while (maze[x][y] != 2) {
		if (x > 9 || y > 9) {
			printf("Digite um ponto (x, y), tal que, (x < 10 e y < 10)\n");
			scanf("%d %d", &x, &y);
		} else if (maze[x][y] == 0) {
			maze[x][y] = 2;
			printMaze();
			analyzesClass(pointVector, newPointVector);
			if (x == sX && y == sY)
				printf("(%d, %d) \n", x, y);
		}
		else {
			printf("Coloque onde esta em branco (0)\n");
			scanf("%d %d", &x, &y);
		}
	}

	int location = mouseLocation(pointVector, x, y);
	Side side = pointVector[location].side;

	if (side.left == 1 && side.right == 1 && side.up == 1 && side.down == 1)
		printf("(%d, %d)", x, y);
	else
		while (x != sX || y != sY) {
			sleep(1);
			system("clear");
			newPointVector = moveMouse(pointVector, way);
			printMaze();
			analyzesClass(pointVector, newPointVector);
			location = mouseLocation(pointVector, x, y);
			if (side.left == 1 && side.right == 1 && side.up == 1 && side.down == 1 && x != sX && y != sY) {
				sleep(1);
				system("clear");
				analyzesNeighbors(pointVector);
				returnWay(pointVector, way);
			}
		}

	way = reverseWay(way);
	printWay(way);

	free(way);
	free(newPointVector);
	free(pointVector);
	return (0);
}