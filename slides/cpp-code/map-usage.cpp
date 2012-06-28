#include <map>
typedef std::map < int, bar_t > Barmap_t;
Barmap_t barmap;                 // create a map mapping int -> bar_t
barmap[23] = bar_t("foo");       // insert a bar_t with key 23

typedef Barmap_t::const_iterator it_t;
it_t found = barmap.find(23);   // search for an element using a key
if(barmap.end() == found) { /* no element with this key */ }
