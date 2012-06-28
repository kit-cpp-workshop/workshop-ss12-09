/*$ begin $*/
template < typename T_Iterator >
void myPrint(T_Iterator p_beg, T_Iterator p_end)
{
	for(T_Iterator i  = p_beg; i != p_end; ++i)
	{ std:: cout << *i << " : "; }
}
/*$ main $*/
int main() {
	std::vector < int >  myVector = { 1, 2, 42, 3 };
	std::list < double > myList = { 42, 3, 1, 22 };
	
	myPrint( myVector.begin(), myVector.end() );
	myPrint( myList.begin(), myList.end() );
	
	myPrint( myVector.begin() + 3, myVector.end() );
	myPrint( myList.begin()   + 3, myList.end() );  // FEHLER!
	myPrint( std::next(myList.begin(), 3), myList.end() ); // OK
}
