// Copyright (C) 2017  Federico Boniardi and Wolfram Burgard
// 
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include "squirrel_footprint_observer/footprint_observer.h"

#include <cstdlib>

int main(int argc, char *argv[]){
  ros::init(argc, argv, "squirrel_footprint_observer");

  squirrel_footprint_observer::FootprintObserver fo;
  fo.spin(10.0);
  
  return EXIT_SUCCESS;
}

