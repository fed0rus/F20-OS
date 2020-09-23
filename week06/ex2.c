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

    int waitingTime[nOfProcesses], turnaroundTime[nOfProcesses], completionTime[nOfProcesses], buffer[nOfProcesses];
    int burstTimeCopy[nOfProcesses];
    double totalWaiting = 0;
    double totalTAT = 0;
    buffer[0] = 0;
    waitingTime[0] = 0;

    for (int i = 0; i < nOfProcesses; i++) {
        burstTimeCopy[i] = burstTime[i];
    }

    int t = -1;
    int processLeft = nOfProcesses;
    while (processLeft > 0) {
        t++;
        int smallest = 1e12;
        int index = nOfProcesses + 1;

        for (int j = 0; j < nOfProcesses; j++) {
            if (burstTimeCopy[j] > 0 && t >= arrivalTime[j] && smallest > burstTimeCopy[j]) {
                smallest = burstTimeCopy[j];
                index = j;
            }
        }

        if (index < nOfProcesses) {
            burstTimeCopy[index]--;
        }

        if (index < nOfProcesses && burstTimeCopy[index] <= 0) {
            processLeft--;
            int terminator = t + 1;
            waitingTime[index] = t + 1 - burstTime[index] - arrivalTime[index];
            turnaroundTime[index] = terminator - arrivalTime[index];
            completionTime[index] = terminator;
        }
    }

    for (int i = 0 ; i < nOfProcesses; i++) {
        totalWaiting += waitingTime[i];
        totalTAT += turnaroundTime[i];
        printf("\nProcess number %d:\n\tArrival time: %d\n\tBurst time: %d\n\tCompletion time: %d\n\tTurnaround time: %d\n\tWaiting time: %d\n", i + 1, arrivalTime[i], burstTime[i], completionTime[i], turnaroundTime[i], waitingTime[i]);
    }

    printf("\n-------------------------\nAverage WT: %f\n", (float)totalWaiting / nOfProcesses);
    printf("Average TAT: %f\n", (float)totalTAT / nOfProcesses);
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
	Completion time: 11
	Turnaround time: 10
	Waiting time: 5

Process number 2:
	Arrival time: 2
	Burst time: 7
	Completion time: 24
	Turnaround time: 22
	Waiting time: 15

Process number 3:
	Arrival time: 6
	Burst time: 6
	Completion time: 17
	Turnaround time: 11
	Waiting time: 5

-------------------------
Average WT: 8.333333
Average TAT: 14.333333
 */

