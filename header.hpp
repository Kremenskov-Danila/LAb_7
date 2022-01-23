#pragma once


#include <iostream>
#include <vector>



void saveToFile(const std::string& filename, const std::vector<std::string>& data) {
	//  ������� ���������� ������� ���� � ����

	std::ofstream fout(filename);
	std::copy(data.begin(), data.end(), std::ostream_iterator<std::string>(fout, "\n"));


}

void loadFromFile(const std::string& filename, std::vector<std::string>& outData) {
	
	// ������� �������� ������� ���� �� �����
	std::fstream input(filename);	
	std::copy(std::istream_iterator<std::string>(input), std::istream_iterator<std::string>(), std::back_inserter(outData));

}