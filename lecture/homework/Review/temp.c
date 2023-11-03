#include <stdio.h>

typedef struct {
   int month, day, year;
} date;

typedef struct {
   int hour, minutes, seconds;
} time;

typedef struct {
   date sdate;
   time stime;
} dateAndTime;

int main() {
	dateAndTime event;
	event.stime.seconds = 0;
	event.sdate.month = 10;
	printf("\n%d\n", event.sdate.month);
	event.stime.seconds = event.stime.seconds + 1;
	printf("%d\n", event.stime.seconds);

	return 0;
}
