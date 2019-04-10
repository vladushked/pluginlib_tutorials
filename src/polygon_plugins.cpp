//
// Created by hydro1 on 10.04.19.
//

#include <pluginlib/class_list_macros.h>
#include "../include/pluginlib_tutorials_/polygon_base.h"
#include "../include/pluginlib_tutorials_/polygon_plugins.h"

PLUGINLIB_EXPORT_CLASS(polygon_plugins::Triangle, polygon_base::RegularPolygon)
PLUGINLIB_EXPORT_CLASS(polygon_plugins::Square, polygon_base::RegularPolygon)
