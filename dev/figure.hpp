#pragma once

#include <iostream>
#include <string_view>

enum class lcb_ERROR { SUCCESS, ERROR };

class Figure {
 public:
  using stream_t = std::iostream;

  virtual void who() noexcept = 0;
  [[nodiscard]] virtual lcb_ERROR print() const noexcept = 0;
};

void check(lcb_ERROR error, const std::string_view &message);

class Rectangle final : public Figure {
 public:
  explicit Rectangle(size_t n = 1) : n_(n) {}
  Rectangle &operator=(const Rectangle &rhs) = default;
  Rectangle(Rectangle &&rhs) = delete;
  Rectangle &operator=(Rectangle &&rhs) = default;  // for vector.
  ~Rectangle() = default;

  void who() noexcept final;
  [[nodiscard]] lcb_ERROR print() const noexcept final;

 private:
  size_t n_;
};

class Circle final : public Figure {
 public:
  explicit Circle(size_t n = 1) : n_(n) {}
  Circle &operator=(const Circle &rhs) = default;
  Circle(Circle &&rhs) = delete;
  Circle &operator=(Circle &&rhs) = default;  // for vector.
  ~Circle() = default;

  void who() noexcept final;

  [[nodiscard]] lcb_ERROR print() const noexcept final;

 private:
  size_t n_;
};
