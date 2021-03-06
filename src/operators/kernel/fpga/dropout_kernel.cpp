/* Copyright (c) 2018 PaddlePaddle Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. */

#ifdef DROPOUT_OP

#include "operators/kernel/dropout_kernel.h"

namespace paddle_mobile {
namespace operators {

template <>
bool DropoutKernel<FPGA, float>::Init(DropoutParam<FPGA> *param) {
  param->Out()->ShareDataWith(*param->InputX());
  return true;
}

template <>
void DropoutKernel<FPGA, float>::Compute(
    const DropoutParam<FPGA> &param) const {
  // auto *input_x = param.InputX();
  // auto *out = param.Out();
  // auto input_x_ptr = input_x->data<float>();
  // auto out_ptr = out->mutable_data<float>();
  // out_ptr = const_cast<float *>(input_x_ptr);
}

}  // namespace operators
}  // namespace paddle_mobile

#endif
