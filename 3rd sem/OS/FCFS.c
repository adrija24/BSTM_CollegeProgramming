#include<stdio.h>
#define max 30
void main() {
    int i, n, j, bt[max], wt[max], tat[max];
    float awt = 0, atat = 0;
    printf("enter the number of process: ");
    scanf("%d", &n);
    printf("enter the burst time of the process: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &bt[i]);
    }
    printf("process\t burstTime\t waitingTime\t trun around time\n");
    for(int i = 0; i < n; i++)
    {
        wt[i] = 0;
        tat[i] = 0;
        for(int j = 0; j < i; j++)
        {
            wt[i] += bt[j];
        }
        tat[i] = wt[i] + bt[i];
        awt += wt[i];
        atat += tat[i];
        printf("%d\t %d\t\t %d\t\t %d\n", i+1, bt[i], wt[i], tat[i]);
    }
    awt /= n;
    atat /= n;
    printf("Average wating time : %f\n", awt);
    printf("Average turn around time : %f\n", atat);
    
}