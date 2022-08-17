#include<stdio.h>
#define max 30
void main()
{
    int i, j, tmp, n, p[max], bt[max], wt[max], tat[max];
    float awt = 0, atat = 0;
    printf("Enter the number of process: ");
    scanf("%d", &n);
    printf("Enter the process number: ");
    for(i = 0; i < n; i++){
        scanf("%d", &p[i]);
    }
    printf("Enter the burst time of the process: ");
    for(i = 0; i < n; i++){
        scanf("%d", &bt[i]);
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n-i-1; j++){
            if(bt[j] > bt[j+1]){
                tmp = bt[j];
                bt[j] = bt[j+1];
                bt[j+1] = tmp;

                tmp = p[j];
                p[j] = p[j+1];
                p[j+1] = tmp;
            }
        }
    }
    printf("process\t burstTime\t waitingTime\t turnAroundTime\n");
    for(i = 0; i < n; i++){
        wt[i] = 0;
        tat[i] = 0;
        for(j = 0 ; j < i; j++){
            wt[i] += bt[j];
        }
        tat[i] = wt[i] + bt[i];
        awt += wt[i];
        atat += tat[i];
        printf("%d\t %d\t\t %d\t\t %d\n", p[i], bt[i], wt[i], tat[i]);
    }
    awt /= n;
    atat /= n;
    printf("Average waiting time: %f\n", awt);
    printf("Average Turn around time: %f\n", atat);
}