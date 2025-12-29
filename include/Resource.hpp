#pragma once


class Resource {
protected:
int cpu;
int memory;


public:
Resource(int cpu, int memory);
virtual ~Resource() = default;


int getCPU() const;
int getMemory() const;
};