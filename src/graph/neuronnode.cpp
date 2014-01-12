//
//  neuronnode.cpp
//  jpcnn
//
//  Created by Peter Warden on 1/9/14.
//  Copyright (c) 2014 Jetpac, Inc. All rights reserved.
//

#include "neuronnode.h"

#include <assert.h>
#include <string.h>

#include "buffer.h"
#include "binary_format.h"

NeuronNode::NeuronNode() : BaseNode() {
}

NeuronNode::~NeuronNode() {
  // Do nothing
}

Buffer* NeuronNode::run(Buffer* input) {
  return input;
}

BaseNode* new_neuronnode_from_tag(SBinaryTag* tag) {
  const char* name = get_string_from_dict(tag, "name");
  assert(strcmp(name, "neuron") == 0);
  NeuronNode* result = new NeuronNode();
  return result;
}
