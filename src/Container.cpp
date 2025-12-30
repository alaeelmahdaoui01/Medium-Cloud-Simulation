#include "Container.hpp"

Container::Container(const std::string& id, int cpu, int memory) : Resource(cpu, memory), id(id) {}

std::string Container::getId() const {
    return id;
}
