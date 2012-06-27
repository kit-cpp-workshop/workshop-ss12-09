#include <map>

std::map<int, bar_t> barmap; // create a map mapping int -> bar_t
barmap[23] = bar_t("foo"); // insert a bar_t with key 23
barmap.insert(pair<int, bar_t>(42, "wuppdi");
