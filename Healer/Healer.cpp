//
// Created by Евгений Абрамов on 2019-03-26.
//

#include "Healer.h"
#include <algorithm>

Healer::Healer(const Position& start_position) : Warrior(start_position) {}

void Healer::Action(Warrior& other, int& remaining_turn_points) {
  if (turn_cost_ > remaining_turn_points && position_.FindDistance(other.GetPosition()) > action_range_) {
    return;
  }
  other.SetHealth(std::min(other.GetHealth() + strength_, other.GetMaxHealth()));
  remaining_turn_points -= turn_cost_;
}

void Healer::Upgrade(int& remaining_experience_points) {
  if (remaining_experience_points == 0 || is_upgraded_) {
    return;
  }
  strength_ += 5;
  move_range_++;
  is_upgraded_ = true;
  remaining_experience_points--;
}