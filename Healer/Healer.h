//
// Created by Евгений Абрамов on 2019-03-26.
//

#pragma once

#include "../Warrior/Warrior.h"

class Healer : public Warrior {

 public:

  explicit Healer(const Position& start_position);

  void Action(Warrior& other, int& remaining_turn_points) final;

  void Upgrade(int& remaining_experience_points) final;
};

