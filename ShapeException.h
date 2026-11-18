#ifndef SHAPEEXCEPTION_H
#define SHAPEEXCEPTION_H

#include <stdexcept>
#include <string>
#include <string_view>

class ShapeException : public std::domain_error
{
private:
	std::string errorStr{};

public:
	ShapeException() = default;
	ShapeException(std::string_view err);

	const char* what() const noexcept override;
};

#endif

