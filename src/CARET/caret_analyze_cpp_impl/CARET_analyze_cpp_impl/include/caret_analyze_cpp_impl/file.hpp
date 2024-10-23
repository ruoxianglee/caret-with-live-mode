// Copyright 2021 Research Institute of Systems Planning, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.


#ifndef CARET_ANALYZE_CPP_IMPL__FILE_HPP_

#include <string>

class File
{
public:
  File();

  explicit File(const char path[]);
  explicit File(std::string path);

  virtual ~File() {}

  virtual const std::string & get_data() const;

private:
  std::string data_;
};

#endif  //  CARET_ANALYZE_CPP_IMPL__FILE_HPP_
#define CARET_ANALYZE_CPP_IMPL__FILE_HPP_
