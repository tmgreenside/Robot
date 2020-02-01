#ifndef ROBOT_COMMON_ERROR_H
#define ROBOT_COMMON_ERROR_H

namespace Robot
{
namespace Common
{

enum Error
{
  ERR_NONE,
  ERR_NOT_INITIALIZED,
  ERR_NOT_FOUND,
  ERR_INVALID,
  ERR_FILE_NOT_FOUND
};

} // end namespace Common
} // end namespace Robot

#endif