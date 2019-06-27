//
// Created by Евгений Абрамов on 2019-03-28.
//

#include <iostream>
#include <memory>
#include "gtest/gtest.h"
#include "../Factories/ArmyFactory.h"
#include "../Factories/OrcFactory.h"
#include "../Factories/HumanFactory.h"
#include "../Archer/Archer.h"
#include "../Healer/Healer.h"
#include "../Hero/Hero.h"
#include "../HeroBuilders/Director.h"
#include "../HeroBuilders/HeroBuilder.h"
#include "../HeroBuilders/HumanHeroBuilder.h"
#include "../HeroBuilders/OrcHeroBuilder.h"
#include "../Horseman/Horseman.h"
#include "../Infantry/Infantry.h"
#include "../Position/Position.h"
#include "../Warrior/Warrior.h"

using std::shared_ptr;
using std::make_shared;

TEST(Position, PositionCreation) {
  Position first_position(3, 4);
  Position second_position(6, 2);
  EXPECT_EQ(first_position.FindDistance(second_position), 5);
}

TEST(Position, PositionCopy) {
  Position first_position(3, 4);
  Position second_position(first_position);
  EXPECT_EQ(first_position.FindDistance(second_position), 0);
}

TEST(HumanFactory, HumanInfantryCreation) {
  shared_ptr<ArmyFactory> army_factory = make_shared<HumanFactory>();
  Position create_position(0, 0);
  shared_ptr<Warrior> human_infantry = army_factory->CreateInfantry(create_position);
  EXPECT_EQ(human_infantry->GetMaxHealth(), 15);
  EXPECT_EQ(human_infantry->GetHealth(), 15);
  EXPECT_EQ(human_infantry->GetActionRange(), 1);
  EXPECT_EQ(human_infantry->GetMoveRange(), 3);
  EXPECT_EQ(human_infantry->GetStrength(), 5);
  EXPECT_EQ(human_infantry->GetTurnCost(), 1);
  EXPECT_FALSE(human_infantry->GetIsUpgraded());
}

TEST(HumanFactory, HumanArcherCreation) {
  shared_ptr<ArmyFactory> army_factory = make_shared<HumanFactory>();
  Position create_position(0, 0);
  shared_ptr<Warrior> human_archer = army_factory->CreateArcher(create_position);
  EXPECT_EQ(human_archer->GetMaxHealth(), 10);
  EXPECT_EQ(human_archer->GetHealth(), 10);
  EXPECT_EQ(human_archer->GetActionRange(), 3);
  EXPECT_EQ(human_archer->GetMoveRange(), 3);
  EXPECT_EQ(human_archer->GetStrength(), 3);
  EXPECT_EQ(human_archer->GetTurnCost(), 1);
  EXPECT_FALSE(human_archer->GetIsUpgraded());
}

TEST(HumanFactory, HumanHorsemanCreation) {
  shared_ptr<ArmyFactory> army_factory = make_shared<HumanFactory>();
  Position create_position(0, 0);
  shared_ptr<Warrior> human_horseman = army_factory->CreateHorseman(create_position);
  EXPECT_EQ(human_horseman->GetMaxHealth(), 20);
  EXPECT_EQ(human_horseman->GetHealth(), 20);
  EXPECT_EQ(human_horseman->GetActionRange(), 2);
  EXPECT_EQ(human_horseman->GetMoveRange(), 5);
  EXPECT_EQ(human_horseman->GetStrength(), 10);
  EXPECT_EQ(human_horseman->GetTurnCost(), 2);
  EXPECT_FALSE(human_horseman->GetIsUpgraded());
}


TEST(HumanFactory, HumanHealerCreation) {
  shared_ptr<ArmyFactory> army_factory = make_shared<HumanFactory>();
  Position create_position(0, 0);
  shared_ptr<Warrior> human_healer = army_factory->CreateHealer(create_position);
  EXPECT_EQ(human_healer->GetMaxHealth(), 10);
  EXPECT_EQ(human_healer->GetHealth(), 10);
  EXPECT_EQ(human_healer->GetActionRange(), 2);
  EXPECT_EQ(human_healer->GetMoveRange(), 3);
  EXPECT_EQ(human_healer->GetStrength(), 5);
  EXPECT_EQ(human_healer->GetTurnCost(), 2);
  EXPECT_FALSE(human_healer->GetIsUpgraded());
}

TEST(OrcFactory, OrcInfantryCreation) {
  shared_ptr<ArmyFactory> army_factory = make_shared<OrcFactory>();
  Position create_position(0, 0);
  shared_ptr<Warrior> orc_infantry = army_factory->CreateInfantry(create_position);
  EXPECT_EQ(orc_infantry->GetMaxHealth(), 20);
  EXPECT_EQ(orc_infantry->GetHealth(), 20);
  EXPECT_EQ(orc_infantry->GetActionRange(), 1);
  EXPECT_EQ(orc_infantry->GetMoveRange(), 2);
  EXPECT_EQ(orc_infantry->GetStrength(), 5);
  EXPECT_EQ(orc_infantry->GetTurnCost(), 1);
  EXPECT_FALSE(orc_infantry->GetIsUpgraded());
}

