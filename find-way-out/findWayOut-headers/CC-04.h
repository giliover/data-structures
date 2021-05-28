/////////////////////////////----/////////////////////////////----/////////////////////////////----/////////////////////////////
void compareCartesianWithSide(Cartesian* data, int i, Cartesian* point) { // i =  índice onde o rato está localizado no point

	if (point[i].y == data->y) {
		if (point[i].x < data->x)
			point[i].side.down = 1;
		else
			point[i].side.up = 1;
	} else if (point[i].x == data->x) {
		if (point[i].y < data->y)
			point[i].side.right = 1;
		else
			point[i].side.left = 1;
	}

}