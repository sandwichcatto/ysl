#include <fstream>
#include <iostream>
#include <print>

#include "lexer.hpp"
#include "util.hpp"

int main(void) {
  std::fstream fin("./examples/print.ysl");
  if (!fin.is_open()) {
    std::println(std::cerr, "{}Boo:{} file not found.", Color::RED_FG,
                 Color::RESET);
    return 1;
  }

  std::string buf((std::istreambuf_iterator<char>(fin)),
                  std::istreambuf_iterator<char>());
  Lexer lex(buf);
  lex.tokenize();
  return 0;
}
