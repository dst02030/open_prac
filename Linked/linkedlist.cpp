#include "linkedlist.h"
#include <stdlib.h>
StringNode::StringNode()
{
    
}

StringNode::StringNode(char* val, StringNode* next): pNext(next)
{
    value = new char[strlen(val+1)];
    strcpy(value, val);
    value[strlen(val)] - '\0';
}

StringNode::~StringNode(){
    delete[] value;
}