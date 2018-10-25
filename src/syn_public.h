//
// Created by Azure on 10/19/2018.
//

#ifndef AZURESCRIPT_SYN_PUBLIC_H
#define AZURESCRIPT_SYN_PUBLIC_H

#ifndef AZURESCRIPT_COMMON_H
#include "common.h"
#endif

#ifndef AZURESCRIPT_LEX_PUBLIC_H
#import "lex_public.h"
#endif

/*
 * Public Vars
 */

extern std::vector<std::string> deps;

/*
 * Functions
 */

int syn_main();
int scan_deps();

#endif //AZURESCRIPT_SYN_PUBLIC_H
