#include <queue>
#include <string>

class Lexer {
private:
  std::string src;
  size_t currIndex = 0;
  std::queue<std::string> tokens;

  void skipSpace();
  std::string nextToken();

public:
  Lexer(std::string src);
  void tokenize();
};
