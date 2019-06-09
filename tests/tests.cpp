/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#define _CXXTEST_HAVE_EH
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_BrickBlockTest_init = false;
#include "MyTestSuite.h"

static BrickBlockTest suite_BrickBlockTest;

static CxxTest::List Tests_BrickBlockTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_BrickBlockTest( "MyTestSuite.h", 13, "BrickBlockTest", suite_BrickBlockTest, Tests_BrickBlockTest );

static class TestDescription_suite_BrickBlockTest_testBrickBlock : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BrickBlockTest_testBrickBlock() : CxxTest::RealTestDescription( Tests_BrickBlockTest, suiteDescription_BrickBlockTest, 22, "testBrickBlock" ) {}
 void runTest() { suite_BrickBlockTest.testBrickBlock(); }
} testDescription_suite_BrickBlockTest_testBrickBlock;

static MetalBlockTest suite_MetalBlockTest;

static CxxTest::List Tests_MetalBlockTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MetalBlockTest( "MyTestSuite.h", 35, "MetalBlockTest", suite_MetalBlockTest, Tests_MetalBlockTest );

static class TestDescription_suite_MetalBlockTest_testMetalBlock : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MetalBlockTest_testMetalBlock() : CxxTest::RealTestDescription( Tests_MetalBlockTest, suiteDescription_MetalBlockTest, 44, "testMetalBlock" ) {}
 void runTest() { suite_MetalBlockTest.testMetalBlock(); }
} testDescription_suite_MetalBlockTest_testMetalBlock;

static DiagonalMetalBlockTest suite_DiagonalMetalBlockTest;

static CxxTest::List Tests_DiagonalMetalBlockTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_DiagonalMetalBlockTest( "MyTestSuite.h", 58, "DiagonalMetalBlockTest", suite_DiagonalMetalBlockTest, Tests_DiagonalMetalBlockTest );

static class TestDescription_suite_DiagonalMetalBlockTest_testDiagonalMetalBlock : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_DiagonalMetalBlockTest_testDiagonalMetalBlock() : CxxTest::RealTestDescription( Tests_DiagonalMetalBlockTest, suiteDescription_DiagonalMetalBlockTest, 67, "testDiagonalMetalBlock" ) {}
 void runTest() { suite_DiagonalMetalBlockTest.testDiagonalMetalBlock(); }
} testDescription_suite_DiagonalMetalBlockTest_testDiagonalMetalBlock;

static EnergyTransmitterTest suite_EnergyTransmitterTest;

static CxxTest::List Tests_EnergyTransmitterTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_EnergyTransmitterTest( "MyTestSuite.h", 82, "EnergyTransmitterTest", suite_EnergyTransmitterTest, Tests_EnergyTransmitterTest );

static class TestDescription_suite_EnergyTransmitterTest_testEnergyTransmitter : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_EnergyTransmitterTest_testEnergyTransmitter() : CxxTest::RealTestDescription( Tests_EnergyTransmitterTest, suiteDescription_EnergyTransmitterTest, 91, "testEnergyTransmitter" ) {}
 void runTest() { suite_EnergyTransmitterTest.testEnergyTransmitter(); }
} testDescription_suite_EnergyTransmitterTest_testEnergyTransmitter;

static RockTest suite_RockTest;

static CxxTest::List Tests_RockTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_RockTest( "MyTestSuite.h", 107, "RockTest", suite_RockTest, Tests_RockTest );

static class TestDescription_suite_RockTest_testRock : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RockTest_testRock() : CxxTest::RealTestDescription( Tests_RockTest, suiteDescription_RockTest, 116, "testRock" ) {}
 void runTest() { suite_RockTest.testRock(); }
} testDescription_suite_RockTest_testRock;

static EnergyBarTest suite_EnergyBarTest;

static CxxTest::List Tests_EnergyBarTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_EnergyBarTest( "MyTestSuite.h", 129, "EnergyBarTest", suite_EnergyBarTest, Tests_EnergyBarTest );

static class TestDescription_suite_EnergyBarTest_testEnergyBar : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_EnergyBarTest_testEnergyBar() : CxxTest::RealTestDescription( Tests_EnergyBarTest, suiteDescription_EnergyBarTest, 139, "testEnergyBar" ) {}
 void runTest() { suite_EnergyBarTest.testEnergyBar(); }
} testDescription_suite_EnergyBarTest_testEnergyBar;

