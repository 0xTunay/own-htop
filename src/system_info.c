#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "system_info.h"

void info_cpu(CpuInfo *cpu){
    FILE *statCPU;
    int oldNumbers[7];
    int newNumbers[7];
    int diffNumbers[7];
    char CPU[10];
    statCPU = fopen("/proc/stat", "r");

    if(statCPU == NULL){
        perror("file not open");
        exit(EXIT_FAILURE);
    }
    fscanf(statCPU,
            "%s %d %d %d %d %d %d %d",
            CPU,
            &oldNumbers[0], 
            &oldNumbers[1],
            &oldNumbers[2],
            &oldNumbers[3],
            &oldNumbers[4],
            &oldNumbers[5],
            &oldNumbers[6]);

    sleep(1);
    rewind(statCPU);

    fclose(statCPU);
}
void info_memory(MemInfo *memory){
    FILE *statRAM;
    int oldNumbers[7];
    int newNumbers[7];
    int diffNumbers[7];
    char RAM[10];

    statRAM = fopen("/proc/meminfo", "r");
    if(statRAM == NULL){
        perror("file not open");
        exit(EXIT_FAILURE);
    }
    fscanf(statRAM,
            "%s %d %d %d %d %d %d %d %d %d",
            RAM,
            &oldNumbers[0],
            &oldNumbers[1],
            &oldNumbers[2],
            &oldNumbers[3],
            &oldNumbers[4],
            &oldNumbers[5],
            &oldNumbers[6],
            &oldNumbers[7]

          );
    sleep(1);

    rewind(statRAM);

    fclose(statRAM);

}
