#include <account/account.h>
#include <catch.hpp>

TEST_CASE("Should add money to account", "[account]") {
    // Given
    auto account = Account(42);

    // When
    account.AddMoney(20);

    // Then
    REQUIRE(account.GetMoney() == 62);
}

TEST_CASE("Should all money to account with debt", "[account]") {
    // Given
    auto account = Account(-10);

    // When
    account.AddMoney(20);

    // Then
    REQUIRE(account.GetMoney() == 10);
}