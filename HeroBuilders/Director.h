//
// Created by Евгений Абрамов on 2019-03-28.
//

#pragma once

#include "HeroBuilder.h"

class Director {

 public:

  explicit Director(shared_ptr<HeroBuilder>& hero_builder);

  void ConstructHero(HeroBuilder& hero_builder, const Position& position);

 private:

  shared_ptr<HeroBuilder> hero_builder_;
};
