//
// Created by Евгений Абрамов on 2019-03-26.
//

#pragma once

#include "../Archer/Archer.h"
#include "../Healer/Healer.h"
#include "../Horseman/Horseman.h"
#include "../Infantry/Infantry.h"
#include <memory>

using std::shared_ptr;

class ArmyFactory {

 public:

  virtual shared_ptr<Infantry> CreateInfantry(const Position& position) = 0;

  virtual shared_ptr<Archer> CreateArcher(const Position& position) = 0;

  virtual shared_ptr<Horseman> CreateHorseman(const Position& position) = 0;

  virtual shared_ptr<Healer> CreateHealer(const Position& position) = 0;

  virtual ~ArmyFactory() = default;

};