static ButtonTest suite_ButtonTest;

static CxxTest::List Tests_ButtonTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ButtonTest( "MyTestSuite.h", 153, "ButtonTest", suite_ButtonTest, Tests_ButtonTest );

static class TestDescription_suite_ButtonTest_testButton : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ButtonTest_testButton() : CxxTest::RealTestDescription( Tests_ButtonTest, suiteDescription_ButtonTest, 163, "testButton" ) {}
 void runTest() { suite_ButtonTest.testButton(); }
} testDescription_suite_ButtonTest_testButton;

static AcidTest suite_AcidTest;

static CxxTest::List Tests_AcidTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_AcidTest( "MyTestSuite.h", 176, "AcidTest", suite_AcidTest, Tests_AcidTest );

static class TestDescription_suite_AcidTest_testAcid : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AcidTest_testAcid() : CxxTest::RealTestDescription( Tests_AcidTest, suiteDescription_AcidTest, 186, "testAcid" ) {}
 void runTest() { suite_AcidTest.testAcid(); }
} testDescription_suite_AcidTest_testAcid;

static OutOfRangeTest suite_OutOfRangeTest;

static CxxTest::List Tests_OutOfRangeTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_OutOfRangeTest( "MyTestSuite.h", 199, "OutOfRangeTest", suite_OutOfRangeTest, Tests_OutOfRangeTest );

static class TestDescription_suite_OutOfRangeTest_testOutOfRange : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_OutOfRangeTest_testOutOfRange() : CxxTest::RealTestDescription( Tests_OutOfRangeTest, suiteDescription_OutOfRangeTest, 209, "testOutOfRange" ) {}
 void runTest() { suite_OutOfRangeTest.testOutOfRange(); }
} testDescription_suite_OutOfRangeTest_testOutOfRange;

static ChellTest suite_ChellTest;

static CxxTest::List Tests_ChellTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ChellTest( "MyTestSuite.h", 236, "ChellTest", suite_ChellTest, Tests_ChellTest );

static class TestDescription_suite_ChellTest_testChellInit : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ChellTest_testChellInit() : CxxTest::RealTestDescription( Tests_ChellTest, suiteDescription_ChellTest, 247, "testChellInit" ) {}
 void runTest() { suite_ChellTest.testChellInit(); }
} testDescription_suite_ChellTest_testChellInit;

static class TestDescription_suite_ChellTest_testChellFalls : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ChellTest_testChellFalls() : CxxTest::RealTestDescription( Tests_ChellTest, suiteDescription_ChellTest, 261, "testChellFalls" ) {}
 void runTest() { suite_ChellTest.testChellFalls(); }
} testDescription_suite_ChellTest_testChellFalls;

static class TestDescription_suite_ChellTest_testChellMovesRight : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ChellTest_testChellMovesRight() : CxxTest::RealTestDescription( Tests_ChellTest, suiteDescription_ChellTest, 283, "testChellMovesRight" ) {}
 void runTest() { suite_ChellTest.testChellMovesRight(); }
} testDescription_suite_ChellTest_testChellMovesRight;

static class TestDescription_suite_ChellTest_testChellMovesLeft : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ChellTest_testChellMovesLeft() : CxxTest::RealTestDescription( Tests_ChellTest, suiteDescription_ChellTest, 308, "testChellMovesLeft" ) {}
 void runTest() { suite_ChellTest.testChellMovesLeft(); }
} testDescription_suite_ChellTest_testChellMovesLeft;

static class TestDescription_suite_ChellTest_testChellJumps : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ChellTest_testChellJumps() : CxxTest::RealTestDescription( Tests_ChellTest, suiteDescription_ChellTest, 333, "testChellJumps" ) {}
 void runTest() { suite_ChellTest.testChellJumps(); }
} testDescription_suite_ChellTest_testChellJumps;

static EnergyBallTest suite_EnergyBallTest;

static CxxTest::List Tests_EnergyBallTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_EnergyBallTest( "MyTestSuite.h", 358, "EnergyBallTest", suite_EnergyBallTest, Tests_EnergyBallTest );

