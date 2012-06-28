/*$ int $*/
template < typename T_SomeType, int t_someInt >
struct MyStruct
{
	T_SomeType arr[t_someInt];
};

/*$ instantiation $*/
MyStruct < double, 42 >    myArr;

int myInt;
std::cin >> myInt;
MyStruct < bool, myInt >   myArr2;	// FEHLER!
