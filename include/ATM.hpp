#include <string>

#include <card.hpp>

class ATM {
public:
  ATM() {}

  void insert_card(Card card);
  bool is_pin_matched(std::string pin_number);
  void show_balance();
  void deposit_money(uint16_t money);
  void withdraw_money(uint16_t money);

private:
  Card _my_card;
};
