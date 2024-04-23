#pragma once

// Raylib + std
#include <cstdlib>
#include <iostream>
#include <raylib-cpp.hpp>
#include <raylib.h>
#include <cmath> // absolute val
#include <algorithm>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <iomanip>
#include <vector>
#include <random>
using namespace std;

// A port of Robert Penner's easing equations to C (http://robertpenner.com/easing/)
#include "engine/Reasings.h"

// Custom Headers:
#include "objects/DrawSections.h"
#include "engine/TimeManager.h"
#include "engine/KeyFrames.h"
#include "engine/Animation.h"
#include "engine/AnimStateController.h"
#include "engine/AnimationFactory.h"
#include "objects/GameObjects.h"
#include "objects/ObjFactory.h"

