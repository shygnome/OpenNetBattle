#pragma once
/** @brief All hard-coded resources used in game
 * 
 * To get the count of all textures use TextureType::SIZE
 * 
 * @warning These have to be in order.
 * @see TextureResourceManager
*/
enum TextureType {
  //Tiles
  TILE_ATLAS_BLUE,
  TILE_ATLAS_RED,

  //Navis
  NAVI_MEGAMAN_ATLAS,
  NAVI_STARMAN_ATLAS,
  NAVI_ROLL_ATLAS,
  NAVI_FORTE_ATLAS,

  //Mobs
  MOB_MOVE,
  MOB_EXPLOSION,
  MOB_BOSS_SHINE,
  MOB_METTAUR,
  MOB_METRID,
  MOB_PROGSMAN_ATLAS,
  MOB_CANODUMB_ATLAS,
  MOB_METALMAN_ATLAS,
  MOB_ALPHA_ATLAS,
  MOB_STARFISH_ATLAS,
  MOB_MEGALIAN_ATLAS,
  MOB_HONEYBOMBER_ATLAS,
  MOB_ANYTHING_GOES,

  // Battle Misc
  MISC_MYSTERY_DATA,
  MISC_CUBE,
  MISC_SHADOW,

  //Spells
  SPELL_BULLET_HIT,
  SPELL_BUSTER_CHARGE,
  SPELL_CHARGED_BULLET_HIT,
  SPELL_GUARD_HIT,
  SPELL_WAVE,
  SPELL_PROG_BOMB,
  SPELL_AURA,
  SPELL_THUNDER,
  SPELL_REFLECT_SHIELD,
  SPELL_BUBBLE,
  SPELL_BUBBLE_TRAP,
  SPELL_ELEC_PULSE,
  SPELL_NINJA_STAR,
  SPELL_POOF,
  SPELL_HEAL,
  SPELL_AREAGRAB,
  SPELL_SWORD,
  SPELL_METEOR,
  SPELL_RING_EXPLOSION,
  SPELL_TWIN_FANG,
  SPELL_TORNADO,
  SPELL_FIREBURN,
  SPELL_MINI_BOMB,
  SPELL_CRACKSHOT,
  SPELL_YOYO,
  SPELL_SUPER_VULCAN,
  SPELL_ALPHA_ROCKET,
  SPELL_BEES,
  SPELL_IMPACT_FX,

  //Chip Select 
  CHIP_SELECT_MENU,
  CHIP_CURSOR_SMALL,
  CHIP_CURSOR_BIG,
  CHIP_CARDS,
  CHIP_ICONS,
  CHIP_NOSUPPORT,
  CHIP_NODATA,
  CHIP_SENDDATA,
  CHIP_MISSINGDATA,
  CHIP_LOCK,
  CHIP_FRAME,
  CUST_BADGE, 
  CUST_BADGE_MASK,
  CUST_FORM_SELECT,
  CUST_FORM_CURSOR,
  CUST_FORM_ITEM_BG,

  // In-battle signs
  PROGRAM_ADVANCE,
  BATTLE_START,
  ENEMY_DELETED, 
  DOUBLE_DELETE,
  TRIPLE_DELETE,
  COUNTER_HIT,
  ELEMENT_ALERT,

  // Battle Result
  BATTLE_RESULTS_FRAME,
  BATTLE_RESULTS_ZENNY,
  BATTLE_RESULTS_NODATA,
  BATTLE_RESULTS_PRESS_A,
  BATTLE_RESULTS_STAR,

  // Folder View
  FOLDER_CHIP_HOLDER,
  FOLDER_DOCK,
  PACK_DOCK,
  FOLDER_RARITY,
  FOLDER_SCROLLBAR,
  FOLDER_CURSOR,
  FOLDER_EQUIP,
  FOLDER_BOX,
  FOLDER_BOX_CURSOR,
  FOLDER_OPTIONS,
  FOLDER_SIZE,
  FOLDER_TEXTBOX,
  FOLDER_MB,
  FOLDER_NEXT_ARROW,
  FOLDER_SORT,
  LETTER_CURSOR,

  // Navi Select View
  GLOWING_PAD_ATLAS,
  GLOWING_PAD_BASE,
  GLOWING_PAD_BOTTOM,
  CHAR_NAME,
  CHAR_STAT,
  CHAR_ELEMENT,
  CHAR_INFO_BOX,
  SYMBOL_SLOTS,

  // Navigator and textbox
  MUG_NAVIGATOR,
  MUG_PROG,
  ANIMATED_TEXT_BOX,
  TEXT_BOX_NEXT_CURSOR,
  TEXT_BOX_CURSOR,

  //Background/Foreground
  BG_BLUE,
  TITLE_ANIM_CHAR,
  GAME_OVER,
  BATTLE_SELECT_BG,
  MAIN_MENU,
  MAIN_MENU_OW,
  MAIN_MENU_OW2,
  MAIN_MENU_ARROW,
  FOLDER_VIEW_BG,
  FOLDER_INFO_BG,
  FOLDER_CHANGE_NAME_BG,
  NAVI_SELECT_BG,

  // OVERWORLD
  OW_MR_PROG,
  OW_NUMBERMAN,

  // UI OTHER / ICONS
  AURA_NUMSET,
  ENEMY_HP_NUMSET,
  PLAYER_HP_NUMSET,
  GAMEPAD_SUPPORT_ICON,
  MAIN_MENU_UI,
  ELEMENT_ICON,

  // SHADER TEXTURE MAPS
  DISTORTION_TEXTURE,
  HEAT_TEXTURE,
  NOISE_TEXTURE,
  NOISE_INVERT_TEXTURE,

  // EDITOR UI
  LIGHT,

  // FONT
  FONT,

  // CONFIG UI
  AUDIO_ICO,
  END_BTN,

  // Query size of all texture types
  TEXTURE_TYPE_SIZE
};
