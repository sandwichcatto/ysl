#include "lexer.hpp"
#include "keywords.hpp"
#include "util.hpp"

#include <print>

void Lexer::tokenize() {
  std::string tok;
  while ((tok = nextToken()) != "")
    std::println("{}", tok);
}

std::string Lexer::nextToken() {
  std::string ret = "";

  if (currIndex >= src.length())
    return ret;
  while (isspace(src[currIndex]) || src[currIndex] == '#') {
    if (isspace(src[currIndex])) {
      while (currIndex < src.length() && isspace(src[currIndex]))
        currIndex++;
    }
    if (src[currIndex] == '#') {
      while (currIndex < src.length() && src[currIndex] != '\n')
        currIndex++;
    }
  }

  if (currIndex >= src.length())
    return ret;
  if (isalpha(src[currIndex])) {
    while (currIndex < src.length() &&
           (isalnum(src[currIndex]) || src[currIndex] == '_'))
      ret += src[currIndex++];
    return ret;
  }
  if (isdigit(src[currIndex])) {
    while (currIndex < src.length() && isdigit(src[currIndex]))
      ret += src[currIndex++];
    return ret;
  }

  if (src[currIndex] == '\"' || src[currIndex] == '\'') {
    char col = src[currIndex];
    ret += col;
    currIndex++;
    while (currIndex < src.length() && src[currIndex] != col) {
      if (src[currIndex] == '\\') {
        if (currIndex + 1 < src.length()) {
          ret += src[(++currIndex)++];
        }
      } else {
        ret += src[currIndex++];
      }
    }
    if (src[currIndex] == col)
      ret += col;
    currIndex++;
    return ret;
  }

  for (auto &&[str, _] : symbolTable) {
    if (str.length() == 1) {
      if (src[currIndex] == str[0]) {
        return std::string(1, src[currIndex++]);
      }
    } else {
      if (src[currIndex] == str[0] && src[currIndex + 1] == str[1]) {
        ret = std::string(1, src[currIndex]) + src[currIndex];
        currIndex += 2;
        return ret;
      }
    }
  }

  throw std::runtime_error(
      (std::string(Color::RED_FG) + "Boo: ") + std::string(Color::RESET) +
      "Invalid Character Found  (" + std::to_string(int(src[currIndex])) + ")" +
      "\'" + src[currIndex] + '\'');
}

Lexer::Lexer(std::string src) : src(src) {}
