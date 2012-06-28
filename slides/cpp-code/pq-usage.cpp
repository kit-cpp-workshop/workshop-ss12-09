// #include <priority_queue> #include <functional> // for greater<T>

struct Bar_t { int a, b; };
struct BartComp {
	bool operator() (const Bar_t &lhs, const Bar_t &rhs) const {
		return (lhs.a != rhs.a) ? (lhs.a < rhs.a) : (lhs.b < rhs.b);
	}
};

std::priority_queue<int> pq1; // PQ of ints, ordering default == less<T>
std::priority_queue<int, greater<int> > pq2; // Inv. ordering -> MinHeap
std::priority_queue<Bar_t, BartComp> pq3; // Bar_t's ordered by BartComp
