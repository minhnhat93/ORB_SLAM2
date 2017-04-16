#include "GridMap.h"

namespace ORB_SLAM2
{
    GridMap::GridMap(Map _map, float _x_min=-20.0, float _x_max=20.0, float _z_min=-20.0, float _z_max=20.0, float _map_resolution=0.005)
    {
        x_min = _x_min;
        x_max = _x_max;
        z_min = _z_min;
        z_max = _z_max;
        map_resolution = _map_resolution;
        mmap = _map;
        handled_kfIDs = set<float>();
        
    }
}
