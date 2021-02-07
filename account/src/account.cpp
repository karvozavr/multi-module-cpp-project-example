#include <account.h>

Account::Account(int money) : money_(money) {}

int Account::GetMoney() const {
    return money_;
}

void Account::AddMoney(int amount) {
    money_ = Sum2Values<int>(money_, amount);
}
