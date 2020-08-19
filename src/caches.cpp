#include "caches.h"

static ResultSet* fonts;

ResultSet& get_font_list() {
  return *fonts;
}

static FontReg* font_registry;

FontReg& get_font_registry() {
  return *font_registry;
}

static FreetypeCache* font_cache;

FreetypeCache& get_font_cache() {
  return *font_cache;
}

static EmojiMap* emoji_map;

EmojiMap& get_emoji_map() {
  return *emoji_map;
}

static FontMap* font_locations;

FontMap& get_font_map() {
  return *font_locations; 
}

void init_caches(DllInfo* dll) {
  fonts = new ResultSet();
  font_registry = new FontReg();
  font_cache = new FreetypeCache();
  emoji_map = new EmojiMap();
  font_locations = new FontMap();
}

void unload_caches(DllInfo* dll) {
  delete fonts;
  delete font_registry;
  delete font_cache;
  delete emoji_map;
  delete font_locations;
}
