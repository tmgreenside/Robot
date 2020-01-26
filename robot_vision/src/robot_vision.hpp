#ifndef ROBOT_VISION_HPP
#define ROBOT_VISION_HPP

#include <string>
#include <memory>

namespace Robot {
namespace Vision {

class Robot_vision
{
public:
  Robot_vision(std::string model_path, std::string weights_path);
  ~Robot_vision();

private:
  struct Impl;
  std::unique_ptr<Impl> m_p_impl;
};

} // end namespace Vision
} // end namespace Robot

#endif