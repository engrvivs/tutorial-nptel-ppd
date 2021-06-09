#include "CreditCard.hpp"
#include "Common.hpp"

#include <cstdint>
#include <cstring>
#include <iostream>
using std::cout;

CreditCard::CreditCard(const char *const p_cNumber, const char *const p_fn,
                       const char *const p_ln, std::uint32_t hn,
                       const char *const p_sn, const char *const p_cn,
                       const char *const p_pin, std::uint8_t issueMonth,
                       std::int16_t issueYear, std::uint8_t expiryMonth,
                       std::int16_t expiryYear, std::uint16_t cvv)
    : holder_{p_fn, p_ln}, addr_{hn, p_sn, p_cn, p_pin}, cvv_{cvv},
      issueDate_{1, issueMonth, issueYear}, expiryDate_{1, expiryMonth,
                                                        expiryYear} {
  std::strcpy(cardNumber_, p_cNumber);
  DEBUG_DISPLAY;
}

CreditCard::~CreditCard() { DEBUG_DISPLAY; }

void CreditCard::print() {
  cout << cardNumber_ << ": ";
  holder_.print();
  cout << " ";
  addr_.print();
  cout << " ";
  issueDate_.print();
  cout << " ";
  expiryDate_.print();
  cout << " ";
  cout << cvv_;
}
