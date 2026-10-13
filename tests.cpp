#include <catch2/catch_test_macros.hpp>
#include "Vec3.h"

TEST_CASE("Vec3 stores its values", "[vec3]"){
	Vec3 v{1.0f,2.0f,3.0f};
    REQUIRE(v.x == 1.0f);
	REQUIRE(v.y == 2.0f);
	REQUIRE(v.z == 3.0f);

}

TEST_CASE("addition", "[vec3]") {
	
    //test 1// 
	Vec3 a{ 2.0f,0.0f,1.0f };
	Vec3 b{ 1.0f,3.0f,1.0f };
	Vec3 sum = add(a, b);
	REQUIRE(sum.x == 3.0f);
	REQUIRE(sum.y == 3.0f);
	REQUIRE(sum.z == 2.0f);

	//test 2// 
	Vec3 c{ 1.0f,2.0f,3.0f };
	Vec3 d{ 4.0f,5.0f,6.0f };
	Vec3 sum2 = add(c, d);
	REQUIRE(sum2.x == 5.0f);
	REQUIRE(sum2.y == 7.0f);
	REQUIRE(sum2.z == 9.0f);
}
