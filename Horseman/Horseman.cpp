//
// Created by Евгений Абрамов on 2019-03-26.
//

#include "Horseman.h"
#include <algorithm>

Horseman::Horseman(const Position& start_position) : Warrior(start_position) {}

void Horseman::Action(Warrior& other, int& remaining_turn_points) {
  if (turn_cost_ > remaining_turn_points && position_.FindDistance(other.GetPosition()) > action_range_) {
    return;
  }
  other.SetHealth(std::max(other.GetHealth() - strength_, 0));
  remaining_turn_points -= turn_cost_;
}

void Horseman::Upgrade(int& remaining_experience_points) {
  if (remaining_experience_points == 0 || is_upgraded_) {
    return;
  }
  move_range_++;
  strength_ += 3;
  is_upgraded_ = true;
  remaining_experience_points--;
}

