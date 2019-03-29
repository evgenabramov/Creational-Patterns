//
// Created by Евгений Абрамов on 2019-03-28.
//

#include "HeroBuilder.h"

void HeroBuilder::Reset() {
  hero_ = std::make_shared<Hero>();
}

HeroBuilder::HeroBuilder(const HeroBuilder& other) {
  *this = other;
}

void HeroBuilder::BuildTurnPoints() {
  hero_->SetTurnPoints(5);
}

void HeroBuilder::BuildExperience() {
  hero_->SetExperience(0);
}

shared_ptr<Hero> HeroBuilder::GetHero() {
  return hero_;
}

void HeroBuilder::SetPosition(const Position& position) {
  hero_->SetPosition(Position(position));
}

