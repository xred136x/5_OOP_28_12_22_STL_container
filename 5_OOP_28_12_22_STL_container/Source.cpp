#include<iostream>
#include<vector>
// STL 
// vector вектор, массив
// forvard list односвязный список
// list двусвязный список
// queue очередь
// stack стек
// map мап
// set сет
// unjrdered_map 
// unordered_set несортированный
// pri
// multiset   приоритетная очередь
// multimap


int main() {
	setlocale(LC_ALL, "Russian");
	std::vector<int> arr = { 123, 54 };
	arr.push_back(670);
	arr.reserve(20);// новая вместимость
	arr.shrink_to_fit(); // ужать массив до размера size
	std::vector<int> vec;
	//arr.push_back(22);

	for (size_t i = 0; i < arr.size(); i++) {
		std::cout << arr[i] << ' ';
	}
	std::vector<int>::iterator it;
	for (std::vector<int>::const_iterator it = arr.begin(); it != arr.end(); it++) {
		std::cout << *it << ' ';
	}
	std::cout << '\n';
	std::cout << "arr size(размер): " << arr.size() << '\n';
	std::cout << "arr capacity(вместимость): " << arr.capacity() << '\n';
	std::cout << '\n';


	return 0;
}