//
// Created by hydro1 on 10.04.19.
//

#ifndef PLUGINLIB_TUTORIALS__POLYGON_BASE_H
#define PLUGINLIB_TUTORIALS__POLYGON_BASE_H

namespace polygon_base
{
    class RegularPolygon
    {
    public:
        virtual void initialize(double side_lenth) = 0;
        virtual double area() = 0;
        virtual ~RegularPolygon(){}

    protected:
        RegularPolygon(){}
    };
}

#endif //PLUGINLIB_TUTORIALS__POLYGON_BASE_H
