/*
Copyright 2018 Gordon Brown

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef __GPU_REDUCE_H__
#define __GPU_REDUCE_H__

#include <bits/sycl_policy.h>
#include <CL/sycl.hpp>

namespace cppcon {

template <class ContiguousIt, class T, class BinaryOperation,
          typename KernelName>
T reduce(sycl_execution_policy_t<KernelName> policy, ContiguousIt first,
         ContiguousIt last, T init, BinaryOperation binary_op) {

  /* implement me */

  return T{};
}

}  // namespace cppcon

#endif  // __GPU_REDUCE_H__
