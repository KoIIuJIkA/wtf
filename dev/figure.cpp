#include "figure.hpp"

using stream_t = std::iostream;

void check(lcb_ERROR error, const std::string_view &message) {
  if (error != lcb_ERROR::SUCCESS) {
    std::cout << "[ERROR] " << message << std::endl;
    // exit(EXIT_FAILURE);
  }
}

void Rectangle::who() noexcept { std::cout << "I'm rectangle.\n"; }

[[nodiscard]] lcb_ERROR Rectangle::print() const noexcept {
  if (n_ < 1) {
    return lcb_ERROR::ERROR;
  }

  std::cout << "Some rectangle print." << std::endl;
  return lcb_ERROR::ERROR;
}

void Circle::who() noexcept { std::cout << "I'm Circle.\n"; }

[[nodiscard]] lcb_ERROR Circle::print() const noexcept {
  if (n_ < 1) {
    return lcb_ERROR::ERROR;
  }

  std::cout << "Some Circle print." << std::endl;
  return lcb_ERROR::ERROR;
}
