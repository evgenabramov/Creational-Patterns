//
// Created by Евгений Абрамов on 2019-03-26.
//

#pragma once

#include "../Warrior/Warrior.h"

class Infantry : public Warrior {

 public:

  explicit Infantry(const Position& start_position);

  void Action(Warrior& other, int& remaining_turn_points) final;

  void Upgrade(int& remaining_experience_points) final;
};

