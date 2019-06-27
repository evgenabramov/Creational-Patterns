//
// Created by Евгений Абрамов on 2019-03-26.
//

#include "HumanFactory.h"

using std::make_shared;

shared_ptr<Infantry> HumanFactory::CreateInfantry(const Position& start_position) {
  shared_ptr<Infantry> new_infantry = make_shared<Infantry>(start_position);
  new_infantry->SetMaxHealth(15);
  new_infantry->SetHealth(15);
  new_infantry->SetActionRange(1);
  new_infantry->SetMoveRange(3);
  new_infantry->SetStrength(5);
  new_infantry->SetTurnCost(1);
  return new_infantry;
}

shared_ptr<Archer> HumanFactory::CreateArcher(const Position& start_position) {
  shared_ptr<Archer> new_archer = make_shared<Archer>(start_position);
  new_archer->SetMaxHealth(10);
  new_archer->SetHealth(10);
  new_archer->SetActionRange(3);
  new_archer->SetMoveRange(3);
  new_archer->SetStrength(3);
  new_archer->SetTurnCost(1);
  return new_archer;
}

shared_ptr<Horseman> HumanFactory::CreateHorseman(const Position& start_position) {
  shared_ptr<Horseman> new_horseman = make_shared<Horseman>(start_position);
  new_horseman->SetMaxHealth(20);
  new_horseman->SetHealth(20);
  new_horseman->SetActionRange(2);
  new_horseman->SetMoveRange(5);
  new_horseman->SetStrength(10);
  new_horseman->SetTurnCost(2);
  return new_horseman;
}

shared_ptr<Healer> HumanFactory::CreateHealer(const Position& start_position) {
  shared_ptr<Healer> new_healer = make_shared<Healer>(start_position);
  new_healer->SetMaxHealth(10);
  new_healer->SetHealth(10);
  new_healer->SetActionRange(2);
  new_healer->SetMoveRange(3);
  new_healer->SetStrength(5);
  new_healer->SetTurnCost(2);
  return new_healer;
}