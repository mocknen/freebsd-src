// -*- C++ -*-
//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

module;
#include <iosfwd>

export module std:iosfwd;
export namespace std {
  using std::streampos;
#ifndef _LIBCPP_HAS_NO_WIDE_CHARACTERS
  using std::wstreampos;
#endif
  using std::u16streampos;
  using std::u32streampos;
  using std::u8streampos;

  using std::istreambuf_iterator;
  using std::ostreambuf_iterator;

  using std::fpos;
} // namespace std