static class TestDescription_suite_EnergyBallTest_testEnergyBallInit : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_EnergyBallTest_testEnergyBallInit() : CxxTest::RealTestDescription( Tests_EnergyBallTest, suiteDescription_EnergyBallTest, 367, "testEnergyBallInit" ) {}
 void runTest() { suite_EnergyBallTest.testEnergyBallInit(); }
} testDescription_suite_EnergyBallTest_testEnergyBallInit;

static class TestDescription_suite_EnergyBallTest_testEnergyBallDoesntFall : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_EnergyBallTest_testEnergyBallDoesntFall() : CxxTest::RealTestDescription( Tests_EnergyBallTest, suiteDescription_EnergyBallTest, 381, "testEnergyBallDoesntFall" ) {}
 void runTest() { suite_EnergyBallTest.testEnergyBallDoesntFall(); }
} testDescription_suite_EnergyBallTest_testEnergyBallDoesntFall;

static class TestDescription_suite_EnergyBallTest_testEnergyBallHorizontalCollidesAndInvertsDirection : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_EnergyBallTest_testEnergyBallHorizontalCollidesAndInvertsDirection() : CxxTest::RealTestDescription( Tests_EnergyBallTest, suiteDescription_EnergyBallTest, 396, "testEnergyBallHorizontalCollidesAndInvertsDirection" ) {}
 void runTest() { suite_EnergyBallTest.testEnergyBallHorizontalCollidesAndInvertsDirection(); }
} testDescription_suite_EnergyBallTest_testEnergyBallHorizontalCollidesAndInvertsDirection;

static class TestDescription_suite_EnergyBallTest_testEnergyBallVerticalCollidesAndInvertsDirection : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_EnergyBallTest_testEnergyBallVerticalCollidesAndInvertsDirection() : CxxTest::RealTestDescription( Tests_EnergyBallTest, suiteDescription_EnergyBallTest, 423, "testEnergyBallVerticalCollidesAndInvertsDirection" ) {}
 void runTest() { suite_EnergyBallTest.testEnergyBallVerticalCollidesAndInvertsDirection(); }
} testDescription_suite_EnergyBallTest_testEnergyBallVerticalCollidesAndInvertsDirection;

static class TestDescription_suite_EnergyBallTest_testEnergyBallVerticalCollidesAgainstMetalBlockAndInvertsDirection : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_EnergyBallTest_testEnergyBallVerticalCollidesAgainstMetalBlockAndInvertsDirection() : CxxTest::RealTestDescription( Tests_EnergyBallTest, suiteDescription_EnergyBallTest, 449, "testEnergyBallVerticalCollidesAgainstMetalBlockAndInvertsDirection" ) {}
 void runTest() { suite_EnergyBallTest.testEnergyBallVerticalCollidesAgainstMetalBlockAndInvertsDirection(); }
} testDescription_suite_EnergyBallTest_testEnergyBallVerticalCollidesAgainstMetalBlockAndInvertsDirection;

static class TestDescription_suite_EnergyBallTest_testEnergyBallHorizontalCollidesAgainstMetalBlockAndInvertsDirection : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_EnergyBallTest_testEnergyBallHorizontalCollidesAgainstMetalBlockAndInvertsDirection() : CxxTest::RealTestDescription( Tests_EnergyBallTest, suiteDescription_EnergyBallTest, 478, "testEnergyBallHorizontalCollidesAgainstMetalBlockAndInvertsDirection" ) {}
 void runTest() { suite_EnergyBallTest.testEnergyBallHorizontalCollidesAgainstMetalBlockAndInvertsDirection(); }
} testDescription_suite_EnergyBallTest_testEnergyBallHorizontalCollidesAgainstMetalBlockAndInvertsDirection;

static class TestDescription_suite_EnergyBallTest_testEnergyBallVerticalCollidesAgainstBrickBlockAndDies : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_EnergyBallTest_testEnergyBallVerticalCollidesAgainstBrickBlockAndDies() : CxxTest::RealTestDescription( Tests_EnergyBallTest, suiteDescription_EnergyBallTest, 507, "testEnergyBallVerticalCollidesAgainstBrickBlockAndDies" ) {}
 void runTest() { suite_EnergyBallTest.testEnergyBallVerticalCollidesAgainstBrickBlockAndDies(); }
} testDescription_suite_EnergyBallTest_testEnergyBallVerticalCollidesAgainstBrickBlockAndDies;

