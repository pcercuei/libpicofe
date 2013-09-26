struct in_default_bind;

struct menu_keymap {
	short key;
	short pbtn;
};

struct in_sdl_pdata {
	const struct in_default_bind *defbinds;
	const struct menu_keymap *key_map;
	size_t kmap_size;
	const struct menu_keymap *joy_map;
	size_t jmap_size;
};

int in_sdl_init(const struct in_sdl_pdata *pdata,
		 void (*handler)(void *event));
