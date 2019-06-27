//
// Created by Евгений Абрамов on 2019-03-28.
//

#include "HumanHeroBuilder.h"

void HumanHeroBuilder::BuildAppearance() {
  hero_->SetAppearance(Hero::AppearanceType::Combat);
}

void HumanHeroBuilder::BuildAbility() {
  hero_->SetAbility(Hero::AbilityType::SuperMove);
}

void HumanHeroBuilder::BuildWarriorProperties() {
  hero_->SetMaxHealth(100);
  hero_->SetHealth(100);
  hero_->SetTurnCost(1);
  hero_->SetStrength(10);
  hero_->SetMoveRange(2);
  hero_->SetActionRange(2);
  hero_->SetIsUpgraded(false);
}
