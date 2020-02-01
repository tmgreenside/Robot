#ifndef ROBOT_VISION_HPP
#define ROBOT_VISION_HPP

#include <string>
#include <memory>

#include "common/error.h"

namespace Robot {
namespace Vision {

class Robot_vision
{
public:
  Robot_vision(std::string model_path, std::string weights_path);
  ~Robot_vision();

  Robot::Common::Error start();
  Robot::Common::Error stop();
  Robot::Common::Error set_model(std::string model_path);
  Robot::Common::Error set_weights(std::string weights_path);

private:
  struct Impl;
  std::unique_ptr<Impl> m_p_impl;
};

} // end namespace Vision
} // end namespace Robot

#endif