static class TestDescription_suite_EnergyBallTest_testEnergyBallHorizontalCollidesAgainstBrickBlockAndDies : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_EnergyBallTest_testEnergyBallHorizontalCollidesAgainstBrickBlockAndDies() : CxxTest::RealTestDescription( Tests_EnergyBallTest, suiteDescription_EnergyBallTest, 531, "testEnergyBallHorizontalCollidesAgainstBrickBlockAndDies" ) {}
 void runTest() { suite_EnergyBallTest.testEnergyBallHorizontalCollidesAgainstBrickBlockAndDies(); }
} testDescription_suite_EnergyBallTest_testEnergyBallHorizontalCollidesAgainstBrickBlockAndDies;

static class TestDescription_suite_EnergyBallTest_testEnergyBallHorizontalCollidesAgainstDiagonalMetalBlockAndChangesDirection : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_EnergyBallTest_testEnergyBallHorizontalCollidesAgainstDiagonalMetalBlockAndChangesDirection() : CxxTest::RealTestDescription( Tests_EnergyBallTest, suiteDescription_EnergyBallTest, 554, "testEnergyBallHorizontalCollidesAgainstDiagonalMetalBlockAndChangesDirection" ) {}
 void runTest() { suite_EnergyBallTest.testEnergyBallHorizontalCollidesAgainstDiagonalMetalBlockAndChangesDirection(); }
} testDescription_suite_EnergyBallTest_testEnergyBallHorizontalCollidesAgainstDiagonalMetalBlockAndChangesDirection;

static class TestDescription_suite_EnergyBallTest_testEnergyBallVerticalCollidesAgainstDiagonalMetalBlockAndChangesDirection : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_EnergyBallTest_testEnergyBallVerticalCollidesAgainstDiagonalMetalBlockAndChangesDirection() : CxxTest::RealTestDescription( Tests_EnergyBallTest, suiteDescription_EnergyBallTest, 578, "testEnergyBallVerticalCollidesAgainstDiagonalMetalBlockAndChangesDirection" ) {}
 void runTest() { suite_EnergyBallTest.testEnergyBallVerticalCollidesAgainstDiagonalMetalBlockAndChangesDirection(); }
} testDescription_suite_EnergyBallTest_testEnergyBallVerticalCollidesAgainstDiagonalMetalBlockAndChangesDirection;

static MovingRockTest suite_MovingRockTest;

static CxxTest::List Tests_MovingRockTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MovingRockTest( "MyTestSuite.h", 603, "MovingRockTest", suite_MovingRockTest, Tests_MovingRockTest );

static class TestDescription_suite_MovingRockTest_testRockBlockHasGravity : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MovingRockTest_testRockBlockHasGravity() : CxxTest::RealTestDescription( Tests_MovingRockTest, suiteDescription_MovingRockTest, 615, "testRockBlockHasGravity" ) {}
 void runTest() { suite_MovingRockTest.testRockBlockHasGravity(); }
} testDescription_suite_MovingRockTest_testRockBlockHasGravity;

static class TestDescription_suite_MovingRockTest_testRockBlockMovesRight : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MovingRockTest_testRockBlockMovesRight() : CxxTest::RealTestDescription( Tests_MovingRockTest, suiteDescription_MovingRockTest, 635, "testRockBlockMovesRight" ) {}
 void runTest() { suite_MovingRockTest.testRockBlockMovesRight(); }
} testDescription_suite_MovingRockTest_testRockBlockMovesRight;

static class TestDescription_suite_MovingRockTest_testRockBlockMovesLeft : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MovingRockTest_testRockBlockMovesLeft() : CxxTest::RealTestDescription( Tests_MovingRockTest, suiteDescription_MovingRockTest, 673, "testRockBlockMovesLeft" ) {}
 void runTest() { suite_MovingRockTest.testRockBlockMovesLeft(); }
} testDescription_suite_MovingRockTest_testRockBlockMovesLeft;

static ChellDiesTest suite_ChellDiesTest;

static CxxTest::List Tests_ChellDiesTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ChellDiesTest( "MyTestSuite.h", 713, "ChellDiesTest", suite_ChellDiesTest, Tests_ChellDiesTest );

static class TestDescription_suite_ChellDiesTest_testChellDiesAgainstAcid : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ChellDiesTest_testChellDiesAgainstAcid() : CxxTest::RealTestDescription( Tests_ChellDiesTest, suiteDescription_ChellDiesTest, 724, "testChellDiesAgainstAcid" ) {}
 void runTest() { suite_ChellDiesTest.testChellDiesAgainstAcid(); }
} testDescription_suite_ChellDiesTest_testChellDiesAgainstAcid;

