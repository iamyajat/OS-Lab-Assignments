#include <stdio.h>
int main() {
    int num, bursttime[20], waitingtime[20], turnaroundtime[20],
        avgwaitingtime = 0, avgturnaroundtime = 0, i, j;
    printf("Enter total number of processes (maximum 20):");
    scanf("%d", &num);
    printf("\nEnter Burst Time of all processes:\n");
    for (i = 0; i < num; i++) {
        printf("P%d:", i + 1);
        scanf("%d", &bursttime[i]);
    }
    waitingtime[0] = 0;
    for (i = 1; i < num; i++) {
        waitingtime[i] = 0;
        for (j = 0; j < i; j++) waitingtime[i] += bursttime[j];
    }
    printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");
    for (i = 0; i < num; i++) {
        turnaroundtime[i] = bursttime[i] + waitingtime[i];
        avgwaitingtime += waitingtime[i];
        avgturnaroundtime += turnaroundtime[i];
        printf("\nP%d\t\t%d\t\t%d\t\t%d", i + 1, bursttime[i], waitingtime[i],
               turnaroundtime[i]);
    }
    avgwaitingtime /= i;
    avgturnaroundtime /= i;
    printf("\n\nAverage Waiting Time = %d", avgwaitingtime);
    printf("\nAverage Turnaround Time = %d", avgturnaroundtime);
    return 0;
}