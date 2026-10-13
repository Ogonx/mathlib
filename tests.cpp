#include <catch2/catch_test_macros.hpp>
#include "Vec3.h"

TEST_CASE("Vec3 stores its values", "[vec3]"){
	Vec3 v{1.0f,2.0f,3.0f};
    REQUIRE(v.x == 1.0f);
	REQUIRE(v.y == 2.0f);
	REQUIRE(v.z == 3.0f);

}