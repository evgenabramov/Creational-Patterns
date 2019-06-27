//
// Created by Евгений Абрамов on 2019-03-26.
//

#pragma once

#include "ArmyFactory.h"

class HumanFactory : public ArmyFactory {

 public:

  shared_ptr<Infantry> CreateInfantry(const Position& start_position) final;

  shared_ptr<Archer> CreateArcher(const Position& start_position) final;

  shared_ptr<Horseman> CreateHorseman(const Position& start_position) final;

  shared_ptr<Healer> CreateHealer(const Position& position) final;

  ~HumanFactory() final = default;

};
