/* ADD GRIDMAP CONSTRUCTION TO ORB_SLAM2 */

#ifndef GRIDMAP_H
#define GRIDMAP_H

#include "System.h"
#include "Map.h"
#include <set>

namespace ORB_SLAM2
{
class MapPoint;
class KeyFrame;
class Map;

class GridMap
{
public:
    GridMap(Map _map, float _x_min=-20.0, float _x_max=20.0, float _z_min=-20.0, float _z_max=20.0, float _map_resolution=0.005);
protected:
    Map mmap;
    float x_min, x_max, z_min, z_max, map_resolution;
    set<float> handled_kfIDs;
    float** grid_map;
};
}
