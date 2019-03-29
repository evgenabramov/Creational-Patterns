//
// Created by Евгений Абрамов on 2019-03-28.
//

#pragma once

#include "../Hero/Hero.h"
#include <memory>

using std::shared_ptr;

class HeroBuilder {

 public:

  HeroBuilder() = default;

  void Reset();

  HeroBuilder(const HeroBuilder& other);

  virtual void BuildAppearance() = 0;

  virtual void BuildAbility() = 0;

  virtual void BuildWarriorProperties() = 0;

  void BuildTurnPoints();

  void BuildExperience();

  shared_ptr<Hero> GetHero();

  void SetPosition(const Position& position);

 protected:

  shared_ptr<Hero> hero_;

};
