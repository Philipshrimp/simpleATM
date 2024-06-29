#include <iostream>

#include <ATM.hpp>
#include <card.hpp>

int main() {
  ATM bank_atm = new ATM();
  Card my_card = new Card(
    "123445-21-333111",
    "1234",
    2000);

  char controller;
  std::string input_pin;
  uint16_t input_money;
  
  std::cout << "Press 'i' to insert card: ";
  std::cin >> controller;

  if (controller == 'i') {
    bank_atm.insert_card(my_card);
  } else {
    std::cout << "Invalid input is detected. Program is terminated" << std::endl;
    return 1;
  }

  std::cout << "Type your PIN number: ";
  std::cin >> input_pin;

  if (!bank_atm.is_pin_matched(input_pin)) {
    std::cout << "Welcome. Your account is selected. " << my_card.get_account() << std::endl;
  } else {
    std::cout << "PIN number is wrong. Program is terminated." << std::endl;
    return 1;
  }

  std::cout << "-------------------------------------" << std::endl;
  std::cout << "1. Check my balance" << std::endl;
  std::cout << "2. Deposit money" << std::endl;
  std::cout << "3. Withdraw money" << std::endl;
  std::cout << "-------------------------------------" << std::endl;
  std::cout << "Press the menu number what you want: ";
  std::cin >> controller;

  if (controller == '1') {
    std::cout << "Your balance is " << bank_atm.show_balance() << " dollars." << std::endl;
  } else if (controller == '2') {
    std::cout << "Type money you want to deposit: ";
    std::cin >> input_money;

    bank_atm.deposit_money(input_money);
    std::cout << "Deposit is done." << std::endl;
  } else if (controller == '3') {
    std::cout << "Type money you want to withdraw: ";
    std::cin >> input_money;

    if (bank_atm.withdraw_money(input_money)) {
      std::cout << "Successfully withdrawn." << std::endl;
    } else {
      std::cout << "You don't have enough money." << std::endl;
      return 1;
    }
  } else {
    std::cout << "Invalid menu selection. Program is terminated." << std::endl;
    return 1;
  }

  return 0;
}
