#include <fstream>
#include <sstream>

#include "UTF8Reader.hh"
#include "UTF8StringReader.hh"
#include "StreamByteReader.hh"

using namespace std;

int main(int argc, char** argv) {

/*
  UTF8Reader reader;
	StreamByteReader byteReader;

	std::istream* stream = (std::istream*)&std::cin;
	byteReader.setInputStream(stream);
	reader.setByteReader((ByteReader*) &byteReader);
	*/
	
//	UTF8StringReader reader("sdfjdsklfjdkslfjdsl? dsfdsfds");
while(true) {
	UTF8StringReader reader;
	reader.setString("sfsdfdsf?sdfdsfs");

	string r = reader.readTill('?');
	std::cout << "[" << r << "]\n";
	reader.read();
	r = reader.readTill('?');
	std::cout << "[" << r << "]\n";
	}

	return 0;
}


