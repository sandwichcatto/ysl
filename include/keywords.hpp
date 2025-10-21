#pragma once
#include <string>
#include <unordered_map>

enum class Symbol {
  PAREN_L,   // (
  PAREN_R,   // )
  BRACE_L,   // {
  BRACE_R,   // }
  BRACKET_L, // [
  BRACKET_R, // ]

  PLUS,      // +
  MINUS,     // -
  STAR,      // *
  SLASH,     // /
  PERCENT,   // %
  CARET,     // ^
  AMPERSAND, // &
  PIPE,      // |
  BANG,      // !
  TILDE,     // ~
  QUESTION,  // ?
  COLON,     // :

  EQUAL,         // =
  EQUAL_EQUAL,   // ==
  BANG_EQUAL,    // !=
  LESS,          // <
  GREATER,       // >
  LESS_EQUAL,    // <=
  GREATER_EQUAL, // >=
  PLUS_EQUAL,    // +=
  MINUS_EQUAL,   // -=
  STAR_EQUAL,    // *=
  SLASH_EQUAL,   // /=

  AND_AND,     // &&
  OR_OR,       // ||
  SHIFT_LEFT,  // <<
  SHIFT_RIGHT, // >>

  COMMA,     // ,
  DOT,       // .
  SEMICOLON, // ;
  ARROW,     // ->
  UNKNOWN,   // fallback
};

static const std::unordered_map<std::string_view, const Symbol> symbolTable = {
    {"(", Symbol::PAREN_L},        {")", Symbol::PAREN_R},
    {"{", Symbol::BRACE_L},        {"}", Symbol::BRACE_R},
    {"[", Symbol::BRACKET_L},      {"]", Symbol::BRACKET_R},

    {"+", Symbol::PLUS},           {"-", Symbol::MINUS},
    {"*", Symbol::STAR},           {"/", Symbol::SLASH},
    {"%", Symbol::PERCENT},        {"^", Symbol::CARET},
    {"&", Symbol::AMPERSAND},      {"|", Symbol::PIPE},
    {"!", Symbol::BANG},           {"~", Symbol::TILDE},
    {"?", Symbol::QUESTION},       {":", Symbol::COLON},

    {"=", Symbol::EQUAL},          {"==", Symbol::EQUAL_EQUAL},
    {"!=", Symbol::BANG_EQUAL},    {"<", Symbol::LESS},
    {">", Symbol::GREATER},        {"<=", Symbol::LESS_EQUAL},
    {">=", Symbol::GREATER_EQUAL}, {"+=", Symbol::PLUS_EQUAL},
    {"-=", Symbol::MINUS_EQUAL},   {"*=", Symbol::STAR_EQUAL},
    {"/=", Symbol::SLASH_EQUAL},

    {"&&", Symbol::AND_AND},       {"||", Symbol::OR_OR},
    {"<<", Symbol::SHIFT_LEFT},    {">>", Symbol::SHIFT_RIGHT},

    {",", Symbol::COMMA},          {".", Symbol::DOT},
    {";", Symbol::SEMICOLON},      {"->", Symbol::ARROW},
};

Symbol checkSymbol(const std::string &token);
