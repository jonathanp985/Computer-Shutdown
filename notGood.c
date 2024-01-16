#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

// DO NOT RUN THIS CODE UNDER ANY CIRCUMSTANCES

void delay(int number_of_seconds);

int main()
{
    int n = 5;

    for(int i = 5;i >= 0; i--){
        printf("%d\n",i);
        delay(1); 
        
    }
    system("C:\\Windows\\System32\\shutdown /s /t 0");
    return 0;
}

void delay(int number_of_seconds)
{
    
    int milli_seconds = 1000 * number_of_seconds;
  
    clock_t start_time = clock();
  
    while (clock() < start_time + milli_seconds)
        ;
}