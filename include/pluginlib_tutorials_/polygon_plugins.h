//
// Created by hydro1 on 10.04.19.
//

#ifndef PLUGINLIB_TUTORIALS__POLYGON_PLUGINS_H
#define PLUGINLIB_TUTORIALS__POLYGON_PLUGINS_H

#include "polygon_base.h"
#include <cmath>

namespace polygon_plugins
{
    class Triangle: public polygon_base::RegularPolygon
    {
    public:
        Triangle(){}

        void initialize(double side_lenth)
        {
            side_length_ = side_length;
        }
        double getHeight()
        {
            return sqrt((side_length_ * side_length_) - ((side_length_ / 2) * (side_length_ / 2)));
        }
        double area()
        {
            return 0.5 * side_length_ * getHeight();
        }
    private:
        double side_length_;
    };

    class Square: public polygon_base::RegularPolygon
    {
    public:
        Square(){}

        void initialize(double side_lenth)
        {
            side_length_ = side_length;
        }

        double area()
        {
            return side_length_ * side_length_;
        }
    private:
        double side_length_;
    };
}

#endif //PLUGINLIB_TUTORIALS__POLYGON_PLUGINS_H
