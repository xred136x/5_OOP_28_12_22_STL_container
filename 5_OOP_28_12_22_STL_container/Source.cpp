#include<iostream>
#include<vector>
// STL 
// vector ������, ������
// forvard list ����������� ������
// list ���������� ������
// queue �������
// stack ����
// map ���
// set ���
// unjrdered_map 
// unordered_set ���������������
// pri
// multiset   ������������ �������
// multimap


int main() {
	setlocale(LC_ALL, "Russian");
	std::vector<int> arr = { 123, 54 };
	arr.push_back(670);
	arr.reserve(20);// ����� �����������
	arr.shrink_to_fit(); // ����� ������ �� ������� size
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
	std::cout << "arr size(������): " << arr.size() << '\n';
	std::cout << "arr capacity(�����������): " << arr.capacity() << '\n';
	std::cout << '\n';


	return 0;
}