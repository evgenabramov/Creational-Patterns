//
// Created by Евгений Абрамов on 2019-03-28.
//

#include "Director.h"

Director::Director(shared_ptr<HeroBuilder>& hero_builder) : hero_builder_(hero_builder) {}

void Director::ConstructHero(HeroBuilder& hero_builder, const Position& position) {
  hero_builder.Reset();
  hero_builder.BuildWarriorProperties();
  hero_builder.SetPosition(position);
  hero_builder.BuildTurnPoints();
  hero_builder.BuildExperience();
  hero_builder.BuildAppearance();
  hero_builder.BuildAbility();
}
