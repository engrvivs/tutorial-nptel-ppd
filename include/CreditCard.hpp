#pragma once
#include "Address.hpp"
#include "Date.hpp"
#include "Name.hpp"

#include <cstdint>

class CreditCard {
private:
  // 16-digit (character) card number
  char cardNumber_[17];
  Name holder_;
  Address addr_;
  Date issueDate_, expiryDate_;
  std::uint16_t cvv_;

public:
  CreditCard(const char *const p_cNumber, const char *const p_fn,
             const char *const p_ln, std::uint32_t hn, const char *const p_sn,
             const char *const p_cn, const char *const p_pin,
             std::uint8_t issueMonth, std::int16_t issueYear,
             std::uint8_t expiryMonth, std::int16_t expiryYear,
             std::uint16_t cvv);
  ~CreditCard();
  void print();
};
