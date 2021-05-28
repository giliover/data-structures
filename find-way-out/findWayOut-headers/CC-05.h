/////////////////////////////----/////////////////////////////----/////////////////////////////----/////////////////////////////
Cartesian* moveMouse(Cartesian* pointReceived, STACK* caminho) {

	int i = mouseLocation(pointReceived, x, y);
	Cartesian* point = (Cartesian*) malloc(2 * sizeof(int));
	Cartesian* pointTmp = point;

	if (pointReceived[i].side.down == 0) {
		maze[x][y] = 0;
		maze[x + 1][y] = 2;
		point->x = x;
		point->y = y;
		x++;
		pushStack(caminho, point);
	} else if (pointReceived[i].side.left == 0) {
		i = mouseLocation(pointReceived, x, y - 1);
		pointReceived[i].side.right = 0;
		maze[x][y] = 0;
		maze[x][y - 1] = 2;
		point->x = x;
		point->y = y;
		y--;
		pushStack(caminho, point);
	} else if (pointReceived[i].side.up == 0) {
		i = mouseLocation(pointReceived, x - 1, y);
		pointReceived[i].side.down = 0;
		maze[x][y] = 0;
		maze[x - 1][y] = 2;
		point->x = x;
		point->y = y;
		x--;
		pushStack(caminho, point);
	} else if (pointReceived[i].side.right == 0) {
		i = mouseLocation(pointReceived, x, y + 1);
		pointReceived[i].side.left = 0;
		maze[x][y] = 0;
		maze[x][y + 1] = 2;
		point->x = x;
		point->y = y;
		y++;
		pushStack(caminho, point);
	}
	return pointTmp;
}