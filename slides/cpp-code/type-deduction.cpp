/*$ begin $*/
template < typename T >
void foo( T p )
{ std::cout << p; }

foo < int > ( 42 );
/*$ deduction $*/
foo(42);
