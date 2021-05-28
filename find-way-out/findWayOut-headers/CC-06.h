/////////////////////////////----/////////////////////////////----/////////////////////////////----/////////////////////////////
void analyzesClass(Cartesian* point, Cartesian* data) {
	int currentLocation = mouseLocation(point, x, y);
	Side side = point[currentLocation].side;
	if (data != NULL)
		compareCartesianWithSide(data, currentLocation, point);
	if (x == sX && y == sY )
		printf("\t\t\t| Mouse output found at the point ( %d, %d )\t |", x, y);
	else if (side.left == 0 ^ side.right == 0 ^ side.up == 0 ^ side.down == 0)
		printf("\t\t\t| The point (%d, %d) has 2 or more passes\t |", x, y);
	else if (side.left == 0 || side.right == 0 || side.up == 0 || side.down == 0)
		printf("\t\t\t| The point (%d, %d) has a passage\t |", x, y);
	else {
		printf("\t\t\t| The point (%d, %d) dead end |", x, y);
	}
	printf("\n");
	//printf("\n%d, %d, %d, %d\n",side.left ,side.right, side.up, side.down);
}