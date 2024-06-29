#include <string>


class Card {
public:
  Card(std::string account, std::string pin_number, uint16_t balance);

  std::string get_account();
  std::string get_pin_number();
  uint16_t get_balance();
  void set_balance(uint16_t money);

private:
  std::string _account = "123-456-789";
  std::string _pin_number = "0000";
  uint16_t _balance = 100;
};
