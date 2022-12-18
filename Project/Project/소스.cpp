#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int hour, minute, time;
	scanf("%d%d%d", &hour, &minute, &time);
	minute = minute + time;
	if (minute >= 60)
		while (minute >= 60) {
			hour++;
			minute = minute - 60;
		}
	if (hour >= 24)
		hour = hour - 24;
	printf("%d %d", hour, minute);
	return 0;
}