#pragma once

struct Vec3 {
	float x;
	float y;
	float z;
};

inline Vec3 add(Vec3 a, Vec3 b) {
	return {a.x + b.x, a.y + b.y, a.z + b.z};
}
