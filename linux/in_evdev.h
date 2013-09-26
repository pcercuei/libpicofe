
struct in_default_bind;
extern int in_evdev_allow_abs_only;

struct menu_keymap {
	short key;
	short pbtn;
};

struct in_evdev_pdata {
	const struct in_default_bind *defbinds;
	const struct menu_keymap *key_map;
	size_t kmap_size;
};

int in_evdev_init(const struct in_evdev_pdata *pdata);
