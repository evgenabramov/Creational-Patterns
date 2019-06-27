#pragma once

class Position {

 public:

  Position() = default;

  Position(const Position& other);

  Position(int x, int y);

  Position& operator=(const Position& other);

  ~Position() = default;

  int FindDistance(const Position& other);

 private:

  int abs(int value);

  int x_coord_;
  int y_coord_;
};
