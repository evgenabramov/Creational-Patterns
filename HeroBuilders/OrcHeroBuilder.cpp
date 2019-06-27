//
// Created by Евгений Абрамов on 2019-03-28.
//

#include "OrcHeroBuilder.h"

void OrcHeroBuilder::BuildAppearance() {
  hero_->SetAppearance(Hero::AppearanceType::Naked);
}

void OrcHeroBuilder::BuildAbility() {
  hero_->SetAbility(Hero::AbilityType::ExtraTurnPoints);
}

void OrcHeroBuilder::BuildWarriorProperties() {
  hero_->SetMaxHealth(100);
  hero_->SetHealth(100);
  hero_->SetTurnCost(1);
  hero_->SetStrength(15);
  hero_->SetMoveRange(1);
  hero_->SetActionRange(2);
  hero_->SetIsUpgraded(false);
}

