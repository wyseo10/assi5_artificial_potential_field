#ifndef APF_PARAM_H
#define APF_PARAM_H

#include "yaml-cpp/yaml.h"
#include <ament_index_cpp/get_package_share_directory.hpp>
#include <iostream>
#include <utility>

namespace apf {

class Param {
public:
  std::string frame_id = "world";

  // Agent
  double dt = 0.02; // timer period (s)
  double radius = 0.15; // (m)
  double max_acc = 6;   // (m/s^2)

  // APF
  //TODO: add parameters
  double zeta = 1.0;
  double damp = 1.0;
  double obs = 20.0;
  double q = 3.0;

  // Constant
  double infinity = 100000;

  Param() = default;
};

} // namespace apf

#endif // APF_PARAM_H
