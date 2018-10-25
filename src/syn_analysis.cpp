//
// Created by Azure on 10/19/2018.
//

#include "syn_public.h"
#include "syn_private.h"

using namespace std;

std::vector<std::string> deps;

int syn_main(){
    if (scan_deps() > 0){
        for (int i = 1; i < deps.size(); i++) {
            string dep = deps.at(i);
            if (lex_process_file(dep) != 0){
                return -1;
            }
        }
    }
}

int scan_deps() {
    int i = 0;
    while (i < lexed_file.size()) {
        Token curVec = lexed_file.at(i);
        if (curVec.value == "import"){
            i++;
            Token curVec = lexed_file.at(i);
            deps.push_back(curVec.value);
        }
    }
}