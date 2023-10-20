#include <iostream>

#include "Parser.hpp"

Parser::Parser(const std::string &src, const char *lexer): _src(src), __lexer(lexer) {}

Parser::~Parser() {}

void    Parser::parse() {
    std::deque<Token *> token_list;

    this->__lexer.read(token_list, this->_src);
    for (size_t i = 0; i < token_list.size(); i++)
        std::cout << token_list[i]->get_key() << " SM: " << (int)token_list[i]->get_sm() << std::endl;
}