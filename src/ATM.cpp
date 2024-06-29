#include <ATM.hpp>

void ATM::insert_card(Card card) {
  _my_card = card;
}

bool ATM::is_pin_matched(std::string pin_number) {
  if (_my_card.get_pin_number() != pin_number) {
    return false;
  } else {
    return true;
  }
}

uint16_t ATM::show_balance() {
  return _my_card.get_balance();
}

void ATM::deposit_money(uint16_t money) {
  uint16_t current_balance = _my_card.get_balance();
  _my_card.set_balance(current_balance + money);
}

bool ATM::withdraw_money(uint16_t money) {
  uint16_t current_balance = _my_card.get_balance();

  if (current_balance < money) {
    return false;
  } else {
    _my_card.set_balance(current_balance - money);
    return true;
  }
}
