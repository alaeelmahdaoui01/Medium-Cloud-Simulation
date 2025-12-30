#pragma once
#include "Resource.hpp"
#include <string>

// containers are resources 
// A container is a specialized resource consumer with an identity

class Container : public Resource {
    private:
        std::string id;

    public:
        Container(const std::string& id, int cpu, int memory);
        std::string getId() const;
};