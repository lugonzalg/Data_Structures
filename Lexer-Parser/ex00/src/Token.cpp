#include "Token.hpp"

Token::Token(const std::string &token, __uint8_t state_machine, __uint8_t indent): __token(token), __state_machine(state_machine), __indent(indent) {}