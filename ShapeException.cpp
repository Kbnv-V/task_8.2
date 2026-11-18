#include "ShapeException.h"

ShapeException::ShapeException(std::string_view err) : domain_error(std::string{ err }), errorStr{ err }
{
};

const char* ShapeException::what() const noexcept
{
	return errorStr.c_str();
}
