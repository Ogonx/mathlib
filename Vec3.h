#pragma once

struct Vec3 {
	float x;
	float y;
	float z;
};

inline Vec3 add(Vec3 a, Vec3 b) {
	return {a.x + b.x, a.y + b.y, a.z + b.z};
}

inline Vec3 subtract(Vec3 a, Vec3 b) {
	return { a.x - b.x, a.y - b.y, a.z - b.z };
}

inline Vec3 multiply(Vec3 v, Vec3 s) {
	return {v.x * s.x,v.y * s.y,v.z * s.z };
}

inline Vec3 scale(Vec3 v, float s) {
	return { v.x * s,v.y * s,v.z * s };
}

inline float dot(Vec3 a, Vec3 b) {
	return a.x * b.x + a.y * b.y + a.z * b.z;
}