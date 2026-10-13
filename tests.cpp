#include <catch2/catch_test_macros.hpp>
#include "Vec3.h"
#include <catch2/catch_approx.hpp>

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

TEST_CASE("subtract", "[vec3]") {

	//test 1// 
	Vec3 a{ 2.0f,0.0f,1.0f };
	Vec3 b{ 1.0f,3.0f,1.0f };
	Vec3 diff = subtract(a, b);
	REQUIRE(diff.x == 1.0f);
	REQUIRE(diff.y == -3.0f);
	REQUIRE(diff.z == 0.0f);

	//test 2// 
	Vec3 c{ 1.0f,2.0f,3.0f };
	Vec3 d{ 4.0f,5.0f,6.0f };
	Vec3 diff2 = subtract(c, d);
	REQUIRE(diff2.x == -3.0f);
	REQUIRE(diff2.y == -3.0f);
	REQUIRE(diff2.z == -3.0f);
}

TEST_CASE("multiply", "[vec3]") {

	//test 1// 
	Vec3 a{ 2.0f,0.0f,1.0f };
	Vec3 b{ 1.0f,3.0f,1.0f };
	Vec3 times = multiply(a, b);
	REQUIRE(times.x == 2.0f);
	REQUIRE(times.y == 0.0f);
	REQUIRE(times.z == 1.0f);

	//test 2// 
	Vec3 c{ 1.0f,2.0f,3.0f };
	Vec3 d{ 4.0f,5.0f,6.0f};
	Vec3 times2 = multiply(c, d);
	REQUIRE(times2.x == 4.0f);
	REQUIRE(times2.y == 10.0f);
	REQUIRE(times2.z == 18.0f);

}

TEST_CASE("Scale", "[vec3]") {

	//test 1// 
	Vec3 c{ 1.0f,2.0f,3.0f };
	float d{ 2.0f };
	Vec3 times = scale(c, d);
	REQUIRE(times.x == 2.0f);
	REQUIRE(times.y == 4.0f);
	REQUIRE(times.z == 6.0f);

	//test 2// 
	Vec3 v{ 1.0f,2.0f,3.0f };
	float s{ 0.0f };
	Vec3 times2 = scale(v, s);
	REQUIRE(times2.x == 0.0f);
	REQUIRE(times2.y == 0.0f);
	REQUIRE(times2.z == 0.0f);
}

TEST_CASE("Dot", "[vec3]") {

	//test 1// 
	Vec3 a{ 1.0f,2.0f,3.0f };
	Vec3 b{ 2.0f,3.0f, 4.0f};
	float product = dot(a, b);
	REQUIRE(product == 20.0f);
	

	//test 2// 
	Vec3 c{ 1.0f,2.0f,3.0f };
	Vec3 d{ 4.0f,5.0f,6.0f };
	float product2 = dot(c, d);
	REQUIRE(product2 == 32.0f);

	//test3//
	Vec3 e{ 2.0f,0.0f,1.0f };
	Vec3 f{ 1.0f,3.0f,1.0f };
	float product3 = dot(e, f);
	REQUIRE(product3 == 3.0f);
}

TEST_CASE("length", "[vec3]") {

	Vec3 a = { 2.0f, 5.0f, 2.0f };
	float len = length(a);
	REQUIRE(len == Catch::Approx(5.7446f).margin(0.001f));


	Vec3 b = { 3.0f, 4.0f, 0.0f };
	float len2 = length(b);
	REQUIRE(len2 == 5.0f);

	Vec3 c = { 0.0f, 0.0f, 0.0f };
	float len3 = length(c);
	REQUIRE(len3 == 0.0f);

}