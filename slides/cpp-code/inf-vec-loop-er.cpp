/*$ begin $*/
std::vector < int > vec = { 0, 1, 2, 3 };

for(It i = vec.begin(); i != vec.end(); ++i) {
	if( 1 == *i ) {
/*$no-assign$*/			vec.erase(i);	// schlechte Idee!
/*$assign$*/		i = vec.erase(i);	// genauso schlecht!
	}
}
/*$ while $*/
It i = vec.begin();
while(i != vec.end()) {
	if( 1 == *i ) { i = vec.erase(); continue; }
	++it;
}
/*$ remove_if $*/
#include <algorithm>
std::remove_if( vec.begin(), vec.end(), 1 );
