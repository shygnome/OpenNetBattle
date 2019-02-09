#pragma once
#include "bnEntity.h"
#include "bnCharacter.h"
#include "bnAnimationComponent.h"

using sf::Texture;

class Spell : public virtual Entity {
public:
  Spell(void);
  virtual ~Spell(void);

  const bool IsTileHighlightEnabled() const;

  virtual void Update(float _elapsed) = 0;
  virtual void Attack(Character* _entity) = 0;
  virtual vector<Drawable*> GetMiscComponents() = 0;

  void EnableTileHighlight(bool enable);

protected:
  bool hit;
  bool markTile;
  float progress;
  float hitHeight;
  Texture* texture;
  AnimationComponent animationComponent;
};
