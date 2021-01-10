#include<gtest/gtest.h>

#include"complejos.h"

TEST(ComplejoTest, suma){
    Date Fecha1 = Date(1,7,2019);
    Date Fecha2 = Date(4,12,1019);
    Date Fecha3 = Date(12,8,1999);

    EXPECT_EQ(true, Fecha1>Fecha2);
    EXPECT_EQ(false, Fecha2>Fecha3);
}
TEST(ComplejoTest, resta){
    Date Fecha1 = Date(1,7,2019);
    Date Fecha2 = Date(4,12,1019);
    Date Fecha3 = Date(12,8,1999);

    EXPECT_EQ(false, Fecha1<Fecha2);
    EXPECT_EQ(true, Fecha2<Fecha3);
}
