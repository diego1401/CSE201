#include "Shape.hpp"
using namespace Geometry;

Shape::Shape(std::string lab)
{
    setLabel(lab);
}

void Shape::setLabel(std::string lab)
{
    label = lab;
}

std::string Shape::getLabel() const
{

   return label;
}
