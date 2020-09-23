#include <stdio.h>


int main() {
    int nOfProcesses;
    printf("Enter the number of processes:\n");
    scanf("%d", &nOfProcesses);

    int arrivalTime[nOfProcesses];
    int burstTime[nOfProcesses];
    int quantum;
    printf("Enter the arrival time and the burst time of each process:\n");
    for (int i = 0; i < nOfProcesses; i++) {
        scanf("%d %d", &arrivalTime[i], &burstTime[i]);
    }
    printf("Enter the time quantum: ");
    scanf("%d",&quantum);

    int waitingTime[nOfProcesses], turnaroundTime[nOfProcesses], completionTime[nOfProcesses];
    int burstTimeCopy[nOfProcesses];
    int counter = 0;
    double totalWaiting = 0;
    double totalTAT = 0;
    waitingTime[0] = 0;

    for (int i = 0 ; i < nOfProcesses; i++) {
        burstTimeCopy[i] = burstTime[i];
    }

    int a = nOfProcesses;
    double allWaitingTime = 0, allTurnaroundTime = 0;

    for (int tmp = 0, i = 0; a != 0; ) {
        if ( burstTimeCopy[i] > 0 && burstTimeCopy[i] <= quantum) {
            tmp += burstTimeCopy[i];
            burstTimeCopy[i] = 0;
            counter = 1;
        } else if (burstTimeCopy[i] > 0) {
            burstTimeCopy[i] = burstTimeCopy[i] - quantum;
            tmp += quantum;
        }

        if (counter == 1 && burstTimeCopy[i] == 0) {
            waitingTime[i] = tmp - arrivalTime[i] - burstTime[i];
            turnaroundTime[i] = tmp - arrivalTime[i];
            completionTime[i] = tmp;
            allWaitingTime = allWaitingTime + waitingTime[i];
            allTurnaroundTime = allTurnaroundTime + turnaroundTime[i];
            counter = 0;
            a--;
        }

        if (i == nOfProcesses - 1) {
            i = 0;
        } else if (arrivalTime[i + 1] <= tmp) {
            i++;
        } else {
            i = 0;
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
 * 2
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
	Completion time: 16
	Turnaround time: 14
	Waiting time: 7

Process number 3:
	Arrival time: 6
	Burst time: 6
	Completion time: 18
	Turnaround time: 12
	Waiting time: 6

-------------------------
Average WT: 6.000000
Average TAT: 12.000000
 */
