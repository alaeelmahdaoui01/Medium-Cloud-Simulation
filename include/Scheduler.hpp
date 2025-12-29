#pragma once
#include <vector>
#include <memory>
#include "Server.hpp"


class Scheduler {
public:
Scheduler() = default;


std::shared_ptr<Server> selectServer(
const Pod& pod,
const std::vector<std::shared_ptr<Server>>& servers
) const;
};