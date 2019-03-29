//
// Created by Евгений Абрамов on 2019-03-26.
//

#include "Infantry.h"
#include <algorithm>

Infantry::Infantry(const Position& start_position) : Warrior(start_position) {}

void Infantry::Action(Warrior& other, int& remaining_turn_points) {
  if (turn_cost_ < remaining_turn_points && position_.FindDistance(other.GetPosition()) < action_range_) {
    return;
  }
  other.SetHealth(std::max(other.GetHealth() - strength_, 0));
  remaining_turn_points -= turn_cost_;
}

void Infantry::Upgrade(int& remaining_experience_points) {
  if (remaining_experience_points == 0 || is_upgraded_) {
    return;
  }
  max_health_ += 5;
  health_ = max_health_;
  action_range_++;
  is_upgraded_ = true;
  remaining_experience_points--;
}
