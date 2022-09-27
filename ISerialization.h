#pragma once
//Specifying ISerializable class
#ifndef ISERIALIZABLE_H
#define ISERIALIZABLE_H

#include <boost/archive/text_iarchive.hpp> 
#include <boost/archive/text_oarchive.hpp> 
#include <boost/archive/xml_iarchive.hpp> 
#include <boost/archive/xml_oarchive.hpp> 
#include <iostream> 
#include <fstream> 
#include <sstream>
#include <boost/json.hpp>


class ISerializable {

public:
    ISerializable() {};

    std::string serialize() {
        std::string XMLstring;
        std::cout << XMLstring << std::endl;
        return XMLstring;
    }

    void deserialize(std::string filename) {
        std::ifstream ifs(filename);
        assert(ifs.good());
    }
};

#endif 


