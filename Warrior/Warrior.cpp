//
// Created by Евгений Абрамов on 2019-03-26.
//


#include "Warrior.h"

Warrior::Warrior(const Position& start_position) : position_ (start_position), is_upgraded_(false) {}

void Warrior::Move(Position next_position, int& remaining_turn_points) {
  if (position_.FindDistance(next_position) < move_range_) {
    position_ = next_position;
    remaining_turn_points -= turn_cost_;
  }
}

int Warrior::GetHealth() const {
  return health_;
}

int Warrior::GetMaxHealth() const {
  return max_health_;
}

int Warrior::GetStrength() const {
  return strength_;
}

int Warrior::GetTurnCost() const {
  return turn_cost_;
}

int Warrior::GetActionRange() const {
  return action_range_;
}

int Warrior::GetMoveRange() const {
 return move_range_;
}

bool Warrior::GetIsUpgraded() const {
  return is_upgraded_;
}

Position Warrior::GetPosition() const {
  return Position(position_);
}

void Warrior::SetHealth(int health) {
  health_ = health;
}

void Warrior::SetMaxHealth(int max_health) {
  max_health_ = max_health;
}

void Warrior::SetStrength(int strength) {
  strength_ = strength;
}

void Warrior::SetTurnCost(int turn_cost) {
  turn_cost_ = turn_cost;
}

void Warrior::SetActionRange(int action_range) {
  action_range_ = action_range;
}

void Warrior::SetMoveRange(int move_range) {
  move_range_ = move_range;
}

void Warrior::SetIsUpgraded(bool is_upgraded) {
  is_upgraded_ = is_upgraded;
}

void Warrior::SetPosition(const Position position) {
  position_ = position;
}
