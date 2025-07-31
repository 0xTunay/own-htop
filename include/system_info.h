#ifndef SYSTEM_INFO_H
#define SYSTEM_INFO_H


typedef struct {
    float usage_persent;
} CpuInfo;

typedef struct {
    int total;
    int free;
    int usage;
} MemInfo;


void info_cpu(CpuInfo *cpu);
void info_memory(MemInfo *memory);

#endif /* SYSTEM_INFO_H */