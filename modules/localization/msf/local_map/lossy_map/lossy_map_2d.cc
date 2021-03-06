/******************************************************************************
 * Copyright 2017 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#include "modules/localization/msf/local_map/lossy_map/lossy_map_2d.h"

namespace apollo {
namespace localization {
namespace msf {

LossyMap2D::LossyMap2D(LossyMapConfig2D* config) : BaseMap(config) {}

LossyMap2D::~LossyMap2D() {}

void LossyMap2D::PreloadMapArea(const Eigen::Vector3d& location,
                                const Eigen::Vector3d& trans_diff,
                                unsigned int resolution_id,
                                unsigned int zone_id) {
  BaseMap::PreloadMapArea(location, trans_diff, resolution_id, zone_id);
  return;
}

bool LossyMap2D::LoadMapArea(const Eigen::Vector3d& seed_pt3d,
                             unsigned int resolution_id, unsigned int zone_id,
                             int filter_size_x, int filter_size_y) {
  BaseMap::LoadMapArea(seed_pt3d, resolution_id, zone_id, filter_size_x,
                       filter_size_y);
  return true;
}

}  // namespace msf
}  // namespace localization
}  // namespace apollo