static class TestDescription_suite_ChellDiesTest_testChellDiesAgainstEnergyBall : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ChellDiesTest_testChellDiesAgainstEnergyBall() : CxxTest::RealTestDescription( Tests_ChellDiesTest, suiteDescription_ChellDiesTest, 769, "testChellDiesAgainstEnergyBall" ) {}
 void runTest() { suite_ChellDiesTest.testChellDiesAgainstEnergyBall(); }
} testDescription_suite_ChellDiesTest_testChellDiesAgainstEnergyBall;

static class TestDescription_suite_ChellDiesTest_testChellDiesWhenARockFallsOnHer : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ChellDiesTest_testChellDiesWhenARockFallsOnHer() : CxxTest::RealTestDescription( Tests_ChellDiesTest, suiteDescription_ChellDiesTest, 798, "testChellDiesWhenARockFallsOnHer" ) {}
 void runTest() { suite_ChellDiesTest.testChellDiesWhenARockFallsOnHer(); }
} testDescription_suite_ChellDiesTest_testChellDiesWhenARockFallsOnHer;

static class TestDescription_suite_ChellDiesTest_testChellDoesntDieWhenSheHitsARock : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ChellDiesTest_testChellDoesntDieWhenSheHitsARock() : CxxTest::RealTestDescription( Tests_ChellDiesTest, suiteDescription_ChellDiesTest, 818, "testChellDoesntDieWhenSheHitsARock" ) {}
 void runTest() { suite_ChellDiesTest.testChellDoesntDieWhenSheHitsARock(); }
} testDescription_suite_ChellDiesTest_testChellDoesntDieWhenSheHitsARock;

static ShootingTest suite_ShootingTest;

static CxxTest::List Tests_ShootingTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ShootingTest( "MyTestSuite.h", 835, "ShootingTest", suite_ShootingTest, Tests_ShootingTest );

static class TestDescription_suite_ShootingTest_testBlueTrayectoryShooting : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ShootingTest_testBlueTrayectoryShooting() : CxxTest::RealTestDescription( Tests_ShootingTest, suiteDescription_ShootingTest, 845, "testBlueTrayectoryShooting" ) {}
 void runTest() { suite_ShootingTest.testBlueTrayectoryShooting(); }
} testDescription_suite_ShootingTest_testBlueTrayectoryShooting;

static class TestDescription_suite_ShootingTest_testOrangeTrayectoryShooting : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ShootingTest_testOrangeTrayectoryShooting() : CxxTest::RealTestDescription( Tests_ShootingTest, suiteDescription_ShootingTest, 868, "testOrangeTrayectoryShooting" ) {}
 void runTest() { suite_ShootingTest.testOrangeTrayectoryShooting(); }
} testDescription_suite_ShootingTest_testOrangeTrayectoryShooting;

static class TestDescription_suite_ShootingTest_testTrayectoryBlueShootingBackwards : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ShootingTest_testTrayectoryBlueShootingBackwards() : CxxTest::RealTestDescription( Tests_ShootingTest, suiteDescription_ShootingTest, 891, "testTrayectoryBlueShootingBackwards" ) {}
 void runTest() { suite_ShootingTest.testTrayectoryBlueShootingBackwards(); }
} testDescription_suite_ShootingTest_testTrayectoryBlueShootingBackwards;

static class TestDescription_suite_ShootingTest_testTrayectoryOrangeShootingBackwards : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ShootingTest_testTrayectoryOrangeShootingBackwards() : CxxTest::RealTestDescription( Tests_ShootingTest, suiteDescription_ShootingTest, 916, "testTrayectoryOrangeShootingBackwards" ) {}
 void runTest() { suite_ShootingTest.testTrayectoryOrangeShootingBackwards(); }
} testDescription_suite_ShootingTest_testTrayectoryOrangeShootingBackwards;

static class TestDescription_suite_ShootingTest_testOrangeShotCollidesWithMetalBlock : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ShootingTest_testOrangeShotCollidesWithMetalBlock() : CxxTest::RealTestDescription( Tests_ShootingTest, suiteDescription_ShootingTest, 941, "testOrangeShotCollidesWithMetalBlock" ) {}
 void runTest() { suite_ShootingTest.testOrangeShotCollidesWithMetalBlock(); }
} testDescription_suite_ShootingTest_testOrangeShotCollidesWithMetalBlock;

