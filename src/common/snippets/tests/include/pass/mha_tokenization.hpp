// Copyright (C) 2023 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include <common_test_utils/ngraph_test_utils.hpp>

namespace ov {
namespace test {
namespace snippets {

class TokenizeMHASnippetsTests : public TransformationTestsF {
public:
    virtual void run();
};

}  // namespace snippets
}  // namespace test
}  // namespace ov
