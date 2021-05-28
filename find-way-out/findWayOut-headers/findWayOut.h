//	Header file for stack ADT.
#include <stdlib.h>
#include <stdbool.h>
#include "CC-01.h"		/* Stack ADT Definitions */

/*	ADT Prototype Declarations */
void analyzesNeighbors(Cartesian* pt);
int mouseLocation (Cartesian* pt, int x, int y);
void comparePointWithSide (Cartesian* data, int i, Cartesian* pt);
Cartesian* moveMouse (Cartesian* pt, STACK* caminho);
void analyzesClass (Cartesian* pt, Cartesian* data);
void printMaze ();
STACK* reverseWay (STACK* caminho);
void returnWay (Cartesian* pt, STACK* caminho);

#include "CC-02.h"		/* analyzes neighbors */
#include "CC-03.h"		/* mouse location */
#include "CC-04.h"		/* compare cartesian with side*/
#include "CC-05.h"		/* move mouse */
#include "CC-06.h"		/* analyzes class*/
#include "CC-07.h"		/* print maze */
#include "CC-08.h"		/* inverte way */
#include "CC-09.h"		/* return way */
		