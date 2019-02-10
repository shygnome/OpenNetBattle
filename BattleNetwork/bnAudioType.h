#pragma once
/**
* @warning These have to be in order.
* @see AudioResourceManager
*/
enum AudioType {
  // In-battle SFX
  APPEAR,
  AREA_GRAB,
  AREA_GRAB_TOUCHDOWN,
  BUSTER_PEA,
  BUSTER_CHARGED,
  BUSTER_CHARGING,
  GUARD_HIT,
  CANNON,
  COUNTER,
  CHIP_CANCEL,
  CHIP_CHOOSE,
  CHIP_CONFIRM,
  CHIP_DESC,
  CHIP_DESC_CLOSE,
  CHIP_SELECT,
  CHIP_ERROR,
  CUSTOM_BAR_FULL,
  CUSTOM_SCREEN_OPEN,
  ITEM_GET,
  DELETED,
  EXPLODE,
  GUN,
  HEALTH_ALERT,
  HURT,
  PANEL_CRACK,
  PANEL_RETURN,
  PAUSE,
  PRE_BATTLE,
  RECOVER,
  SPREADER,
  SWORD_SWING,
  TOSS_ITEM,
  WAVE,
  THUNDER,
  INVISIBLE,
  PA_ADVANCE,
  POINT,
  NEW_GAME,
  TEXT,
  AUDIO_TYPE_SIZE
};