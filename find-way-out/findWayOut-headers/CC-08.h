/////////////////////////////----/////////////////////////////----/////////////////////////////----/////////////////////////////
STACK* reverseWay (STACK* way)
{
	STACK* aux;
	aux = createStack();
	Cartesian* data = (Cartesian*) malloc(2 * sizeof(int));

	while (way->count > 0) {
		data = popStack(way);
		pushStack(aux, data);
	}
	return aux;
}