TEST(OrcFactory, OrcArcherCreation) {
  shared_ptr<ArmyFactory> army_factory = make_shared<OrcFactory>();
  Position create_position(0, 0);
  shared_ptr<Warrior> orc_archer = army_factory->CreateArcher(create_position);
  EXPECT_EQ(orc_archer->GetMaxHealth(), 5);
  EXPECT_EQ(orc_archer->GetHealth(), 5);
  EXPECT_EQ(orc_archer->GetActionRange(), 4);
  EXPECT_EQ(orc_archer->GetMoveRange(), 3);
  EXPECT_EQ(orc_archer->GetStrength(), 3);
  EXPECT_EQ(orc_archer->GetTurnCost(), 1);
  EXPECT_FALSE(orc_archer->GetIsUpgraded());
}

TEST(OrcFactory, OrcHorsemanCreation) {
  shared_ptr<ArmyFactory> army_factory = make_shared<OrcFactory>();
  Position create_position(0, 0);
  shared_ptr<Warrior> orc_horseman = army_factory->CreateHorseman(create_position);
  EXPECT_EQ(orc_horseman->GetMaxHealth(), 20);
  EXPECT_EQ(orc_horseman->GetHealth(), 20);
  EXPECT_EQ(orc_horseman->GetActionRange(), 2);
  EXPECT_EQ(orc_horseman->GetMoveRange(), 4);
  EXPECT_EQ(orc_horseman->GetStrength(), 12);
  EXPECT_EQ(orc_horseman->GetTurnCost(), 2);
  EXPECT_FALSE(orc_horseman->GetIsUpgraded());
}

TEST(OrcFactory, OrcHealerCreation) {
  shared_ptr<ArmyFactory> army_factory = make_shared<OrcFactory>();
  Position create_position(0, 0);
  shared_ptr<Warrior> orc_healer = army_factory->CreateHealer(create_position);
  EXPECT_EQ(orc_healer->GetMaxHealth(), 10);
  EXPECT_EQ(orc_healer->GetHealth(), 10);
  EXPECT_EQ(orc_healer->GetActionRange(), 1);
  EXPECT_EQ(orc_healer->GetMoveRange(), 3);
  EXPECT_EQ(orc_healer->GetStrength(), 10);
  EXPECT_EQ(orc_healer->GetTurnCost(), 2);
  EXPECT_FALSE(orc_healer->GetIsUpgraded());
}

TEST(HeroBuilder, HumanHeroBuilder) {
  shared_ptr<HeroBuilder> human_hero_builder = make_shared<HumanHeroBuilder>();
  Director hero_director(human_hero_builder);
  hero_director.ConstructHero(*human_hero_builder, Position(0, 0));
  shared_ptr<Hero> main_hero = human_hero_builder->GetHero();
  EXPECT_EQ(main_hero->GetMaxHealth(), 100);
  EXPECT_EQ(main_hero->GetHealth(), 100);
  EXPECT_EQ(main_hero->GetActionRange(), 2);
  EXPECT_EQ(main_hero->GetMoveRange(), 2);
  EXPECT_EQ(main_hero->GetStrength(), 10);
  EXPECT_EQ(main_hero->GetTurnCost(), 1);
  EXPECT_FALSE(main_hero->GetIsUpgraded());
  EXPECT_EQ(main_hero->GetAbility(), Hero::AbilityType::SuperMove);
  EXPECT_EQ(main_hero->GetAppearance(), Hero::AppearanceType::Combat);
  EXPECT_EQ(main_hero->GetExperience(), 0);
  EXPECT_EQ(main_hero->GetTurnPoints(), 5);
}

TEST(HeroBuilder, OrcHeroBuilder) {
  shared_ptr<HeroBuilder> orc_hero_builder = make_shared<OrcHeroBuilder>();
  Director hero_director(orc_hero_builder);
  hero_director.ConstructHero(*orc_hero_builder, Position(0, 0));
  shared_ptr<Hero> main_hero = orc_hero_builder->GetHero();
  EXPECT_EQ(main_hero->GetMaxHealth(), 100);
  EXPECT_EQ(main_hero->GetHealth(), 100);
  EXPECT_EQ(main_hero->GetActionRange(), 2);
  EXPECT_EQ(main_hero->GetMoveRange(), 1);
  EXPECT_EQ(main_hero->GetStrength(), 15);
  EXPECT_EQ(main_hero->GetTurnCost(), 1);
  EXPECT_FALSE(main_hero->GetIsUpgraded());
  EXPECT_EQ(main_hero->GetAbility(), Hero::AbilityType::ExtraTurnPoints);
  EXPECT_EQ(main_hero->GetAppearance(), Hero::AppearanceType::Naked);
  EXPECT_EQ(main_hero->GetExperience(), 0);
  EXPECT_EQ(main_hero->GetTurnPoints(), 5);
}