static class TestDescription_suite_ShootingTest_testBlueShotCollidesAgainstMetalBlock : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ShootingTest_testBlueShotCollidesAgainstMetalBlock() : CxxTest::RealTestDescription( Tests_ShootingTest, suiteDescription_ShootingTest, 974, "testBlueShotCollidesAgainstMetalBlock" ) {}
 void runTest() { suite_ShootingTest.testBlueShotCollidesAgainstMetalBlock(); }
} testDescription_suite_ShootingTest_testBlueShotCollidesAgainstMetalBlock;

static class TestDescription_suite_ShootingTest_testBlueShotCollidesAndDies : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ShootingTest_testBlueShotCollidesAndDies() : CxxTest::RealTestDescription( Tests_ShootingTest, suiteDescription_ShootingTest, 1006, "testBlueShotCollidesAndDies" ) {}
 void runTest() { suite_ShootingTest.testBlueShotCollidesAndDies(); }
} testDescription_suite_ShootingTest_testBlueShotCollidesAndDies;

static PortalTest suite_PortalTest;

static CxxTest::List Tests_PortalTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_PortalTest( "MyTestSuite.h", 1037, "PortalTest", suite_PortalTest, Tests_PortalTest );

static class TestDescription_suite_PortalTest_testChellTeleportsCorrectly : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_PortalTest_testChellTeleportsCorrectly() : CxxTest::RealTestDescription( Tests_PortalTest, suiteDescription_PortalTest, 1046, "testChellTeleportsCorrectly" ) {}
 void runTest() { suite_PortalTest.testChellTeleportsCorrectly(); }
} testDescription_suite_PortalTest_testChellTeleportsCorrectly;

static class TestDescription_suite_PortalTest_testChellDoesntTeleport : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_PortalTest_testChellDoesntTeleport() : CxxTest::RealTestDescription( Tests_PortalTest, suiteDescription_PortalTest, 1061, "testChellDoesntTeleport" ) {}
 void runTest() { suite_PortalTest.testChellDoesntTeleport(); }
} testDescription_suite_PortalTest_testChellDoesntTeleport;

static class TestDescription_suite_PortalTest_testMetalBlocksInInitDoesntHavePortal : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_PortalTest_testMetalBlocksInInitDoesntHavePortal() : CxxTest::RealTestDescription( Tests_PortalTest, suiteDescription_PortalTest, 1075, "testMetalBlocksInInitDoesntHavePortal" ) {}
 void runTest() { suite_PortalTest.testMetalBlocksInInitDoesntHavePortal(); }
} testDescription_suite_PortalTest_testMetalBlocksInInitDoesntHavePortal;

static class TestDescription_suite_PortalTest_testChellCreatesTwoPortals : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_PortalTest_testChellCreatesTwoPortals() : CxxTest::RealTestDescription( Tests_PortalTest, suiteDescription_PortalTest, 1096, "testChellCreatesTwoPortals" ) {}
 void runTest() { suite_PortalTest.testChellCreatesTwoPortals(); }
} testDescription_suite_PortalTest_testChellCreatesTwoPortals;

static class TestDescription_suite_PortalTest_testChellTeleportsWhenHittingAPortal : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_PortalTest_testChellTeleportsWhenHittingAPortal() : CxxTest::RealTestDescription( Tests_PortalTest, suiteDescription_PortalTest, 1134, "testChellTeleportsWhenHittingAPortal" ) {}
 void runTest() { suite_PortalTest.testChellTeleportsWhenHittingAPortal(); }
} testDescription_suite_PortalTest_testChellTeleportsWhenHittingAPortal;

static class TestDescription_suite_PortalTest_testChellCreatesOtherPortalWhenHitting : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_PortalTest_testChellCreatesOtherPortalWhenHitting() : CxxTest::RealTestDescription( Tests_PortalTest, suiteDescription_PortalTest, 1179, "testChellCreatesOtherPortalWhenHitting" ) {}
 void runTest() { suite_PortalTest.testChellCreatesOtherPortalWhenHitting(); }
} testDescription_suite_PortalTest_testChellCreatesOtherPortalWhenHitting;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
