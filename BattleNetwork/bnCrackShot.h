#pragma once
#include "bnSpell.h"
#include "bnAnimationComponent.h"

class CrackShot : public Spell {
protected:
  AnimationComponent* animation; 
  double speed; 
public:

  CrackShot(Field* _field, Team _team, Battle::Tile* t);

  /**
   * @brief deconstructor
   */
  virtual ~CrackShot();

  /**
   * @brief CrackShot flies through the air
   * @param tile
   * @return true
   */
  virtual bool CanMoveTo(Battle::Tile* tile);

  /**
   * @brief Moves in one direction
   * @param _elapsed in seconds
   */
  virtual void OnUpdate(float _elapsed);

  /**
   * @brief Deals hitbox damage
   * @param _entity
   */
  virtual void Attack(Character* _entity);
};
