#include <stdio.h>

int main(){
	int h,m,s = 0; //hour, minute, second
	scanf("%d:%d:%d", &h, &m, &s);
	(h<0)?h=0:0;
	(h>23)?h=23:0;
	(m<0)?m=0:0;
	(m>59)?m=59:0;
	(s<0)?s=0:0;
	(s>59)?s=59:0;
	
	int time = (h*60+m)*60+s; //cumulated time
	printf("Hour:%d\nMinute:%d\nsecond:%d\n", (time/3600)%24,(time%3600)/60,time%60); //first print
	
	printf("Next minutes: ");
	scanf("%d", &m);
	(m<0)?m=0:0;
	(m>120)?m=120:0;
	time = time + 60*m;
	
	(time>24*60*60)? printf("Next Day\n"):0;
	printf("Hour:%d\nMinute:%d\nsecond:%d\n", (time/3600)%24,(time%3600)/60,time%60); //second print
}
