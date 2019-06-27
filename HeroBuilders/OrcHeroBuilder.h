//
// Created by Евгений Абрамов on 2019-03-28.
//

#pragma once

#include "HeroBuilder.h"

class OrcHeroBuilder : public HeroBuilder {

 public:

  OrcHeroBuilder() = default;

  void BuildAppearance() final;

  void BuildAbility() final;

  void BuildWarriorProperties() final;

};
