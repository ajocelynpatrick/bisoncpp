#include "parser.ih"
#include "SKEL"

char Parser::s_defaultBaseclassSkeleton[] = _Skel_ "/bisonc++base.h";
char Parser::s_defaultClassSkeleton[]    = 
            "/usr/share/bisonc++/bisonc++.h";
char Parser::s_defaultImplementationSkeleton[]    = 
            "/usr/share/bisonc++/bisonc++.ih";
char Parser::s_defaultParsefunSkeleton[]    = 
            "/usr/share/bisonc++/bisonc++.cc";
