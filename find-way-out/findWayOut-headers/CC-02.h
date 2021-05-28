/*Analiza todos pontos(x, y) da estrura Ponto em relação aos vizinhos, colocando zero(0),
reprezentando que tem passagem pro vizinho, e um(1), representando que não tem passagem logicamente*/
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