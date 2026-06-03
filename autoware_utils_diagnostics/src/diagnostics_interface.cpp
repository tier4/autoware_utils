// Copyright 2023 Autoware Foundation
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

// All DiagnosticsInterface methods are now inline in the header (templated on NodeT).
// This translation unit is intentionally empty and only kept to avoid breaking CMake targets
// that list src/diagnostics_interface.cpp.

#include "autoware_utils_diagnostics/diagnostics_interface.hpp"
