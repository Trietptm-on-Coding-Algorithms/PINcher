#ifndef FUNCTION_INFO_H
#define FUNCTION_INFO_H

struct FunctionInfo {
    unsigned long ret_address;
    unsigned long ret_value;
    bool          modify_ret_value;
};

#endif