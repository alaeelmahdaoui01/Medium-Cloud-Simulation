#pragma once
#include "Resource.hpp"
#include <string>


class Container : public Resource {
private:
std::string id;


public:
Container(const std::string& id, int cpu, int memory);


std::string getId() const;
};