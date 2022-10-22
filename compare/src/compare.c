#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum{
	START_S = 0,
	MID_S = 1,
	STOP_S = 2,
}State;
typedef struct{
	State s;

}Display;
typedef void *(*StateFunc)();
void *start_p();
void *mid();
void *stop();

Display dis;

void *start_p(int start, Display display){
	if(start > 0){
		display.s = START_S;

			return mid(start, display);
	}
	else{
		return start_p;
	}


}

void *mid(int start, Display display){
	if (start >0){
		display.s = MID_S;
			return stop(start, display);
	}
	else{
		return mid;
	}

}

void *stop(int start,Display display){
	if(start > 0){
		start = -1;
		display.s = STOP_S;
		dis = display;

		return (void *)0;
	}
	else{
		return stop;
	}
}

int main(void) {


	StateFunc statefunc = start_p;
	int start = 1;
	Display display;
	while (start > 0) {
		statefunc = (StateFunc) (*statefunc)(start, display);
		printf("%d",dis.s);
		if(dis.s == STOP_S){
			start = -2;
		}
	}


	return EXIT_SUCCESS;
}
