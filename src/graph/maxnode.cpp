//
//  maxnode.cpp
//  jpcnn
//
//  Created by Peter Warden on 1/9/14.
//  Copyright (c) 2014 Jetpac, Inc. All rights reserved.
//

#include "maxnode.h"

#include <assert.h>
#include <string.h>

#include "buffer.h"
#include "binary_format.h"

MaxNode::MaxNode() : BaseNode() {
}

MaxNode::~MaxNode() {
  // Do nothing
}

Buffer* MaxNode::run(Buffer* input) {
  return input;
}

BaseNode* new_maxnode_from_tag(SBinaryTag* tag) {
  const char* name = get_string_from_dict(tag, "name");
  assert(strcmp(name, "max") == 0);
  MaxNode* result = new MaxNode();
  return result;
}
