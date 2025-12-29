#pragma once
#include <vector>
#include <memory>
#include <string>
#include "Container.hpp"


class Pod {
private:
std::string name;
int replicas;
std::vector<std::shared_ptr<Container>> containers;


public:
Pod(const std::string& name);


void addContainer(const std::shared_ptr<Container>& container);
void scale(int newReplicas);


int getTotalCPU() const;
int getTotalMemory() const;


std::string getName() const;
int getReplicas() const;
};