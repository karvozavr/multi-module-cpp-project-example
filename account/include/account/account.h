#pragma once

#include <cstdint>
#include "summator.h"

class Account {
public:
    explicit Account(int money);

    int GetMoney() const;

    void AddMoney(int amount);

private:
    std::int64_t money_;
};
