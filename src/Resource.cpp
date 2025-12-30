#include "Resource.hpp"

Resource::Resource(int cpu, int memory) : cpu(cpu), memory(memory) {}

int Resource::getCPU() const {
    return cpu;
}

int Resource::getMemory() const {
    return memory;
}
