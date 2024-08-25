#ifndef StrawberryPLUGIN_H
#define StrawberryPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include "Tool.h"
#include <string>

class StrawberryPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "Strawberry";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
