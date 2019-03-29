//
// Created by Евгений Абрамов on 2019-03-26.
//

#include "Position.h"

Position::Position(const Position& other) {
  x_coord_ = other.x_coord_;
  y_coord_ = other.y_coord_;
}

Position::Position(int x_coord, int y_coord) : x_coord_(x_coord), y_coord_(y_coord) {}

Position& Position::operator=(const Position& other) {
  x_coord_ = other.x_coord_;
  y_coord_ = other.x_coord_;
  return *this;
}

int Position::FindDistance(const Position& other) {
  return abs(x_coord_ - other.x_coord_) + abs(y_coord_ - other.y_coord_);
}

int Position::abs(int value) {
  return ((value > 0) ? value : -value);
}