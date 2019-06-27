//
// Created by Евгений Абрамов on 2019-03-27.
//

#pragma once

#include "../Warrior/Warrior.h"

class Hero : public Warrior {

 public:

  Hero() = default;

  enum AbilityType {ExtraTurn, ExtraTurnPoints, ExtraWarrior, KillEnemy, SuperMove};

  enum AppearanceType {Combat, Casual, Naked};

  explicit Hero(const Position& position);

  void Upgrade(int& remaining_experience_points) final;

  void Action(Warrior& other, int& remaining_turn_points) final;


  AbilityType GetAbility() const;
  AppearanceType GetAppearance() const;
  int GetExperience() const;
  int GetTurnPoints() const;

  void SetAbility(AbilityType ability);
  void SetAppearance(AppearanceType appearance);
  void SetExperience(int experience);
  void SetTurnPoints(int turn_points);

 private:

  AbilityType ability_;
  AppearanceType appearance_;
  int experience_;
  int turn_points_;
};
