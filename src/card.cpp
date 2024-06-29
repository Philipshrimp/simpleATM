#include <card.hpp>


Card::Card(std::string account, std::string pin_number, uint16_t balance) {
  _account = account;
  _pin_number = pin_number;
  _balance = balance;
}

std::string Card::get_account() {
  return _account;
}

std::string Card::get_pin_number() {
  return _pin_number;
}

uint16_t Card::get_balance() {
  return _balance;
}

void Card::set_balance(uint16_t money) {
  _balance = money;
}
