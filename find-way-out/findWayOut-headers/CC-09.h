/////////////////////////////----/////////////////////////////----/////////////////////////////----/////////////////////////////
void returnWay(Cartesian* point, STACK* way) {
	STACK* tmp = way;
	Cartesian* data = (Cartesian*) malloc(2 * sizeof(int));
	mouseLocation(point, x, y);
	if (tmp != NULL) {
		data = popStack(tmp);
		maze[x][y] = 0;
		maze[data->x][data->y] = 2;
		x = data->x;
		y = data->y;
		printMaze();
		analyzesClass(point, data);
		mouseLocation(point, data->x, data->y);
	}
}