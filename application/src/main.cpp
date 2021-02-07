#include <iostream>
#include <account/account.h>

int main() {
    auto account = Account(42);
    account.AddMoney(12);
    std::cout << "Your account balance is " << account.GetMoney() <<  std::endl;
    return 0;
}
