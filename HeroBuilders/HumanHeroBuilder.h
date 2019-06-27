//
// Created by Евгений Абрамов on 2019-03-28.
//

#pragma once

#include "HeroBuilder.h"

class HumanHeroBuilder : public HeroBuilder {

 public:

  HumanHeroBuilder() = default;

  void BuildAppearance() final;

  void BuildAbility() final;

  void BuildWarriorProperties() final;

};
