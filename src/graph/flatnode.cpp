//
//  flatnode.cpp
//  jpcnn
//
//  Created by Peter Warden on 1/9/14.
//  Copyright (c) 2014 Jetpac, Inc. All rights reserved.
//

#include "flatnode.h"

#include <assert.h>
#include <string.h>

#include "buffer.h"
#include "binary_format.h"

FlatNode::FlatNode() : BaseNode() {
}

FlatNode::~FlatNode() {
  // Do nothing
}

Buffer* FlatNode::run(Buffer* input) {
  return input;
}

BaseNode* new_flatnode_from_tag(SBinaryTag* tag) {
  const char* name = get_string_from_dict(tag, "name");
  assert(strcmp(name, "flat") == 0);
  FlatNode* result = new FlatNode();
  return result;
}
