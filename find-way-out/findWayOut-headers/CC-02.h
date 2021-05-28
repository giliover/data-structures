/*Analyzes all points (x, y) of the Ponto structure in relation to its neighbors.
Reprententa with zero (0) if you have a ticket to the neighbor, and one (1), if you don't have a ticket */
void analyzesNeighbors(Cartesian* point) {
	int x = 0;
	for (int i = 1; i < l; ++i) {
		for (int j = 1; j < c; ++j) {
			if (j - 1 == 0) {
				point[x].side.left = 1;
				point[x].side.right = maze[i][j + 1];
				point[x].x = i;
				point[x].y = j;
			}
			else {
				point[x].side.left = maze[i][j - 1];
				point[x].side.right = maze[i][j + 1];
				point[x].x = i;
				point[x].y = j;
				if (j == c - 1) {
					point[x].side.right = 1;
					point[x].x = i;
					point[x].y = j;
				}

			}

			if ( i - 1 == 0) {
				point[x].side.up = 1 ;
				point[x].side.down = maze[i + 1][j];
			}
			else {
				point[x].side.down = maze[i + 1][j];
				point[x].side.up = maze[i - 1][j];
				if (i == l - 1) {
					point[x].side.down = 1;
				}
			}
			x++;
		}
	}
}