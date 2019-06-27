//
// Created by Евгений Абрамов on 2019-03-27.
//

#include "Hero.h"

Hero::Hero(const Position& position) : Warrior(position) {}

void Hero::Upgrade(int& remaining_experience_points) {

}

void Hero::Action(Warrior& other, int& remaining_turn_points) {

}

Hero::AbilityType Hero::GetAbility() const {
  return ability_;
}

Hero::AppearanceType Hero::GetAppearance() const {
  return appearance_;
}

int Hero::GetExperience() const {
  return experience_;
}

int Hero::GetTurnPoints() const {
  return turn_points_;
}

void Hero::SetAbility(AbilityType ability) {
  ability_ = ability;
}

void Hero::SetAppearance(AppearanceType appearance) {
  appearance_ = appearance;
}

void Hero::SetExperience(int experience) {
  experience_ = experience;
}

void Hero::SetTurnPoints(int turn_points) {
  turn_points_ = turn_points;
}