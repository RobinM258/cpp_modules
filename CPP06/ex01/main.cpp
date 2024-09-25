#include "Serialize.hpp"

int main() {
	Data* data;
	uintptr_t rawData;
	Data* retData;
	data = new Data;

	std::cout << "Data             : " << data << std::endl;
	rawData = Serializer::serialize(data);
	std::cout << "Raw data         : " << rawData << std::endl;
	retData = Serializer::deserialize(rawData);
	std::cout << "Deserialized data: " << retData << std::endl;

	delete data;

	return 0;
}

