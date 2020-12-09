#include "Monom.h"

#include <gtest.h>

TEST(Monom, can_create_monom_with_with_positive_koef_and_sv)
{
    ASSERT_NO_THROW(Monom A(4,4));
}
TEST(Monom, can_create_monom_with_zero_koef)
{
    ASSERT_NO_THROW(Monom A(0, 4));
}
TEST(Monom, can_create_monom_with_negative_sv)
{
    ASSERT_NO_THROW(Monom A(4,-4));
}
TEST(Monom, can_create_monom_from_string)
{
    ASSERT_NO_THROW(Monom A("4x^4y^7x^6", 10));

}
TEST(Monom, can_get_monom)
{
    Monom A(4, 147);
    EXPECT_EQ("4.00xy^4z^7", A.GetMonom(10));
}
TEST(Monom, can_get_koef)
{
    Monom A(4, 147);
    EXPECT_EQ(A.Getkoef(), 4);
}
TEST(Monom, can_get_pvx)
{
    Monom A(4, 147);
    EXPECT_EQ(A.pvx(10), 1);
}
TEST(Monom, can_get_pvy)
{
    Monom A(4, 147);
    EXPECT_EQ(A.pvy(10), 4);
}
TEST(Monom, can_get_pvz)
{
    Monom A(4, 147);
    EXPECT_EQ(A.pvz(10), 7);
}
TEST(Monom, can_copy_monom)
{
    Monom A(4, 147);
    Monom B=A;
    EXPECT_EQ("4.00xy^4z^7", B.GetMonom(10));
}
TEST(Monom, can_multiply_monom)
{
    Monom A(4, 144);
    Monom B(4, 144);
    Monom C;
    C = A.multiply(B, 10);
    EXPECT_EQ("16.00x^2y^8z^8", C.GetMonom(10));
}
/*
TEST(Typeelem, cant_create_default_typelem)
{
    ASSERT_NO_THROW(Typeelem a);
}
TEST(Typeelem, throws_when_create_typeelem_with_negative_time)
{
    ASSERT_ANY_THROW(Typeelem m("", -4,4));
}
TEST(Typeelem, throws_when_create_typeelem_with_negative_count)
{
  ASSERT_ANY_THROW(Typeelem m("",4,-4));
}
TEST(Typeelem, can_create_copied_typeelem)
{
    Typeelem m;
    ASSERT_NO_THROW(Typeelem m2(m));
}
TEST(Typeelem, can_get_name_of_typeelem)
{
    Typeelem a("a", 4, 4);
    EXPECT_EQ(a.Getname(), "a");
}
TEST(Typeelem, can_get_time_of_typeelem)
{
    Typeelem a("a", 4, 4);
    EXPECT_EQ(a.Gettime(), 4);
}
TEST(Typeelem, can_get_count_of_typeelem)
{
    Typeelem a("a", 4, 4);
    EXPECT_EQ(a.Getcount(), 4);
}

*/

