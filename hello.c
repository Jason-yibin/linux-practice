#include<stdio.h>
#include<unistd.h>
#define MAX 101
#define total 1024
#define speed 100
char* car="|/-\\";
void print1(double t, double now) {
    int ret=(now/t*100);
    char bar[MAX]={0};
    for(int i=0;i<ret;i++) {
        bar[i]='#';
    }
    printf("%-100s [%d%%][%c]\r", bar, ret,car[ret%4]);
    fflush(stdout);
}
int main() {
    int now=0;
    while(now<1024) {
        now+=speed;
        print1(total, now);
        usleep(100000);
    }
    printf("\n");
    return 0;
}