#pragma once

#include "../Position/Position.h"

class Warrior {

 public:

  Warrior() = default;

  explicit Warrior(const Position& position);

  virtual void Action(Warrior& other, int& remaining_turn_points) = 0;

  virtual void Upgrade(int& remaining_experience_points) = 0;

  void Move(Position next_position, int& remaining_turn_points);

  int GetHealth() const;
  int GetMaxHealth() const;
  int GetStrength() const;
  int GetTurnCost() const;
  int GetActionRange() const;
  int GetMoveRange() const;
  bool GetIsUpgraded() const;
  Position GetPosition() const;

  void SetHealth(int health);
  void SetMaxHealth(int max_health);
  void SetStrength(int strength);
  void SetTurnCost(int turn_cost);
  void SetActionRange(int action_range);
  void SetMoveRange(int move_range);
  void SetIsUpgraded(bool is_upgraded);
  void SetPosition(Position position);

 protected:

  int health_;
  int max_health_;
  int strength_;
  int turn_cost_;
  int action_range_;
  int move_range_;
  bool is_upgraded_;
  Position position_;
};