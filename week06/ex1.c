#include <stdio.h>


int main() {
    int nOfProcesses;
    printf("Enter the number of processes:\n");
    scanf("%d", &nOfProcesses);

    int arrivalTime[nOfProcesses];
    int burstTime[nOfProcesses];
    printf("Enter the arrival time and the burst time of each process:\n");
    for (int i = 0; i < nOfProcesses; i++) {
        scanf("%d %d", &arrivalTime[i], &burstTime[i]);
    }

    int waitingTime[nOfProcesses], turnaroundTime[nOfProcesses], buffer[nOfProcesses];
    int totalWaiting = 0;
    int totalTurnaroundTime = 0;
    buffer[0] = 0;
    waitingTime[0] = 0;

    for (int i = 1; i < nOfProcesses; i++) {
        buffer[i] = buffer[i - 1] + burstTime[i - 1];
        waitingTime[i] = buffer[i] - arrivalTime[i];
        if (waitingTime[i] < 0) {
            waitingTime[i] = 0;
        }
    }

    for (int i = 0; i < nOfProcesses; i++) {
        turnaroundTime[i] = burstTime[i] + waitingTime[i];
    }

    for (int i = 0 ; i < nOfProcesses; i++) {
        totalWaiting += waitingTime[i];
        totalTurnaroundTime += turnaroundTime[i];
        int completionTime = turnaroundTime[i] + arrivalTime[i];
        printf("\nProcess number %d:\n\tArrival time: %d\n\tBurst time: %d\n\tCompletion time: %d\n\tTurnaround time: %d\n\tWaiting time: %d\n", i + 1, arrivalTime[i], burstTime[i], completionTime, turnaroundTime[i], waitingTime[i]);
    }

    printf("\n-------------------------\nAverage WT: %f\n", (float)totalWaiting / nOfProcesses);
    printf("Average TAT: %f\n", (float)totalTurnaroundTime / nOfProcesses);
    return 0;
}

/*
 * Input:
 * 3
 * 1 5
 * 2 7
 * 6 6
 * ---------
 * Output:
Process number 1:
	Arrival time: 1
	Burst time: 5
	Completion time: 6
	Turnaround time: 5
	Waiting time: 0

Process number 2:
	Arrival time: 2
	Burst time: 7
	Completion time: 12
	Turnaround time: 10
	Waiting time: 3

Process number 3:
	Arrival time: 6
	Burst time: 6
	Completion time: 18
	Turnaround time: 12
	Waiting time: 6

-------------------------
Average WT: 3.000000
Average TAT: 9.000000
 */
