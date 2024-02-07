#include <gtest/gtest.h>
#include "LargeNumbers.h"

using LargeNumbers::literals::operator ""_LN;


TEST(Comparisons, less1) {
	LargeNumbers::LargeNumber a = -0.000000000026048038918855092_LN;
	LargeNumbers::LargeNumber b = -0.000000000033369588611304433_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less2) {
	LargeNumbers::LargeNumber a = -0.000000000043111226638909624_LN;
	LargeNumbers::LargeNumber b = -0.070507945559576698_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less3) {
	LargeNumbers::LargeNumber a = -0.000000000080008539491797396_LN;
	LargeNumbers::LargeNumber b = -0.85772119111109629_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less4) {
	LargeNumbers::LargeNumber a = -0.000000000044887166506362620_LN;
	LargeNumbers::LargeNumber b = -7.9257765216103737_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less5) {
	LargeNumbers::LargeNumber a = -0.000000000016335221309801085_LN;
	LargeNumbers::LargeNumber b = -4960421970.0980107_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less6) {
	LargeNumbers::LargeNumber a = -0.095819307603995188_LN;
	LargeNumbers::LargeNumber b = -0.000000000028867117031116327_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less7) {
	LargeNumbers::LargeNumber a = -0.054048247983605793_LN;
	LargeNumbers::LargeNumber b = -0.093136229519831894_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less8) {
	LargeNumbers::LargeNumber a = -0.028053888450575875_LN;
	LargeNumbers::LargeNumber b = -0.84258919911160014_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less9) {
	LargeNumbers::LargeNumber a = -0.076185685839950151_LN;
	LargeNumbers::LargeNumber b = -2.218767054071788_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less10) {
	LargeNumbers::LargeNumber a = -0.036548777685871346_LN;
	LargeNumbers::LargeNumber b = -7477123810.6218534_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less11) {
	LargeNumbers::LargeNumber a = -0.69034074467533889_LN;
	LargeNumbers::LargeNumber b = -0.000000000073304860021539904_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less12) {
	LargeNumbers::LargeNumber a = -0.70746672480858823_LN;
	LargeNumbers::LargeNumber b = -0.077436997911186017_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less13) {
	LargeNumbers::LargeNumber a = -0.84450599624978263_LN;
	LargeNumbers::LargeNumber b = -0.98431726845236620_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less14) {
	LargeNumbers::LargeNumber a = -0.5564580868396729_LN;
	LargeNumbers::LargeNumber b = -5.8041223417564320_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less15) {
	LargeNumbers::LargeNumber a = -0.72304893406176585_LN;
	LargeNumbers::LargeNumber b = -9122071277.7496364_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less16) {
	LargeNumbers::LargeNumber a = -9.9478713451941512_LN;
	LargeNumbers::LargeNumber b = -0.000000000092445519180558280_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less17) {
	LargeNumbers::LargeNumber a = -1.7276071299684814_LN;
	LargeNumbers::LargeNumber b = -0.056807761225435595_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less18) {
	LargeNumbers::LargeNumber a = -2.2082616541263936_LN;
	LargeNumbers::LargeNumber b = -0.35124835037958599_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less19) {
	LargeNumbers::LargeNumber a = -6.5054386703444965_LN;
	LargeNumbers::LargeNumber b = -7.2677714610650719_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less20) {
	LargeNumbers::LargeNumber a = -8.8392300195993330_LN;
	LargeNumbers::LargeNumber b = -7599447082.5141933_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less21) {
	LargeNumbers::LargeNumber a = -6840515649.060211_LN;
	LargeNumbers::LargeNumber b = -0.000000000030401225757660793_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less22) {
	LargeNumbers::LargeNumber a = -1578196312.3744002_LN;
	LargeNumbers::LargeNumber b = -0.058933514341845108_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less23) {
	LargeNumbers::LargeNumber a = -5115149214.5814595_LN;
	LargeNumbers::LargeNumber b = -0.16182939119499794_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less24) {
	LargeNumbers::LargeNumber a = -7979956901.849012_LN;
	LargeNumbers::LargeNumber b = -1.9532071400141017_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less25) {
	LargeNumbers::LargeNumber a = -9395716874.4807998_LN;
	LargeNumbers::LargeNumber b = -3746900017.2533545_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less26) {
	LargeNumbers::LargeNumber a = -0.00000000006246299304379105_LN;
	LargeNumbers::LargeNumber b = 0.00000000057305116105123414_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less27) {
	LargeNumbers::LargeNumber a = -0.000000000039935092577388062_LN;
	LargeNumbers::LargeNumber b = 0.55471041788772186_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less28) {
	LargeNumbers::LargeNumber a = -0.000000000028836977158565353_LN;
	LargeNumbers::LargeNumber b = 2.7205066127291832_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less29) {
	LargeNumbers::LargeNumber a = -0.000000000099986960759988173_LN;
	LargeNumbers::LargeNumber b = 29.989563349826540_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less30) {
	LargeNumbers::LargeNumber a = -0.00000000001743010855651358_LN;
	LargeNumbers::LargeNumber b = 89005835203.288761_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less31) {
	LargeNumbers::LargeNumber a = -0.012449754168597717_LN;
	LargeNumbers::LargeNumber b = 0.00000000083032906568545396_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less32) {
	LargeNumbers::LargeNumber a = -0.064878071931532019_LN;
	LargeNumbers::LargeNumber b = 0.20274342531305570_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less33) {
	LargeNumbers::LargeNumber a = -0.04924193304139407_LN;
	LargeNumbers::LargeNumber b = 3.0898028171608339_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less34) {
	LargeNumbers::LargeNumber a = -0.092926425556942918_LN;
	LargeNumbers::LargeNumber b = 25.512328400378602_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less35) {
	LargeNumbers::LargeNumber a = -0.073163272106596821_LN;
	LargeNumbers::LargeNumber b = 19228293161.597621_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less36) {
	LargeNumbers::LargeNumber a = -0.97392621947296940_LN;
	LargeNumbers::LargeNumber b = 0.00000000078906502348106743_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less37) {
	LargeNumbers::LargeNumber a = -0.37992236473519058_LN;
	LargeNumbers::LargeNumber b = 0.25130029827334122_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less38) {
	LargeNumbers::LargeNumber a = -0.52005296206047665_LN;
	LargeNumbers::LargeNumber b = 1.8973120242312175_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less39) {
	LargeNumbers::LargeNumber a = -0.54052922841955965_LN;
	LargeNumbers::LargeNumber b = 44.14625525658643_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less40) {
	LargeNumbers::LargeNumber a = -0.21040721751214285_LN;
	LargeNumbers::LargeNumber b = 85151738565.17881_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less41) {
	LargeNumbers::LargeNumber a = -3.1422168038107020_LN;
	LargeNumbers::LargeNumber b = 0.00000000073610913266351282_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less42) {
	LargeNumbers::LargeNumber a = -9.1036533881737187_LN;
	LargeNumbers::LargeNumber b = 0.71885881230649902_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less43) {
	LargeNumbers::LargeNumber a = -5.3742803692226610_LN;
	LargeNumbers::LargeNumber b = 8.448989659490081_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less44) {
	LargeNumbers::LargeNumber a = -5.6159903016331436_LN;
	LargeNumbers::LargeNumber b = 18.605053053100014_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less45) {
	LargeNumbers::LargeNumber a = -4.4487230494146461_LN;
	LargeNumbers::LargeNumber b = 66830610846.058204_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less46) {
	LargeNumbers::LargeNumber a = -4883744850.701199_LN;
	LargeNumbers::LargeNumber b = 0.00000000043851226709198280_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less47) {
	LargeNumbers::LargeNumber a = -9737218074.4803015_LN;
	LargeNumbers::LargeNumber b = 0.62569717471065427_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less48) {
	LargeNumbers::LargeNumber a = -8621468532.7775069_LN;
	LargeNumbers::LargeNumber b = 8.5911213617823143_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less49) {
	LargeNumbers::LargeNumber a = -9907496730.6537755_LN;
	LargeNumbers::LargeNumber b = 42.425549813535327_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less50) {
	LargeNumbers::LargeNumber a = -7301453994.4160508_LN;
	LargeNumbers::LargeNumber b = 43726041995.092633_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less51) {
	LargeNumbers::LargeNumber a = 0.00000000060149328886258666_LN;
	LargeNumbers::LargeNumber b = -0.000000000091616117794041825_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less52) {
	LargeNumbers::LargeNumber a = 0.000000000554567818758720_LN;
	LargeNumbers::LargeNumber b = -0.072305655087266688_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less53) {
	LargeNumbers::LargeNumber a = 0.00000000030368652435407758_LN;
	LargeNumbers::LargeNumber b = -0.86561851321050841_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less54) {
	LargeNumbers::LargeNumber a = 0.00000000018118892716242594_LN;
	LargeNumbers::LargeNumber b = -6.1116484072297946_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less55) {
	LargeNumbers::LargeNumber a = 0.00000000011938532324160647_LN;
	LargeNumbers::LargeNumber b = -7452548747.5341052_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less56) {
	LargeNumbers::LargeNumber a = 0.26238345170321186_LN;
	LargeNumbers::LargeNumber b = -0.000000000052256348393874358_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less57) {
	LargeNumbers::LargeNumber a = 0.12353051807411640_LN;
	LargeNumbers::LargeNumber b = -0.078908068479735254_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less58) {
	LargeNumbers::LargeNumber a = 0.56414379163574215_LN;
	LargeNumbers::LargeNumber b = -0.25729933484151365_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less59) {
	LargeNumbers::LargeNumber a = 0.69704251860282006_LN;
	LargeNumbers::LargeNumber b = -9.2358828698542118_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less60) {
	LargeNumbers::LargeNumber a = 0.47254637714370096_LN;
	LargeNumbers::LargeNumber b = -5463212390.8087574_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less61) {
	LargeNumbers::LargeNumber a = 2.118916307748052_LN;
	LargeNumbers::LargeNumber b = -0.000000000044313630282512266_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less62) {
	LargeNumbers::LargeNumber a = 9.9644956694724766_LN;
	LargeNumbers::LargeNumber b = -0.057500765734933310_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less63) {
	LargeNumbers::LargeNumber a = 5.0375664381735684_LN;
	LargeNumbers::LargeNumber b = -0.56014411503038660_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less64) {
	LargeNumbers::LargeNumber a = 4.4800514426039610_LN;
	LargeNumbers::LargeNumber b = -4.2754356811322756_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less65) {
	LargeNumbers::LargeNumber a = 8.834308128245895_LN;
	LargeNumbers::LargeNumber b = -1547424031.3941011_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less66) {
	LargeNumbers::LargeNumber a = 56.428214305873043_LN;
	LargeNumbers::LargeNumber b = -0.000000000025697975037370035_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less67) {
	LargeNumbers::LargeNumber a = 67.871803677674262_LN;
	LargeNumbers::LargeNumber b = -0.078656615984642372_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less68) {
	LargeNumbers::LargeNumber a = 68.32955342203028_LN;
	LargeNumbers::LargeNumber b = -0.17460369836023753_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less69) {
	LargeNumbers::LargeNumber a = 89.756637685716118_LN;
	LargeNumbers::LargeNumber b = -9.6594869411134509_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less70) {
	LargeNumbers::LargeNumber a = 55.6415735162873_LN;
	LargeNumbers::LargeNumber b = -3237650232.3469300_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less71) {
	LargeNumbers::LargeNumber a = 14413214881.926854_LN;
	LargeNumbers::LargeNumber b = -0.000000000035234173236094633_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less72) {
	LargeNumbers::LargeNumber a = 15202162416.403425_LN;
	LargeNumbers::LargeNumber b = -0.021894708372036583_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less73) {
	LargeNumbers::LargeNumber a = 87106286439.754511_LN;
	LargeNumbers::LargeNumber b = -0.70213878517481316_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less74) {
	LargeNumbers::LargeNumber a = 18699641199.498609_LN;
	LargeNumbers::LargeNumber b = -2.3227202091149524_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less75) {
	LargeNumbers::LargeNumber a = 83798111697.958333_LN;
	LargeNumbers::LargeNumber b = -4401220371.1510154_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less76) {
	LargeNumbers::LargeNumber a = 0.00000000018339586035765963_LN;
	LargeNumbers::LargeNumber b = 0.00000000083420126057101881_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less77) {
	LargeNumbers::LargeNumber a = 0.00000000013221898130390175_LN;
	LargeNumbers::LargeNumber b = 0.2866132087981388_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less78) {
	LargeNumbers::LargeNumber a = 0.00000000029683195188344298_LN;
	LargeNumbers::LargeNumber b = 4.001811028897473_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less79) {
	LargeNumbers::LargeNumber a = 0.00000000072767021393853781_LN;
	LargeNumbers::LargeNumber b = 93.951351224132772_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less80) {
	LargeNumbers::LargeNumber a = 0.00000000077091278383477930_LN;
	LargeNumbers::LargeNumber b = 17654463719.003821_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less81) {
	LargeNumbers::LargeNumber a = 0.69227143509413636_LN;
	LargeNumbers::LargeNumber b = 0.00000000026920200923196074_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less82) {
	LargeNumbers::LargeNumber a = 0.30788883671311594_LN;
	LargeNumbers::LargeNumber b = 0.5981811989774883_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less83) {
	LargeNumbers::LargeNumber a = 0.74100812420163818_LN;
	LargeNumbers::LargeNumber b = 3.2957413152819364_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less84) {
	LargeNumbers::LargeNumber a = 0.51031168064022015_LN;
	LargeNumbers::LargeNumber b = 65.477666792066314_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less85) {
	LargeNumbers::LargeNumber a = 0.2383687027234400_LN;
	LargeNumbers::LargeNumber b = 67298048453.62498_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less86) {
	LargeNumbers::LargeNumber a = 9.9067247428782178_LN;
	LargeNumbers::LargeNumber b = 0.00000000074446254230843112_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less87) {
	LargeNumbers::LargeNumber a = 4.515753642402623_LN;
	LargeNumbers::LargeNumber b = 0.96070079778961870_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less88) {
	LargeNumbers::LargeNumber a = 5.0021667484302338_LN;
	LargeNumbers::LargeNumber b = 3.1653046628631903_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less89) {
	LargeNumbers::LargeNumber a = 3.6554992433548120_LN;
	LargeNumbers::LargeNumber b = 70.564418664810604_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less90) {
	LargeNumbers::LargeNumber a = 9.2813197325914498_LN;
	LargeNumbers::LargeNumber b = 17970712741.474738_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less91) {
	LargeNumbers::LargeNumber a = 30.744971484653110_LN;
	LargeNumbers::LargeNumber b = 0.00000000071306672230536596_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less92) {
	LargeNumbers::LargeNumber a = 87.262755701996923_LN;
	LargeNumbers::LargeNumber b = 0.79338318643397690_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less93) {
	LargeNumbers::LargeNumber a = 39.68313279508543_LN;
	LargeNumbers::LargeNumber b = 1.7736077621941626_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less94) {
	LargeNumbers::LargeNumber a = 39.719570896756916_LN;
	LargeNumbers::LargeNumber b = 85.938929008539899_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less95) {
	LargeNumbers::LargeNumber a = 72.3942381772590_LN;
	LargeNumbers::LargeNumber b = 42297970442.060197_LN;
	EXPECT_EQ(a < b, true);
}

TEST(Comparisons, less96) {
	LargeNumbers::LargeNumber a = 77518679647.436789_LN;
	LargeNumbers::LargeNumber b = 0.00000000023341605159645392_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less97) {
	LargeNumbers::LargeNumber a = 36047952521.67809_LN;
	LargeNumbers::LargeNumber b = 0.41677264057449541_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less98) {
	LargeNumbers::LargeNumber a = 17249351669.704325_LN;
	LargeNumbers::LargeNumber b = 9.2613110799851731_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less99) {
	LargeNumbers::LargeNumber a = 49659677030.215690_LN;
	LargeNumbers::LargeNumber b = 13.683296265531172_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, less100) {
	LargeNumbers::LargeNumber a = 91346078572.45385_LN;
	LargeNumbers::LargeNumber b = 79789420920.669622_LN;
	EXPECT_EQ(a < b, false);
}

TEST(Comparisons, equal1) {
	LargeNumbers::LargeNumber a = -0.000000000026048038918855092_LN;
	LargeNumbers::LargeNumber b = -0.000000000033369588611304433_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal1_1) {
	LargeNumbers::LargeNumber a = -0.000000000026048038918855092_LN;
	LargeNumbers::LargeNumber b = -0.000000000026048038918855092_LN;
	EXPECT_EQ(a == b, true);
}

TEST(Comparisons, equal2) {
	LargeNumbers::LargeNumber a = -0.000000000043111226638909624_LN;
	LargeNumbers::LargeNumber b = -0.070507945559576698_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal3) {
	LargeNumbers::LargeNumber a = -0.000000000080008539491797396_LN;
	LargeNumbers::LargeNumber b = -0.85772119111109629_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal4) {
	LargeNumbers::LargeNumber a = -0.000000000044887166506362620_LN;
	LargeNumbers::LargeNumber b = -7.9257765216103737_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal5) {
	LargeNumbers::LargeNumber a = -0.000000000016335221309801085_LN;
	LargeNumbers::LargeNumber b = -4960421970.0980107_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal6) {
	LargeNumbers::LargeNumber a = -0.095819307603995188_LN;
	LargeNumbers::LargeNumber b = -0.000000000028867117031116327_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal6_1) {
	LargeNumbers::LargeNumber a = -0.095819307603995188_LN;
	LargeNumbers::LargeNumber b = -0.095819307603995188_LN;
	EXPECT_EQ(a == b, true);
}

TEST(Comparisons, equal7) {
	LargeNumbers::LargeNumber a = -0.054048247983605793_LN;
	LargeNumbers::LargeNumber b = -0.093136229519831894_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal8) {
	LargeNumbers::LargeNumber a = -0.028053888450575875_LN;
	LargeNumbers::LargeNumber b = -0.84258919911160014_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal9) {
	LargeNumbers::LargeNumber a = -0.076185685839950151_LN;
	LargeNumbers::LargeNumber b = -2.218767054071788_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal10) {
	LargeNumbers::LargeNumber a = -0.036548777685871346_LN;
	LargeNumbers::LargeNumber b = -7477123810.6218534_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal11) {
	LargeNumbers::LargeNumber a = -0.69034074467533889_LN;
	LargeNumbers::LargeNumber b = -0.000000000073304860021539904_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal11_1) {
	LargeNumbers::LargeNumber a = -0.69034074467533889_LN;
	LargeNumbers::LargeNumber b = -0.69034074467533889_LN;
	EXPECT_EQ(a == b, true);
}

TEST(Comparisons, equal12) {
	LargeNumbers::LargeNumber a = -0.70746672480858823_LN;
	LargeNumbers::LargeNumber b = -0.077436997911186017_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal13) {
	LargeNumbers::LargeNumber a = -0.84450599624978263_LN;
	LargeNumbers::LargeNumber b = -0.98431726845236620_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal14) {
	LargeNumbers::LargeNumber a = -0.5564580868396729_LN;
	LargeNumbers::LargeNumber b = -5.8041223417564320_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal15) {
	LargeNumbers::LargeNumber a = -0.72304893406176585_LN;
	LargeNumbers::LargeNumber b = -9122071277.7496364_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal16) {
	LargeNumbers::LargeNumber a = -9.9478713451941512_LN;
	LargeNumbers::LargeNumber b = -0.000000000092445519180558280_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal16_1) {
	LargeNumbers::LargeNumber a = -9.9478713451941512_LN;
	LargeNumbers::LargeNumber b = -9.9478713451941512_LN;
	EXPECT_EQ(a == b, true);
}

TEST(Comparisons, equal17) {
	LargeNumbers::LargeNumber a = -1.7276071299684814_LN;
	LargeNumbers::LargeNumber b = -0.056807761225435595_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal18) {
	LargeNumbers::LargeNumber a = -2.2082616541263936_LN;
	LargeNumbers::LargeNumber b = -0.35124835037958599_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal19) {
	LargeNumbers::LargeNumber a = -6.5054386703444965_LN;
	LargeNumbers::LargeNumber b = -7.2677714610650719_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal20) {
	LargeNumbers::LargeNumber a = -8.8392300195993330_LN;
	LargeNumbers::LargeNumber b = -7599447082.5141933_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal21) {
	LargeNumbers::LargeNumber a = -6840515649.060211_LN;
	LargeNumbers::LargeNumber b = -0.000000000030401225757660793_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal21_1) {
	LargeNumbers::LargeNumber a = -6840515649.060211_LN;
	LargeNumbers::LargeNumber b = -6840515649.060211_LN;
	EXPECT_EQ(a == b, true);
}

TEST(Comparisons, equal22) {
	LargeNumbers::LargeNumber a = -1578196312.3744002_LN;
	LargeNumbers::LargeNumber b = -0.058933514341845108_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal23) {
	LargeNumbers::LargeNumber a = -5115149214.5814595_LN;
	LargeNumbers::LargeNumber b = -0.16182939119499794_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal24) {
	LargeNumbers::LargeNumber a = -7979956901.849012_LN;
	LargeNumbers::LargeNumber b = -1.9532071400141017_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal25) {
	LargeNumbers::LargeNumber a = -9395716874.4807998_LN;
	LargeNumbers::LargeNumber b = -3746900017.2533545_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal26) {
	LargeNumbers::LargeNumber a = -0.00000000006246299304379105_LN;
	LargeNumbers::LargeNumber b = 0.00000000057305116105123414_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal27) {
	LargeNumbers::LargeNumber a = -0.000000000039935092577388062_LN;
	LargeNumbers::LargeNumber b = 0.55471041788772186_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal28) {
	LargeNumbers::LargeNumber a = -0.000000000028836977158565353_LN;
	LargeNumbers::LargeNumber b = 2.7205066127291832_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal29) {
	LargeNumbers::LargeNumber a = -0.000000000099986960759988173_LN;
	LargeNumbers::LargeNumber b = 29.989563349826540_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal30) {
	LargeNumbers::LargeNumber a = -0.00000000001743010855651358_LN;
	LargeNumbers::LargeNumber b = 89005835203.288761_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal31) {
	LargeNumbers::LargeNumber a = -0.012449754168597717_LN;
	LargeNumbers::LargeNumber b = 0.00000000083032906568545396_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal32) {
	LargeNumbers::LargeNumber a = -0.064878071931532019_LN;
	LargeNumbers::LargeNumber b = 0.20274342531305570_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal33) {
	LargeNumbers::LargeNumber a = -0.04924193304139407_LN;
	LargeNumbers::LargeNumber b = 3.0898028171608339_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal34) {
	LargeNumbers::LargeNumber a = -0.092926425556942918_LN;
	LargeNumbers::LargeNumber b = 25.512328400378602_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal35) {
	LargeNumbers::LargeNumber a = -0.073163272106596821_LN;
	LargeNumbers::LargeNumber b = 19228293161.597621_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal36) {
	LargeNumbers::LargeNumber a = -0.97392621947296940_LN;
	LargeNumbers::LargeNumber b = 0.00000000078906502348106743_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal37) {
	LargeNumbers::LargeNumber a = -0.37992236473519058_LN;
	LargeNumbers::LargeNumber b = 0.25130029827334122_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal38) {
	LargeNumbers::LargeNumber a = -0.52005296206047665_LN;
	LargeNumbers::LargeNumber b = 1.8973120242312175_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal39) {
	LargeNumbers::LargeNumber a = -0.54052922841955965_LN;
	LargeNumbers::LargeNumber b = 44.14625525658643_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal40) {
	LargeNumbers::LargeNumber a = -0.21040721751214285_LN;
	LargeNumbers::LargeNumber b = 85151738565.17881_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal41) {
	LargeNumbers::LargeNumber a = -3.1422168038107020_LN;
	LargeNumbers::LargeNumber b = 0.00000000073610913266351282_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal42) {
	LargeNumbers::LargeNumber a = -9.1036533881737187_LN;
	LargeNumbers::LargeNumber b = 0.71885881230649902_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal43) {
	LargeNumbers::LargeNumber a = -5.3742803692226610_LN;
	LargeNumbers::LargeNumber b = 8.448989659490081_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal44) {
	LargeNumbers::LargeNumber a = -5.6159903016331436_LN;
	LargeNumbers::LargeNumber b = 18.605053053100014_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal45) {
	LargeNumbers::LargeNumber a = -4.4487230494146461_LN;
	LargeNumbers::LargeNumber b = 66830610846.058204_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal46) {
	LargeNumbers::LargeNumber a = -4883744850.701199_LN;
	LargeNumbers::LargeNumber b = 0.00000000043851226709198280_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal47) {
	LargeNumbers::LargeNumber a = -9737218074.4803015_LN;
	LargeNumbers::LargeNumber b = 0.62569717471065427_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal48) {
	LargeNumbers::LargeNumber a = -8621468532.7775069_LN;
	LargeNumbers::LargeNumber b = 8.5911213617823143_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal49) {
	LargeNumbers::LargeNumber a = -9907496730.6537755_LN;
	LargeNumbers::LargeNumber b = 42.425549813535327_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal50) {
	LargeNumbers::LargeNumber a = -7301453994.4160508_LN;
	LargeNumbers::LargeNumber b = 43726041995.092633_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal51) {
	LargeNumbers::LargeNumber a = 0.00000000060149328886258666_LN;
	LargeNumbers::LargeNumber b = -0.000000000091616117794041825_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal52) {
	LargeNumbers::LargeNumber a = 0.000000000554567818758720_LN;
	LargeNumbers::LargeNumber b = -0.072305655087266688_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal53) {
	LargeNumbers::LargeNumber a = 0.00000000030368652435407758_LN;
	LargeNumbers::LargeNumber b = -0.86561851321050841_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal54) {
	LargeNumbers::LargeNumber a = 0.00000000018118892716242594_LN;
	LargeNumbers::LargeNumber b = -6.1116484072297946_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal55) {
	LargeNumbers::LargeNumber a = 0.00000000011938532324160647_LN;
	LargeNumbers::LargeNumber b = -7452548747.5341052_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal56) {
	LargeNumbers::LargeNumber a = 0.26238345170321186_LN;
	LargeNumbers::LargeNumber b = -0.000000000052256348393874358_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal57) {
	LargeNumbers::LargeNumber a = 0.12353051807411640_LN;
	LargeNumbers::LargeNumber b = -0.078908068479735254_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal58) {
	LargeNumbers::LargeNumber a = 0.56414379163574215_LN;
	LargeNumbers::LargeNumber b = -0.25729933484151365_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal59) {
	LargeNumbers::LargeNumber a = 0.69704251860282006_LN;
	LargeNumbers::LargeNumber b = -9.2358828698542118_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal60) {
	LargeNumbers::LargeNumber a = 0.47254637714370096_LN;
	LargeNumbers::LargeNumber b = -5463212390.8087574_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal61) {
	LargeNumbers::LargeNumber a = 2.118916307748052_LN;
	LargeNumbers::LargeNumber b = -0.000000000044313630282512266_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal62) {
	LargeNumbers::LargeNumber a = 9.9644956694724766_LN;
	LargeNumbers::LargeNumber b = -0.057500765734933310_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal63) {
	LargeNumbers::LargeNumber a = 5.0375664381735684_LN;
	LargeNumbers::LargeNumber b = -0.56014411503038660_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal64) {
	LargeNumbers::LargeNumber a = 4.4800514426039610_LN;
	LargeNumbers::LargeNumber b = -4.2754356811322756_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal65) {
	LargeNumbers::LargeNumber a = 8.834308128245895_LN;
	LargeNumbers::LargeNumber b = -1547424031.3941011_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal66) {
	LargeNumbers::LargeNumber a = 56.428214305873043_LN;
	LargeNumbers::LargeNumber b = -0.000000000025697975037370035_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal67) {
	LargeNumbers::LargeNumber a = 67.871803677674262_LN;
	LargeNumbers::LargeNumber b = -0.078656615984642372_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal68) {
	LargeNumbers::LargeNumber a = 68.32955342203028_LN;
	LargeNumbers::LargeNumber b = -0.17460369836023753_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal69) {
	LargeNumbers::LargeNumber a = 89.756637685716118_LN;
	LargeNumbers::LargeNumber b = -9.6594869411134509_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal70) {
	LargeNumbers::LargeNumber a = 55.6415735162873_LN;
	LargeNumbers::LargeNumber b = -3237650232.3469300_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal71) {
	LargeNumbers::LargeNumber a = 14413214881.926854_LN;
	LargeNumbers::LargeNumber b = -0.000000000035234173236094633_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal72) {
	LargeNumbers::LargeNumber a = 15202162416.403425_LN;
	LargeNumbers::LargeNumber b = -0.021894708372036583_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal73) {
	LargeNumbers::LargeNumber a = 87106286439.754511_LN;
	LargeNumbers::LargeNumber b = -0.70213878517481316_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal74) {
	LargeNumbers::LargeNumber a = 18699641199.498609_LN;
	LargeNumbers::LargeNumber b = -2.3227202091149524_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal75) {
	LargeNumbers::LargeNumber a = 83798111697.958333_LN;
	LargeNumbers::LargeNumber b = -4401220371.1510154_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal76) {
	LargeNumbers::LargeNumber a = 0.00000000018339586035765963_LN;
	LargeNumbers::LargeNumber b = 0.00000000083420126057101881_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal77) {
	LargeNumbers::LargeNumber a = 0.00000000013221898130390175_LN;
	LargeNumbers::LargeNumber b = 0.2866132087981388_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal78) {
	LargeNumbers::LargeNumber a = 0.00000000029683195188344298_LN;
	LargeNumbers::LargeNumber b = 4.001811028897473_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal79) {
	LargeNumbers::LargeNumber a = 0.00000000072767021393853781_LN;
	LargeNumbers::LargeNumber b = 93.951351224132772_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal80) {
	LargeNumbers::LargeNumber a = 0.00000000077091278383477930_LN;
	LargeNumbers::LargeNumber b = 17654463719.003821_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal81) {
	LargeNumbers::LargeNumber a = 0.69227143509413636_LN;
	LargeNumbers::LargeNumber b = 0.00000000026920200923196074_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal82) {
	LargeNumbers::LargeNumber a = 0.30788883671311594_LN;
	LargeNumbers::LargeNumber b = 0.5981811989774883_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal83) {
	LargeNumbers::LargeNumber a = 0.74100812420163818_LN;
	LargeNumbers::LargeNumber b = 3.2957413152819364_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal84) {
	LargeNumbers::LargeNumber a = 0.51031168064022015_LN;
	LargeNumbers::LargeNumber b = 65.477666792066314_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal85) {
	LargeNumbers::LargeNumber a = 0.2383687027234400_LN;
	LargeNumbers::LargeNumber b = 67298048453.62498_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal86) {
	LargeNumbers::LargeNumber a = 9.9067247428782178_LN;
	LargeNumbers::LargeNumber b = 0.00000000074446254230843112_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal87) {
	LargeNumbers::LargeNumber a = 4.515753642402623_LN;
	LargeNumbers::LargeNumber b = 0.96070079778961870_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal88) {
	LargeNumbers::LargeNumber a = 5.0021667484302338_LN;
	LargeNumbers::LargeNumber b = 3.1653046628631903_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal89) {
	LargeNumbers::LargeNumber a = 3.6554992433548120_LN;
	LargeNumbers::LargeNumber b = 70.564418664810604_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal90) {
	LargeNumbers::LargeNumber a = 9.2813197325914498_LN;
	LargeNumbers::LargeNumber b = 17970712741.474738_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal91) {
	LargeNumbers::LargeNumber a = 30.744971484653110_LN;
	LargeNumbers::LargeNumber b = 0.00000000071306672230536596_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal92) {
	LargeNumbers::LargeNumber a = 87.262755701996923_LN;
	LargeNumbers::LargeNumber b = 0.79338318643397690_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal93) {
	LargeNumbers::LargeNumber a = 39.68313279508543_LN;
	LargeNumbers::LargeNumber b = 1.7736077621941626_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal94) {
	LargeNumbers::LargeNumber a = 39.719570896756916_LN;
	LargeNumbers::LargeNumber b = 85.938929008539899_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal95) {
	LargeNumbers::LargeNumber a = 72.3942381772590_LN;
	LargeNumbers::LargeNumber b = 42297970442.060197_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal96) {
	LargeNumbers::LargeNumber a = 77518679647.436789_LN;
	LargeNumbers::LargeNumber b = 0.00000000023341605159645392_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal97) {
	LargeNumbers::LargeNumber a = 36047952521.67809_LN;
	LargeNumbers::LargeNumber b = 0.41677264057449541_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal98) {
	LargeNumbers::LargeNumber a = 17249351669.704325_LN;
	LargeNumbers::LargeNumber b = 9.2613110799851731_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal99) {
	LargeNumbers::LargeNumber a = 49659677030.215690_LN;
	LargeNumbers::LargeNumber b = 13.683296265531172_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, equal100) {
	LargeNumbers::LargeNumber a = 91346078572.45385_LN;
	LargeNumbers::LargeNumber b = 79789420920.669622_LN;
	EXPECT_EQ(a == b, false);
}

TEST(Comparisons, greater1) {
	LargeNumbers::LargeNumber a = -0.000000000026048038918855092_LN;
	LargeNumbers::LargeNumber b = -0.000000000033369588611304433_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater2) {
	LargeNumbers::LargeNumber a = -0.000000000043111226638909624_LN;
	LargeNumbers::LargeNumber b = -0.070507945559576698_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater3) {
	LargeNumbers::LargeNumber a = -0.000000000080008539491797396_LN;
	LargeNumbers::LargeNumber b = -0.85772119111109629_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater4) {
	LargeNumbers::LargeNumber a = -0.000000000044887166506362620_LN;
	LargeNumbers::LargeNumber b = -7.9257765216103737_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater5) {
	LargeNumbers::LargeNumber a = -0.000000000016335221309801085_LN;
	LargeNumbers::LargeNumber b = -4960421970.0980107_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater6) {
	LargeNumbers::LargeNumber a = -0.095819307603995188_LN;
	LargeNumbers::LargeNumber b = -0.000000000028867117031116327_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater7) {
	LargeNumbers::LargeNumber a = -0.054048247983605793_LN;
	LargeNumbers::LargeNumber b = -0.093136229519831894_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater8) {
	LargeNumbers::LargeNumber a = -0.028053888450575875_LN;
	LargeNumbers::LargeNumber b = -0.84258919911160014_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater9) {
	LargeNumbers::LargeNumber a = -0.076185685839950151_LN;
	LargeNumbers::LargeNumber b = -2.218767054071788_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater10) {
	LargeNumbers::LargeNumber a = -0.036548777685871346_LN;
	LargeNumbers::LargeNumber b = -7477123810.6218534_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater11) {
	LargeNumbers::LargeNumber a = -0.69034074467533889_LN;
	LargeNumbers::LargeNumber b = -0.000000000073304860021539904_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater12) {
	LargeNumbers::LargeNumber a = -0.70746672480858823_LN;
	LargeNumbers::LargeNumber b = -0.077436997911186017_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater13) {
	LargeNumbers::LargeNumber a = -0.84450599624978263_LN;
	LargeNumbers::LargeNumber b = -0.98431726845236620_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater14) {
	LargeNumbers::LargeNumber a = -0.5564580868396729_LN;
	LargeNumbers::LargeNumber b = -5.8041223417564320_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater15) {
	LargeNumbers::LargeNumber a = -0.72304893406176585_LN;
	LargeNumbers::LargeNumber b = -9122071277.7496364_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater16) {
	LargeNumbers::LargeNumber a = -9.9478713451941512_LN;
	LargeNumbers::LargeNumber b = -0.000000000092445519180558280_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater17) {
	LargeNumbers::LargeNumber a = -1.7276071299684814_LN;
	LargeNumbers::LargeNumber b = -0.056807761225435595_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater18) {
	LargeNumbers::LargeNumber a = -2.2082616541263936_LN;
	LargeNumbers::LargeNumber b = -0.35124835037958599_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater19) {
	LargeNumbers::LargeNumber a = -6.5054386703444965_LN;
	LargeNumbers::LargeNumber b = -7.2677714610650719_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater20) {
	LargeNumbers::LargeNumber a = -8.8392300195993330_LN;
	LargeNumbers::LargeNumber b = -7599447082.5141933_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater21) {
	LargeNumbers::LargeNumber a = -6840515649.060211_LN;
	LargeNumbers::LargeNumber b = -0.000000000030401225757660793_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater22) {
	LargeNumbers::LargeNumber a = -1578196312.3744002_LN;
	LargeNumbers::LargeNumber b = -0.058933514341845108_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater23) {
	LargeNumbers::LargeNumber a = -5115149214.5814595_LN;
	LargeNumbers::LargeNumber b = -0.16182939119499794_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater24) {
	LargeNumbers::LargeNumber a = -7979956901.849012_LN;
	LargeNumbers::LargeNumber b = -1.9532071400141017_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater25) {
	LargeNumbers::LargeNumber a = -9395716874.4807998_LN;
	LargeNumbers::LargeNumber b = -3746900017.2533545_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater26) {
	LargeNumbers::LargeNumber a = -0.00000000006246299304379105_LN;
	LargeNumbers::LargeNumber b = 0.00000000057305116105123414_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater27) {
	LargeNumbers::LargeNumber a = -0.000000000039935092577388062_LN;
	LargeNumbers::LargeNumber b = 0.55471041788772186_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater28) {
	LargeNumbers::LargeNumber a = -0.000000000028836977158565353_LN;
	LargeNumbers::LargeNumber b = 2.7205066127291832_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater29) {
	LargeNumbers::LargeNumber a = -0.000000000099986960759988173_LN;
	LargeNumbers::LargeNumber b = 29.989563349826540_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater30) {
	LargeNumbers::LargeNumber a = -0.00000000001743010855651358_LN;
	LargeNumbers::LargeNumber b = 89005835203.288761_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater31) {
	LargeNumbers::LargeNumber a = -0.012449754168597717_LN;
	LargeNumbers::LargeNumber b = 0.00000000083032906568545396_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater32) {
	LargeNumbers::LargeNumber a = -0.064878071931532019_LN;
	LargeNumbers::LargeNumber b = 0.20274342531305570_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater33) {
	LargeNumbers::LargeNumber a = -0.04924193304139407_LN;
	LargeNumbers::LargeNumber b = 3.0898028171608339_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater34) {
	LargeNumbers::LargeNumber a = -0.092926425556942918_LN;
	LargeNumbers::LargeNumber b = 25.512328400378602_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater35) {
	LargeNumbers::LargeNumber a = -0.073163272106596821_LN;
	LargeNumbers::LargeNumber b = 19228293161.597621_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater36) {
	LargeNumbers::LargeNumber a = -0.97392621947296940_LN;
	LargeNumbers::LargeNumber b = 0.00000000078906502348106743_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater37) {
	LargeNumbers::LargeNumber a = -0.37992236473519058_LN;
	LargeNumbers::LargeNumber b = 0.25130029827334122_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater38) {
	LargeNumbers::LargeNumber a = -0.52005296206047665_LN;
	LargeNumbers::LargeNumber b = 1.8973120242312175_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater39) {
	LargeNumbers::LargeNumber a = -0.54052922841955965_LN;
	LargeNumbers::LargeNumber b = 44.14625525658643_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater40) {
	LargeNumbers::LargeNumber a = -0.21040721751214285_LN;
	LargeNumbers::LargeNumber b = 85151738565.17881_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater41) {
	LargeNumbers::LargeNumber a = -3.1422168038107020_LN;
	LargeNumbers::LargeNumber b = 0.00000000073610913266351282_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater42) {
	LargeNumbers::LargeNumber a = -9.1036533881737187_LN;
	LargeNumbers::LargeNumber b = 0.71885881230649902_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater43) {
	LargeNumbers::LargeNumber a = -5.3742803692226610_LN;
	LargeNumbers::LargeNumber b = 8.448989659490081_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater44) {
	LargeNumbers::LargeNumber a = -5.6159903016331436_LN;
	LargeNumbers::LargeNumber b = 18.605053053100014_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater45) {
	LargeNumbers::LargeNumber a = -4.4487230494146461_LN;
	LargeNumbers::LargeNumber b = 66830610846.058204_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater46) {
	LargeNumbers::LargeNumber a = -4883744850.701199_LN;
	LargeNumbers::LargeNumber b = 0.00000000043851226709198280_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater47) {
	LargeNumbers::LargeNumber a = -9737218074.4803015_LN;
	LargeNumbers::LargeNumber b = 0.62569717471065427_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater48) {
	LargeNumbers::LargeNumber a = -8621468532.7775069_LN;
	LargeNumbers::LargeNumber b = 8.5911213617823143_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater49) {
	LargeNumbers::LargeNumber a = -9907496730.6537755_LN;
	LargeNumbers::LargeNumber b = 42.425549813535327_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater50) {
	LargeNumbers::LargeNumber a = -7301453994.4160508_LN;
	LargeNumbers::LargeNumber b = 43726041995.092633_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater51) {
	LargeNumbers::LargeNumber a = 0.00000000060149328886258666_LN;
	LargeNumbers::LargeNumber b = -0.000000000091616117794041825_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater52) {
	LargeNumbers::LargeNumber a = 0.000000000554567818758720_LN;
	LargeNumbers::LargeNumber b = -0.072305655087266688_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater53) {
	LargeNumbers::LargeNumber a = 0.00000000030368652435407758_LN;
	LargeNumbers::LargeNumber b = -0.86561851321050841_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater54) {
	LargeNumbers::LargeNumber a = 0.00000000018118892716242594_LN;
	LargeNumbers::LargeNumber b = -6.1116484072297946_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater55) {
	LargeNumbers::LargeNumber a = 0.00000000011938532324160647_LN;
	LargeNumbers::LargeNumber b = -7452548747.5341052_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater56) {
	LargeNumbers::LargeNumber a = 0.26238345170321186_LN;
	LargeNumbers::LargeNumber b = -0.000000000052256348393874358_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater57) {
	LargeNumbers::LargeNumber a = 0.12353051807411640_LN;
	LargeNumbers::LargeNumber b = -0.078908068479735254_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater58) {
	LargeNumbers::LargeNumber a = 0.56414379163574215_LN;
	LargeNumbers::LargeNumber b = -0.25729933484151365_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater59) {
	LargeNumbers::LargeNumber a = 0.69704251860282006_LN;
	LargeNumbers::LargeNumber b = -9.2358828698542118_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater60) {
	LargeNumbers::LargeNumber a = 0.47254637714370096_LN;
	LargeNumbers::LargeNumber b = -5463212390.8087574_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater61) {
	LargeNumbers::LargeNumber a = 2.118916307748052_LN;
	LargeNumbers::LargeNumber b = -0.000000000044313630282512266_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater62) {
	LargeNumbers::LargeNumber a = 9.9644956694724766_LN;
	LargeNumbers::LargeNumber b = -0.057500765734933310_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater63) {
	LargeNumbers::LargeNumber a = 5.0375664381735684_LN;
	LargeNumbers::LargeNumber b = -0.56014411503038660_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater64) {
	LargeNumbers::LargeNumber a = 4.4800514426039610_LN;
	LargeNumbers::LargeNumber b = -4.2754356811322756_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater65) {
	LargeNumbers::LargeNumber a = 8.834308128245895_LN;
	LargeNumbers::LargeNumber b = -1547424031.3941011_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater66) {
	LargeNumbers::LargeNumber a = 56.428214305873043_LN;
	LargeNumbers::LargeNumber b = -0.000000000025697975037370035_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater67) {
	LargeNumbers::LargeNumber a = 67.871803677674262_LN;
	LargeNumbers::LargeNumber b = -0.078656615984642372_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater68) {
	LargeNumbers::LargeNumber a = 68.32955342203028_LN;
	LargeNumbers::LargeNumber b = -0.17460369836023753_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater69) {
	LargeNumbers::LargeNumber a = 89.756637685716118_LN;
	LargeNumbers::LargeNumber b = -9.6594869411134509_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater70) {
	LargeNumbers::LargeNumber a = 55.6415735162873_LN;
	LargeNumbers::LargeNumber b = -3237650232.3469300_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater71) {
	LargeNumbers::LargeNumber a = 14413214881.926854_LN;
	LargeNumbers::LargeNumber b = -0.000000000035234173236094633_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater72) {
	LargeNumbers::LargeNumber a = 15202162416.403425_LN;
	LargeNumbers::LargeNumber b = -0.021894708372036583_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater73) {
	LargeNumbers::LargeNumber a = 87106286439.754511_LN;
	LargeNumbers::LargeNumber b = -0.70213878517481316_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater74) {
	LargeNumbers::LargeNumber a = 18699641199.498609_LN;
	LargeNumbers::LargeNumber b = -2.3227202091149524_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater75) {
	LargeNumbers::LargeNumber a = 83798111697.958333_LN;
	LargeNumbers::LargeNumber b = -4401220371.1510154_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater76) {
	LargeNumbers::LargeNumber a = 0.00000000018339586035765963_LN;
	LargeNumbers::LargeNumber b = 0.00000000083420126057101881_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater77) {
	LargeNumbers::LargeNumber a = 0.00000000013221898130390175_LN;
	LargeNumbers::LargeNumber b = 0.2866132087981388_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater78) {
	LargeNumbers::LargeNumber a = 0.00000000029683195188344298_LN;
	LargeNumbers::LargeNumber b = 4.001811028897473_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater79) {
	LargeNumbers::LargeNumber a = 0.00000000072767021393853781_LN;
	LargeNumbers::LargeNumber b = 93.951351224132772_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater80) {
	LargeNumbers::LargeNumber a = 0.00000000077091278383477930_LN;
	LargeNumbers::LargeNumber b = 17654463719.003821_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater81) {
	LargeNumbers::LargeNumber a = 0.69227143509413636_LN;
	LargeNumbers::LargeNumber b = 0.00000000026920200923196074_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater82) {
	LargeNumbers::LargeNumber a = 0.30788883671311594_LN;
	LargeNumbers::LargeNumber b = 0.5981811989774883_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater83) {
	LargeNumbers::LargeNumber a = 0.74100812420163818_LN;
	LargeNumbers::LargeNumber b = 3.2957413152819364_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater84) {
	LargeNumbers::LargeNumber a = 0.51031168064022015_LN;
	LargeNumbers::LargeNumber b = 65.477666792066314_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater85) {
	LargeNumbers::LargeNumber a = 0.2383687027234400_LN;
	LargeNumbers::LargeNumber b = 67298048453.62498_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater86) {
	LargeNumbers::LargeNumber a = 9.9067247428782178_LN;
	LargeNumbers::LargeNumber b = 0.00000000074446254230843112_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater87) {
	LargeNumbers::LargeNumber a = 4.515753642402623_LN;
	LargeNumbers::LargeNumber b = 0.96070079778961870_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater88) {
	LargeNumbers::LargeNumber a = 5.0021667484302338_LN;
	LargeNumbers::LargeNumber b = 3.1653046628631903_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater89) {
	LargeNumbers::LargeNumber a = 3.6554992433548120_LN;
	LargeNumbers::LargeNumber b = 70.564418664810604_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater90) {
	LargeNumbers::LargeNumber a = 9.2813197325914498_LN;
	LargeNumbers::LargeNumber b = 17970712741.474738_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater91) {
	LargeNumbers::LargeNumber a = 30.744971484653110_LN;
	LargeNumbers::LargeNumber b = 0.00000000071306672230536596_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater92) {
	LargeNumbers::LargeNumber a = 87.262755701996923_LN;
	LargeNumbers::LargeNumber b = 0.79338318643397690_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater93) {
	LargeNumbers::LargeNumber a = 39.68313279508543_LN;
	LargeNumbers::LargeNumber b = 1.7736077621941626_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater94) {
	LargeNumbers::LargeNumber a = 39.719570896756916_LN;
	LargeNumbers::LargeNumber b = 85.938929008539899_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater95) {
	LargeNumbers::LargeNumber a = 72.3942381772590_LN;
	LargeNumbers::LargeNumber b = 42297970442.060197_LN;
	EXPECT_EQ(a > b, false);
}

TEST(Comparisons, greater96) {
	LargeNumbers::LargeNumber a = 77518679647.436789_LN;
	LargeNumbers::LargeNumber b = 0.00000000023341605159645392_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater97) {
	LargeNumbers::LargeNumber a = 36047952521.67809_LN;
	LargeNumbers::LargeNumber b = 0.41677264057449541_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater98) {
	LargeNumbers::LargeNumber a = 17249351669.704325_LN;
	LargeNumbers::LargeNumber b = 9.2613110799851731_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater99) {
	LargeNumbers::LargeNumber a = 49659677030.215690_LN;
	LargeNumbers::LargeNumber b = 13.683296265531172_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, greater100) {
	LargeNumbers::LargeNumber a = 91346078572.45385_LN;
	LargeNumbers::LargeNumber b = 79789420920.669622_LN;
	EXPECT_EQ(a > b, true);
}

TEST(Comparisons, lessEqual1) {
	LargeNumbers::LargeNumber a = -0.000000000026048038918855092_LN;
	LargeNumbers::LargeNumber b = -0.000000000033369588611304433_LN;
	EXPECT_EQ(a <= b, false);
}

TEST(Comparisons, lessEqual6) {
	LargeNumbers::LargeNumber a = -0.095819307603995188_LN;
	LargeNumbers::LargeNumber b = -0.000000000028867117031116327_LN;
	EXPECT_EQ(a <= b, true);
}

TEST(Comparisons, lessEqual11) {
	LargeNumbers::LargeNumber a = -0.69034074467533889_LN;
	LargeNumbers::LargeNumber b = -0.000000000073304860021539904_LN;
	EXPECT_EQ(a <= b, true);
}

TEST(Comparisons, lessEqual16) {
	LargeNumbers::LargeNumber a = -9.9478713451941512_LN;
	LargeNumbers::LargeNumber b = -0.000000000092445519180558280_LN;
	EXPECT_EQ(a <= b, true);
}

TEST(Comparisons, lessEqual21) {
	LargeNumbers::LargeNumber a = -6840515649.060211_LN;
	LargeNumbers::LargeNumber b = -0.000000000030401225757660793_LN;
	EXPECT_EQ(a <= b, true);
}

TEST(Comparisons, greaterEqual1) {
	LargeNumbers::LargeNumber a = -0.000000000026048038918855092_LN;
	LargeNumbers::LargeNumber b = -0.000000000033369588611304433_LN;
	EXPECT_EQ(a >= b, true);
}

TEST(Comparisons, greaterEqual6) {
	LargeNumbers::LargeNumber a = -0.095819307603995188_LN;
	LargeNumbers::LargeNumber b = -0.000000000028867117031116327_LN;
	EXPECT_EQ(a >= b, false);
}

TEST(Comparisons, greaterEqual11) {
	LargeNumbers::LargeNumber a = -0.69034074467533889_LN;
	LargeNumbers::LargeNumber b = -0.000000000073304860021539904_LN;
	EXPECT_EQ(a >= b, false);
}

TEST(Comparisons, greaterEqual16) {
	LargeNumbers::LargeNumber a = -9.9478713451941512_LN;
	LargeNumbers::LargeNumber b = -0.000000000092445519180558280_LN;
	EXPECT_EQ(a >= b, false);
}

TEST(Comparisons, greaterEqual21) {
	LargeNumbers::LargeNumber a = -6840515649.060211_LN;
	LargeNumbers::LargeNumber b = -0.000000000030401225757660793_LN;
	EXPECT_EQ(a >= b, false);
}

TEST(Comparisons, ne1) {
	LargeNumbers::LargeNumber a = -0.000000000026048038918855092_LN;
	LargeNumbers::LargeNumber b = -0.000000000033369588611304433_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne1_1) {
	LargeNumbers::LargeNumber a = -0.000000000026048038918855092_LN;
	LargeNumbers::LargeNumber b = -0.000000000026048038918855092_LN;
	EXPECT_EQ(a != b, false);
}

TEST(Comparisons, ne2) {
	LargeNumbers::LargeNumber a = -0.000000000043111226638909624_LN;
	LargeNumbers::LargeNumber b = -0.070507945559576698_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne3) {
	LargeNumbers::LargeNumber a = -0.000000000080008539491797396_LN;
	LargeNumbers::LargeNumber b = -0.85772119111109629_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne4) {
	LargeNumbers::LargeNumber a = -0.000000000044887166506362620_LN;
	LargeNumbers::LargeNumber b = -7.9257765216103737_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne5) {
	LargeNumbers::LargeNumber a = -0.000000000016335221309801085_LN;
	LargeNumbers::LargeNumber b = -4960421970.0980107_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne6) {
	LargeNumbers::LargeNumber a = -0.095819307603995188_LN;
	LargeNumbers::LargeNumber b = -0.000000000028867117031116327_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne6_1) {
	LargeNumbers::LargeNumber a = -0.095819307603995188_LN;
	LargeNumbers::LargeNumber b = -0.095819307603995188_LN;
	EXPECT_EQ(a != b, false);
}

TEST(Comparisons, ne7) {
	LargeNumbers::LargeNumber a = -0.054048247983605793_LN;
	LargeNumbers::LargeNumber b = -0.093136229519831894_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne8) {
	LargeNumbers::LargeNumber a = -0.028053888450575875_LN;
	LargeNumbers::LargeNumber b = -0.84258919911160014_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne9) {
	LargeNumbers::LargeNumber a = -0.076185685839950151_LN;
	LargeNumbers::LargeNumber b = -2.218767054071788_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne10) {
	LargeNumbers::LargeNumber a = -0.036548777685871346_LN;
	LargeNumbers::LargeNumber b = -7477123810.6218534_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne11) {
	LargeNumbers::LargeNumber a = -0.69034074467533889_LN;
	LargeNumbers::LargeNumber b = -0.000000000073304860021539904_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne11_1) {
	LargeNumbers::LargeNumber a = -0.69034074467533889_LN;
	LargeNumbers::LargeNumber b = -0.69034074467533889_LN;
	EXPECT_EQ(a != b, false);
}

TEST(Comparisons, ne12) {
	LargeNumbers::LargeNumber a = -0.70746672480858823_LN;
	LargeNumbers::LargeNumber b = -0.077436997911186017_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne13) {
	LargeNumbers::LargeNumber a = -0.84450599624978263_LN;
	LargeNumbers::LargeNumber b = -0.98431726845236620_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne14) {
	LargeNumbers::LargeNumber a = -0.5564580868396729_LN;
	LargeNumbers::LargeNumber b = -5.8041223417564320_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne15) {
	LargeNumbers::LargeNumber a = -0.72304893406176585_LN;
	LargeNumbers::LargeNumber b = -9122071277.7496364_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne16) {
	LargeNumbers::LargeNumber a = -9.9478713451941512_LN;
	LargeNumbers::LargeNumber b = -0.000000000092445519180558280_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne16_1) {
	LargeNumbers::LargeNumber a = -9.9478713451941512_LN;
	LargeNumbers::LargeNumber b = -9.9478713451941512_LN;
	EXPECT_EQ(a != b, false);
}

TEST(Comparisons, ne17) {
	LargeNumbers::LargeNumber a = -1.7276071299684814_LN;
	LargeNumbers::LargeNumber b = -0.056807761225435595_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne18) {
	LargeNumbers::LargeNumber a = -2.2082616541263936_LN;
	LargeNumbers::LargeNumber b = -0.35124835037958599_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne19) {
	LargeNumbers::LargeNumber a = -6.5054386703444965_LN;
	LargeNumbers::LargeNumber b = -7.2677714610650719_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne20) {
	LargeNumbers::LargeNumber a = -8.8392300195993330_LN;
	LargeNumbers::LargeNumber b = -7599447082.5141933_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne21) {
	LargeNumbers::LargeNumber a = -6840515649.060211_LN;
	LargeNumbers::LargeNumber b = -0.000000000030401225757660793_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne21_1) {
	LargeNumbers::LargeNumber a = -6840515649.060211_LN;
	LargeNumbers::LargeNumber b = -6840515649.060211_LN;
	EXPECT_EQ(a != b, false);
}

TEST(Comparisons, ne22) {
	LargeNumbers::LargeNumber a = -1578196312.3744002_LN;
	LargeNumbers::LargeNumber b = -0.058933514341845108_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne23) {
	LargeNumbers::LargeNumber a = -5115149214.5814595_LN;
	LargeNumbers::LargeNumber b = -0.16182939119499794_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne24) {
	LargeNumbers::LargeNumber a = -7979956901.849012_LN;
	LargeNumbers::LargeNumber b = -1.9532071400141017_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne25) {
	LargeNumbers::LargeNumber a = -9395716874.4807998_LN;
	LargeNumbers::LargeNumber b = -3746900017.2533545_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne26) {
	LargeNumbers::LargeNumber a = -0.00000000006246299304379105_LN;
	LargeNumbers::LargeNumber b = 0.00000000057305116105123414_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne27) {
	LargeNumbers::LargeNumber a = -0.000000000039935092577388062_LN;
	LargeNumbers::LargeNumber b = 0.55471041788772186_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne28) {
	LargeNumbers::LargeNumber a = -0.000000000028836977158565353_LN;
	LargeNumbers::LargeNumber b = 2.7205066127291832_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne29) {
	LargeNumbers::LargeNumber a = -0.000000000099986960759988173_LN;
	LargeNumbers::LargeNumber b = 29.989563349826540_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne30) {
	LargeNumbers::LargeNumber a = -0.00000000001743010855651358_LN;
	LargeNumbers::LargeNumber b = 89005835203.288761_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne31) {
	LargeNumbers::LargeNumber a = -0.012449754168597717_LN;
	LargeNumbers::LargeNumber b = 0.00000000083032906568545396_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne32) {
	LargeNumbers::LargeNumber a = -0.064878071931532019_LN;
	LargeNumbers::LargeNumber b = 0.20274342531305570_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne33) {
	LargeNumbers::LargeNumber a = -0.04924193304139407_LN;
	LargeNumbers::LargeNumber b = 3.0898028171608339_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne34) {
	LargeNumbers::LargeNumber a = -0.092926425556942918_LN;
	LargeNumbers::LargeNumber b = 25.512328400378602_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne35) {
	LargeNumbers::LargeNumber a = -0.073163272106596821_LN;
	LargeNumbers::LargeNumber b = 19228293161.597621_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne36) {
	LargeNumbers::LargeNumber a = -0.97392621947296940_LN;
	LargeNumbers::LargeNumber b = 0.00000000078906502348106743_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne37) {
	LargeNumbers::LargeNumber a = -0.37992236473519058_LN;
	LargeNumbers::LargeNumber b = 0.25130029827334122_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne38) {
	LargeNumbers::LargeNumber a = -0.52005296206047665_LN;
	LargeNumbers::LargeNumber b = 1.8973120242312175_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne39) {
	LargeNumbers::LargeNumber a = -0.54052922841955965_LN;
	LargeNumbers::LargeNumber b = 44.14625525658643_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne40) {
	LargeNumbers::LargeNumber a = -0.21040721751214285_LN;
	LargeNumbers::LargeNumber b = 85151738565.17881_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne41) {
	LargeNumbers::LargeNumber a = -3.1422168038107020_LN;
	LargeNumbers::LargeNumber b = 0.00000000073610913266351282_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne42) {
	LargeNumbers::LargeNumber a = -9.1036533881737187_LN;
	LargeNumbers::LargeNumber b = 0.71885881230649902_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne43) {
	LargeNumbers::LargeNumber a = -5.3742803692226610_LN;
	LargeNumbers::LargeNumber b = 8.448989659490081_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne44) {
	LargeNumbers::LargeNumber a = -5.6159903016331436_LN;
	LargeNumbers::LargeNumber b = 18.605053053100014_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne45) {
	LargeNumbers::LargeNumber a = -4.4487230494146461_LN;
	LargeNumbers::LargeNumber b = 66830610846.058204_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne46) {
	LargeNumbers::LargeNumber a = -4883744850.701199_LN;
	LargeNumbers::LargeNumber b = 0.00000000043851226709198280_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne47) {
	LargeNumbers::LargeNumber a = -9737218074.4803015_LN;
	LargeNumbers::LargeNumber b = 0.62569717471065427_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne48) {
	LargeNumbers::LargeNumber a = -8621468532.7775069_LN;
	LargeNumbers::LargeNumber b = 8.5911213617823143_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne49) {
	LargeNumbers::LargeNumber a = -9907496730.6537755_LN;
	LargeNumbers::LargeNumber b = 42.425549813535327_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne50) {
	LargeNumbers::LargeNumber a = -7301453994.4160508_LN;
	LargeNumbers::LargeNumber b = 43726041995.092633_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne51) {
	LargeNumbers::LargeNumber a = 0.00000000060149328886258666_LN;
	LargeNumbers::LargeNumber b = -0.000000000091616117794041825_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne52) {
	LargeNumbers::LargeNumber a = 0.000000000554567818758720_LN;
	LargeNumbers::LargeNumber b = -0.072305655087266688_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne53) {
	LargeNumbers::LargeNumber a = 0.00000000030368652435407758_LN;
	LargeNumbers::LargeNumber b = -0.86561851321050841_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne54) {
	LargeNumbers::LargeNumber a = 0.00000000018118892716242594_LN;
	LargeNumbers::LargeNumber b = -6.1116484072297946_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne55) {
	LargeNumbers::LargeNumber a = 0.00000000011938532324160647_LN;
	LargeNumbers::LargeNumber b = -7452548747.5341052_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne56) {
	LargeNumbers::LargeNumber a = 0.26238345170321186_LN;
	LargeNumbers::LargeNumber b = -0.000000000052256348393874358_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne57) {
	LargeNumbers::LargeNumber a = 0.12353051807411640_LN;
	LargeNumbers::LargeNumber b = -0.078908068479735254_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne58) {
	LargeNumbers::LargeNumber a = 0.56414379163574215_LN;
	LargeNumbers::LargeNumber b = -0.25729933484151365_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne59) {
	LargeNumbers::LargeNumber a = 0.69704251860282006_LN;
	LargeNumbers::LargeNumber b = -9.2358828698542118_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne60) {
	LargeNumbers::LargeNumber a = 0.47254637714370096_LN;
	LargeNumbers::LargeNumber b = -5463212390.8087574_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne61) {
	LargeNumbers::LargeNumber a = 2.118916307748052_LN;
	LargeNumbers::LargeNumber b = -0.000000000044313630282512266_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne62) {
	LargeNumbers::LargeNumber a = 9.9644956694724766_LN;
	LargeNumbers::LargeNumber b = -0.057500765734933310_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne63) {
	LargeNumbers::LargeNumber a = 5.0375664381735684_LN;
	LargeNumbers::LargeNumber b = -0.56014411503038660_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne64) {
	LargeNumbers::LargeNumber a = 4.4800514426039610_LN;
	LargeNumbers::LargeNumber b = -4.2754356811322756_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne65) {
	LargeNumbers::LargeNumber a = 8.834308128245895_LN;
	LargeNumbers::LargeNumber b = -1547424031.3941011_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne66) {
	LargeNumbers::LargeNumber a = 56.428214305873043_LN;
	LargeNumbers::LargeNumber b = -0.000000000025697975037370035_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne67) {
	LargeNumbers::LargeNumber a = 67.871803677674262_LN;
	LargeNumbers::LargeNumber b = -0.078656615984642372_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne68) {
	LargeNumbers::LargeNumber a = 68.32955342203028_LN;
	LargeNumbers::LargeNumber b = -0.17460369836023753_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne69) {
	LargeNumbers::LargeNumber a = 89.756637685716118_LN;
	LargeNumbers::LargeNumber b = -9.6594869411134509_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne70) {
	LargeNumbers::LargeNumber a = 55.6415735162873_LN;
	LargeNumbers::LargeNumber b = -3237650232.3469300_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne71) {
	LargeNumbers::LargeNumber a = 14413214881.926854_LN;
	LargeNumbers::LargeNumber b = -0.000000000035234173236094633_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne72) {
	LargeNumbers::LargeNumber a = 15202162416.403425_LN;
	LargeNumbers::LargeNumber b = -0.021894708372036583_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne73) {
	LargeNumbers::LargeNumber a = 87106286439.754511_LN;
	LargeNumbers::LargeNumber b = -0.70213878517481316_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne74) {
	LargeNumbers::LargeNumber a = 18699641199.498609_LN;
	LargeNumbers::LargeNumber b = -2.3227202091149524_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne75) {
	LargeNumbers::LargeNumber a = 83798111697.958333_LN;
	LargeNumbers::LargeNumber b = -4401220371.1510154_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne76) {
	LargeNumbers::LargeNumber a = 0.00000000018339586035765963_LN;
	LargeNumbers::LargeNumber b = 0.00000000083420126057101881_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne77) {
	LargeNumbers::LargeNumber a = 0.00000000013221898130390175_LN;
	LargeNumbers::LargeNumber b = 0.2866132087981388_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne78) {
	LargeNumbers::LargeNumber a = 0.00000000029683195188344298_LN;
	LargeNumbers::LargeNumber b = 4.001811028897473_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne79) {
	LargeNumbers::LargeNumber a = 0.00000000072767021393853781_LN;
	LargeNumbers::LargeNumber b = 93.951351224132772_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne80) {
	LargeNumbers::LargeNumber a = 0.00000000077091278383477930_LN;
	LargeNumbers::LargeNumber b = 17654463719.003821_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne81) {
	LargeNumbers::LargeNumber a = 0.69227143509413636_LN;
	LargeNumbers::LargeNumber b = 0.00000000026920200923196074_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne82) {
	LargeNumbers::LargeNumber a = 0.30788883671311594_LN;
	LargeNumbers::LargeNumber b = 0.5981811989774883_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne83) {
	LargeNumbers::LargeNumber a = 0.74100812420163818_LN;
	LargeNumbers::LargeNumber b = 3.2957413152819364_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne84) {
	LargeNumbers::LargeNumber a = 0.51031168064022015_LN;
	LargeNumbers::LargeNumber b = 65.477666792066314_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne85) {
	LargeNumbers::LargeNumber a = 0.2383687027234400_LN;
	LargeNumbers::LargeNumber b = 67298048453.62498_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne86) {
	LargeNumbers::LargeNumber a = 9.9067247428782178_LN;
	LargeNumbers::LargeNumber b = 0.00000000074446254230843112_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne87) {
	LargeNumbers::LargeNumber a = 4.515753642402623_LN;
	LargeNumbers::LargeNumber b = 0.96070079778961870_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne88) {
	LargeNumbers::LargeNumber a = 5.0021667484302338_LN;
	LargeNumbers::LargeNumber b = 3.1653046628631903_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne89) {
	LargeNumbers::LargeNumber a = 3.6554992433548120_LN;
	LargeNumbers::LargeNumber b = 70.564418664810604_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne90) {
	LargeNumbers::LargeNumber a = 9.2813197325914498_LN;
	LargeNumbers::LargeNumber b = 17970712741.474738_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne91) {
	LargeNumbers::LargeNumber a = 30.744971484653110_LN;
	LargeNumbers::LargeNumber b = 0.00000000071306672230536596_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne92) {
	LargeNumbers::LargeNumber a = 87.262755701996923_LN;
	LargeNumbers::LargeNumber b = 0.79338318643397690_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne93) {
	LargeNumbers::LargeNumber a = 39.68313279508543_LN;
	LargeNumbers::LargeNumber b = 1.7736077621941626_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne94) {
	LargeNumbers::LargeNumber a = 39.719570896756916_LN;
	LargeNumbers::LargeNumber b = 85.938929008539899_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne95) {
	LargeNumbers::LargeNumber a = 72.3942381772590_LN;
	LargeNumbers::LargeNumber b = 42297970442.060197_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne96) {
	LargeNumbers::LargeNumber a = 77518679647.436789_LN;
	LargeNumbers::LargeNumber b = 0.00000000023341605159645392_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne97) {
	LargeNumbers::LargeNumber a = 36047952521.67809_LN;
	LargeNumbers::LargeNumber b = 0.41677264057449541_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne98) {
	LargeNumbers::LargeNumber a = 17249351669.704325_LN;
	LargeNumbers::LargeNumber b = 9.2613110799851731_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne99) {
	LargeNumbers::LargeNumber a = 49659677030.215690_LN;
	LargeNumbers::LargeNumber b = 13.683296265531172_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Comparisons, ne100) {
	LargeNumbers::LargeNumber a = 91346078572.45385_LN;
	LargeNumbers::LargeNumber b = 79789420920.669622_LN;
	EXPECT_EQ(a != b, true);
}

TEST(Operations, plus1) {
	LargeNumbers::LargeNumber a = -0.000000000026048038918855092_LN;
	LargeNumbers::LargeNumber b = -0.000000000033369588611304433_LN;
	EXPECT_EQ(a + b, -0.000000000059417627530159525_LN);
}

TEST(Operations, plus2) {
	LargeNumbers::LargeNumber a = -0.000000000043111226638909624_LN;
	LargeNumbers::LargeNumber b = -0.070507945559576698_LN;
	EXPECT_EQ(a + b, -0.070507945602687924638909624_LN);
}

TEST(Operations, plus3) {
	LargeNumbers::LargeNumber a = -0.000000000080008539491797396_LN;
	LargeNumbers::LargeNumber b = -0.85772119111109629_LN;
	EXPECT_EQ(a + b, -0.857721191191104829491797396_LN);
}

TEST(Operations, plus4) {
	LargeNumbers::LargeNumber a = -0.000000000044887166506362620_LN;
	LargeNumbers::LargeNumber b = -7.9257765216103737_LN;
	EXPECT_EQ(a + b, -7.925776521655260866506362620_LN);
}

TEST(Operations, plus5) {
	LargeNumbers::LargeNumber a = -0.000000000016335221309801085_LN;
	LargeNumbers::LargeNumber b = -4960421970.0980107_LN;
	EXPECT_EQ(a + b, -4960421970.098010700016335221309801085_LN);
}

TEST(Operations, plus6) {
	LargeNumbers::LargeNumber a = -0.095819307603995188_LN;
	LargeNumbers::LargeNumber b = -0.000000000028867117031116327_LN;
	EXPECT_EQ(a + b, -0.095819307632862305031116327_LN);
}

TEST(Operations, plus7) {
	LargeNumbers::LargeNumber a = -0.054048247983605793_LN;
	LargeNumbers::LargeNumber b = -0.093136229519831894_LN;
	EXPECT_EQ(a + b, -0.147184477503437687_LN);
}

TEST(Operations, plus8) {
	LargeNumbers::LargeNumber a = -0.028053888450575875_LN;
	LargeNumbers::LargeNumber b = -0.84258919911160014_LN;
	EXPECT_EQ(a + b, -0.870643087562176015_LN);
}

TEST(Operations, plus9) {
	LargeNumbers::LargeNumber a = -0.076185685839950151_LN;
	LargeNumbers::LargeNumber b = -2.218767054071788_LN;
	EXPECT_EQ(a + b, -2.294952739911738151_LN);
}

TEST(Operations, plus10) {
	LargeNumbers::LargeNumber a = -0.036548777685871346_LN;
	LargeNumbers::LargeNumber b = -7477123810.6218534_LN;
	EXPECT_EQ(a + b, -7477123810.658402177685871346_LN);
}

TEST(Operations, plus11) {
	LargeNumbers::LargeNumber a = -0.69034074467533889_LN;
	LargeNumbers::LargeNumber b = -0.000000000073304860021539904_LN;
	EXPECT_EQ(a + b, -0.690340744748643750021539904_LN);
}

TEST(Operations, plus12) {
	LargeNumbers::LargeNumber a = -0.70746672480858823_LN;
	LargeNumbers::LargeNumber b = -0.077436997911186017_LN;
	EXPECT_EQ(a + b, -0.784903722719774247_LN);
}

TEST(Operations, plus13) {
	LargeNumbers::LargeNumber a = -0.84450599624978263_LN;
	LargeNumbers::LargeNumber b = -0.98431726845236620_LN;
	EXPECT_EQ(a + b, -1.82882326470214883_LN);
}

TEST(Operations, plus14) {
	LargeNumbers::LargeNumber a = -0.5564580868396729_LN;
	LargeNumbers::LargeNumber b = -5.8041223417564320_LN;
	EXPECT_EQ(a + b, -6.3605804285961049_LN);
}

TEST(Operations, plus15) {
	LargeNumbers::LargeNumber a = -0.72304893406176585_LN;
	LargeNumbers::LargeNumber b = -9122071277.7496364_LN;
	EXPECT_EQ(a + b, -9122071278.47268533406176585_LN);
}

TEST(Operations, plus16) {
	LargeNumbers::LargeNumber a = -9.9478713451941512_LN;
	LargeNumbers::LargeNumber b = -0.000000000092445519180558280_LN;
	EXPECT_EQ(a + b, -9.947871345286596719180558280_LN);
}

TEST(Operations, plus17) {
	LargeNumbers::LargeNumber a = -1.7276071299684814_LN;
	LargeNumbers::LargeNumber b = -0.056807761225435595_LN;
	EXPECT_EQ(a + b, -1.784414891193916995_LN);
}

TEST(Operations, plus18) {
	LargeNumbers::LargeNumber a = -2.2082616541263936_LN;
	LargeNumbers::LargeNumber b = -0.35124835037958599_LN;
	EXPECT_EQ(a + b, -2.55951000450597959_LN);
}

TEST(Operations, plus19) {
	LargeNumbers::LargeNumber a = -6.5054386703444965_LN;
	LargeNumbers::LargeNumber b = -7.2677714610650719_LN;
	EXPECT_EQ(a + b, -13.7732101314095684_LN);
}

TEST(Operations, plus20) {
	LargeNumbers::LargeNumber a = -8.8392300195993330_LN;
	LargeNumbers::LargeNumber b = -7599447082.5141933_LN;
	EXPECT_EQ(a + b, -7599447091.3534233195993330_LN);
}

TEST(Operations, plus21) {
	LargeNumbers::LargeNumber a = -6840515649.060211_LN;
	LargeNumbers::LargeNumber b = -0.000000000030401225757660793_LN;
	EXPECT_EQ(a + b, -6840515649.060211000030401225757660793_LN);
}

TEST(Operations, plus22) {
	LargeNumbers::LargeNumber a = -1578196312.3744002_LN;
	LargeNumbers::LargeNumber b = -0.058933514341845108_LN;
	EXPECT_EQ(a + b, -1578196312.433333714341845108_LN);
}

TEST(Operations, plus23) {
	LargeNumbers::LargeNumber a = -5115149214.5814595_LN;
	LargeNumbers::LargeNumber b = -0.16182939119499794_LN;
	EXPECT_EQ(a + b, -5115149214.74328889119499794_LN);
}

TEST(Operations, plus24) {
	LargeNumbers::LargeNumber a = -7979956901.849012_LN;
	LargeNumbers::LargeNumber b = -1.9532071400141017_LN;
	EXPECT_EQ(a + b, -7979956903.8022191400141017_LN);
}

TEST(Operations, plus25) {
	LargeNumbers::LargeNumber a = -9395716874.4807998_LN;
	LargeNumbers::LargeNumber b = -3746900017.2533545_LN;
	EXPECT_EQ(a + b, -13142616891.7341543_LN);
}

TEST(Operations, plus26) {
	LargeNumbers::LargeNumber a = -0.00000000006246299304379105_LN;
	LargeNumbers::LargeNumber b = 0.00000000057305116105123414_LN;
	EXPECT_EQ(a + b, 0.00000000051058816800744309_LN);
}

TEST(Operations, plus27) {
	LargeNumbers::LargeNumber a = -0.000000000039935092577388062_LN;
	LargeNumbers::LargeNumber b = 0.55471041788772186_LN;
	EXPECT_EQ(a + b, 0.554710417847786767422611938_LN);
}

TEST(Operations, plus28) {
	LargeNumbers::LargeNumber a = -0.000000000028836977158565353_LN;
	LargeNumbers::LargeNumber b = 2.7205066127291832_LN;
	EXPECT_EQ(a + b, 2.720506612700346222841434647_LN);
}

TEST(Operations, plus29) {
	LargeNumbers::LargeNumber a = -0.000000000099986960759988173_LN;
	LargeNumbers::LargeNumber b = 29.989563349826540_LN;
	EXPECT_EQ(a + b, 29.989563349726553039240011827_LN);
}

TEST(Operations, plus30) {
	LargeNumbers::LargeNumber a = -0.00000000001743010855651358_LN;
	LargeNumbers::LargeNumber b = 89005835203.288761_LN;
	EXPECT_EQ(a + b, 89005835203.28876099998256989144348642_LN);
}

TEST(Operations, plus31) {
	LargeNumbers::LargeNumber a = -0.012449754168597717_LN;
	LargeNumbers::LargeNumber b = 0.00000000083032906568545396_LN;
	EXPECT_EQ(a + b, -0.01244975333826865131454604_LN);
}

TEST(Operations, plus32) {
	LargeNumbers::LargeNumber a = -0.064878071931532019_LN;
	LargeNumbers::LargeNumber b = 0.20274342531305570_LN;
	EXPECT_EQ(a + b, 0.137865353381523681_LN);
}

TEST(Operations, plus33) {
	LargeNumbers::LargeNumber a = -0.04924193304139407_LN;
	LargeNumbers::LargeNumber b = 3.0898028171608339_LN;
	EXPECT_EQ(a + b, 3.04056088411943983_LN);
}

TEST(Operations, plus34) {
	LargeNumbers::LargeNumber a = -0.092926425556942918_LN;
	LargeNumbers::LargeNumber b = 25.512328400378602_LN;
	EXPECT_EQ(a + b, 25.419401974821659082_LN);
}

TEST(Operations, plus35) {
	LargeNumbers::LargeNumber a = -0.073163272106596821_LN;
	LargeNumbers::LargeNumber b = 19228293161.597621_LN;
	EXPECT_EQ(a + b, 19228293161.524457727893403179_LN);
}

TEST(Operations, plus36) {
	LargeNumbers::LargeNumber a = -0.97392621947296940_LN;
	LargeNumbers::LargeNumber b = 0.00000000078906502348106743_LN;
	EXPECT_EQ(a + b, -0.97392621868390437651893257_LN);
}

TEST(Operations, plus37) {
	LargeNumbers::LargeNumber a = -0.37992236473519058_LN;
	LargeNumbers::LargeNumber b = 0.25130029827334122_LN;
	EXPECT_EQ(a + b, -0.12862206646184936_LN);
}

TEST(Operations, plus38) {
	LargeNumbers::LargeNumber a = -0.52005296206047665_LN;
	LargeNumbers::LargeNumber b = 1.8973120242312175_LN;
	EXPECT_EQ(a + b, 1.37725906217074085_LN);
}

TEST(Operations, plus39) {
	LargeNumbers::LargeNumber a = -0.54052922841955965_LN;
	LargeNumbers::LargeNumber b = 44.14625525658643_LN;
	EXPECT_EQ(a + b, 43.60572602816687035_LN);
}

TEST(Operations, plus40) {
	LargeNumbers::LargeNumber a = -0.21040721751214285_LN;
	LargeNumbers::LargeNumber b = 85151738565.17881_LN;
	EXPECT_EQ(a + b, 85151738564.96840278248785715_LN);
}

TEST(Operations, plus41) {
	LargeNumbers::LargeNumber a = -3.1422168038107020_LN;
	LargeNumbers::LargeNumber b = 0.00000000073610913266351282_LN;
	EXPECT_EQ(a + b, -3.14221680307459286733648718_LN);
}

TEST(Operations, plus42) {
	LargeNumbers::LargeNumber a = -9.1036533881737187_LN;
	LargeNumbers::LargeNumber b = 0.71885881230649902_LN;
	EXPECT_EQ(a + b, -8.38479457586721968_LN);
}

TEST(Operations, plus43) {
	LargeNumbers::LargeNumber a = -5.3742803692226610_LN;
	LargeNumbers::LargeNumber b = 8.448989659490081_LN;
	EXPECT_EQ(a + b, 3.0747092902674200_LN);
}

TEST(Operations, plus44) {
	LargeNumbers::LargeNumber a = -5.6159903016331436_LN;
	LargeNumbers::LargeNumber b = 18.605053053100014_LN;
	EXPECT_EQ(a + b, 12.9890627514668704_LN);
}

TEST(Operations, plus45) {
	LargeNumbers::LargeNumber a = -4.4487230494146461_LN;
	LargeNumbers::LargeNumber b = 66830610846.058204_LN;
	EXPECT_EQ(a + b, 66830610841.6094809505853539_LN);
}

TEST(Operations, plus46) {
	LargeNumbers::LargeNumber a = -4883744850.701199_LN;
	LargeNumbers::LargeNumber b = 0.00000000043851226709198280_LN;
	EXPECT_EQ(a + b, -4883744850.70119899956148773290801720_LN);
}

TEST(Operations, plus47) {
	LargeNumbers::LargeNumber a = -9737218074.4803015_LN;
	LargeNumbers::LargeNumber b = 0.62569717471065427_LN;
	EXPECT_EQ(a + b, -9737218073.85460432528934573_LN);
}

TEST(Operations, plus48) {
	LargeNumbers::LargeNumber a = -8621468532.7775069_LN;
	LargeNumbers::LargeNumber b = 8.5911213617823143_LN;
	EXPECT_EQ(a + b, -8621468524.1863855382176857_LN);
}

TEST(Operations, plus49) {
	LargeNumbers::LargeNumber a = -9907496730.6537755_LN;
	LargeNumbers::LargeNumber b = 42.425549813535327_LN;
	EXPECT_EQ(a + b, -9907496688.228225686464673_LN);
}

TEST(Operations, plus50) {
	LargeNumbers::LargeNumber a = -7301453994.4160508_LN;
	LargeNumbers::LargeNumber b = 43726041995.092633_LN;
	EXPECT_EQ(a + b, 36424588000.6765822_LN);
}

TEST(Operations, plus51) {
	LargeNumbers::LargeNumber a = 0.00000000060149328886258666_LN;
	LargeNumbers::LargeNumber b = -0.000000000091616117794041825_LN;
	EXPECT_EQ(a + b, 0.000000000509877171068544835_LN);
}

TEST(Operations, plus52) {
	LargeNumbers::LargeNumber a = 0.000000000554567818758720_LN;
	LargeNumbers::LargeNumber b = -0.072305655087266688_LN;
	EXPECT_EQ(a + b, -0.072305654532698869241280_LN);
}

TEST(Operations, plus53) {
	LargeNumbers::LargeNumber a = 0.00000000030368652435407758_LN;
	LargeNumbers::LargeNumber b = -0.86561851321050841_LN;
	EXPECT_EQ(a + b, -0.86561851290682188564592242_LN);
}

TEST(Operations, plus54) {
	LargeNumbers::LargeNumber a = 0.00000000018118892716242594_LN;
	LargeNumbers::LargeNumber b = -6.1116484072297946_LN;
	EXPECT_EQ(a + b, -6.11164840704860567283757406_LN);
}

TEST(Operations, plus55) {
	LargeNumbers::LargeNumber a = 0.00000000011938532324160647_LN;
	LargeNumbers::LargeNumber b = -7452548747.5341052_LN;
	EXPECT_EQ(a + b, -7452548747.53410519988061467675839353_LN);
}

TEST(Operations, plus56) {
	LargeNumbers::LargeNumber a = 0.26238345170321186_LN;
	LargeNumbers::LargeNumber b = -0.000000000052256348393874358_LN;
	EXPECT_EQ(a + b, 0.262383451650955511606125642_LN);
}

TEST(Operations, plus57) {
	LargeNumbers::LargeNumber a = 0.12353051807411640_LN;
	LargeNumbers::LargeNumber b = -0.078908068479735254_LN;
	EXPECT_EQ(a + b, 0.044622449594381146_LN);
}

TEST(Operations, plus58) {
	LargeNumbers::LargeNumber a = 0.56414379163574215_LN;
	LargeNumbers::LargeNumber b = -0.25729933484151365_LN;
	EXPECT_EQ(a + b, 0.30684445679422850_LN);
}

TEST(Operations, plus59) {
	LargeNumbers::LargeNumber a = 0.69704251860282006_LN;
	LargeNumbers::LargeNumber b = -9.2358828698542118_LN;
	EXPECT_EQ(a + b, -8.53884035125139174_LN);
}

TEST(Operations, plus60) {
	LargeNumbers::LargeNumber a = 0.47254637714370096_LN;
	LargeNumbers::LargeNumber b = -5463212390.8087574_LN;
	EXPECT_EQ(a + b, -5463212390.33621102285629904_LN);
}

TEST(Operations, plus61) {
	LargeNumbers::LargeNumber a = 2.118916307748052_LN;
	LargeNumbers::LargeNumber b = -0.000000000044313630282512266_LN;
	EXPECT_EQ(a + b, 2.118916307703738369717487734_LN);
}

TEST(Operations, plus62) {
	LargeNumbers::LargeNumber a = 9.9644956694724766_LN;
	LargeNumbers::LargeNumber b = -0.057500765734933310_LN;
	EXPECT_EQ(a + b, 9.906994903737543290_LN);
}

TEST(Operations, plus63) {
	LargeNumbers::LargeNumber a = 5.0375664381735684_LN;
	LargeNumbers::LargeNumber b = -0.56014411503038660_LN;
	EXPECT_EQ(a + b, 4.47742232314318180_LN);
}

TEST(Operations, plus64) {
	LargeNumbers::LargeNumber a = 4.4800514426039610_LN;
	LargeNumbers::LargeNumber b = -4.2754356811322756_LN;
	EXPECT_EQ(a + b, 0.2046157614716854_LN);
}

TEST(Operations, plus65) {
	LargeNumbers::LargeNumber a = 8.834308128245895_LN;
	LargeNumbers::LargeNumber b = -1547424031.3941011_LN;
	EXPECT_EQ(a + b, -1547424022.559792971754105_LN);
}

TEST(Operations, plus66) {
	LargeNumbers::LargeNumber a = 56.428214305873043_LN;
	LargeNumbers::LargeNumber b = -0.000000000025697975037370035_LN;
	EXPECT_EQ(a + b, 56.428214305847345024962629965_LN);
}

TEST(Operations, plus67) {
	LargeNumbers::LargeNumber a = 67.871803677674262_LN;
	LargeNumbers::LargeNumber b = -0.078656615984642372_LN;
	EXPECT_EQ(a + b, 67.793147061689619628_LN);
}

TEST(Operations, plus68) {
	LargeNumbers::LargeNumber a = 68.32955342203028_LN;
	LargeNumbers::LargeNumber b = -0.17460369836023753_LN;
	EXPECT_EQ(a + b, 68.15494972367004247_LN);
}

TEST(Operations, plus69) {
	LargeNumbers::LargeNumber a = 89.756637685716118_LN;
	LargeNumbers::LargeNumber b = -9.6594869411134509_LN;
	EXPECT_EQ(a + b, 80.0971507446026671_LN);
}

TEST(Operations, plus70) {
	LargeNumbers::LargeNumber a = 55.6415735162873_LN;
	LargeNumbers::LargeNumber b = -3237650232.3469300_LN;
	EXPECT_EQ(a + b, -3237650176.7053564837127_LN);
}

TEST(Operations, plus71) {
	LargeNumbers::LargeNumber a = 14413214881.926854_LN;
	LargeNumbers::LargeNumber b = -0.000000000035234173236094633_LN;
	EXPECT_EQ(a + b, 14413214881.926853999964765826763905367_LN);
}

TEST(Operations, plus72) {
	LargeNumbers::LargeNumber a = 15202162416.403425_LN;
	LargeNumbers::LargeNumber b = -0.021894708372036583_LN;
	EXPECT_EQ(a + b, 15202162416.381530291627963417_LN);
}

TEST(Operations, plus73) {
	LargeNumbers::LargeNumber a = 87106286439.754511_LN;
	LargeNumbers::LargeNumber b = -0.70213878517481316_LN;
	EXPECT_EQ(a + b, 87106286439.05237221482518684_LN);
}

TEST(Operations, plus74) {
	LargeNumbers::LargeNumber a = 18699641199.498609_LN;
	LargeNumbers::LargeNumber b = -2.3227202091149524_LN;
	EXPECT_EQ(a + b, 18699641197.1758887908850476_LN);
}

TEST(Operations, plus75) {
	LargeNumbers::LargeNumber a = 83798111697.958333_LN;
	LargeNumbers::LargeNumber b = -4401220371.1510154_LN;
	EXPECT_EQ(a + b, 79396891326.8073176_LN);
}

TEST(Operations, plus76) {
	LargeNumbers::LargeNumber a = 0.00000000018339586035765963_LN;
	LargeNumbers::LargeNumber b = 0.00000000083420126057101881_LN;
	EXPECT_EQ(a + b, 0.00000000101759712092867844_LN);
}

TEST(Operations, plus77) {
	LargeNumbers::LargeNumber a = 0.00000000013221898130390175_LN;
	LargeNumbers::LargeNumber b = 0.2866132087981388_LN;
	EXPECT_EQ(a + b, 0.28661320893035778130390175_LN);
}

TEST(Operations, plus78) {
	LargeNumbers::LargeNumber a = 0.00000000029683195188344298_LN;
	LargeNumbers::LargeNumber b = 4.001811028897473_LN;
	EXPECT_EQ(a + b, 4.00181102919430495188344298_LN);
}

TEST(Operations, plus79) {
	LargeNumbers::LargeNumber a = 0.00000000072767021393853781_LN;
	LargeNumbers::LargeNumber b = 93.951351224132772_LN;
	EXPECT_EQ(a + b, 93.95135122486044221393853781_LN);
}

TEST(Operations, plus80) {
	LargeNumbers::LargeNumber a = 0.00000000077091278383477930_LN;
	LargeNumbers::LargeNumber b = 17654463719.003821_LN;
	EXPECT_EQ(a + b, 17654463719.00382100077091278383477930_LN);
}

TEST(Operations, plus81) {
	LargeNumbers::LargeNumber a = 0.69227143509413636_LN;
	LargeNumbers::LargeNumber b = 0.00000000026920200923196074_LN;
	EXPECT_EQ(a + b, 0.69227143536333836923196074_LN);
}

TEST(Operations, plus82) {
	LargeNumbers::LargeNumber a = 0.30788883671311594_LN;
	LargeNumbers::LargeNumber b = 0.5981811989774883_LN;
	EXPECT_EQ(a + b, 0.90607003569060424_LN);
}

TEST(Operations, plus83) {
	LargeNumbers::LargeNumber a = 0.74100812420163818_LN;
	LargeNumbers::LargeNumber b = 3.2957413152819364_LN;
	EXPECT_EQ(a + b, 4.03674943948357458_LN);
}

TEST(Operations, plus84) {
	LargeNumbers::LargeNumber a = 0.51031168064022015_LN;
	LargeNumbers::LargeNumber b = 65.477666792066314_LN;
	EXPECT_EQ(a + b, 65.98797847270653415_LN);
}

TEST(Operations, plus85) {
	LargeNumbers::LargeNumber a = 0.2383687027234400_LN;
	LargeNumbers::LargeNumber b = 67298048453.62498_LN;
	EXPECT_EQ(a + b, 67298048453.8633487027234400_LN);
}

TEST(Operations, plus86) {
	LargeNumbers::LargeNumber a = 9.9067247428782178_LN;
	LargeNumbers::LargeNumber b = 0.00000000074446254230843112_LN;
	EXPECT_EQ(a + b, 9.90672474362268034230843112_LN);
}

TEST(Operations, plus87) {
	LargeNumbers::LargeNumber a = 4.515753642402623_LN;
	LargeNumbers::LargeNumber b = 0.96070079778961870_LN;
	EXPECT_EQ(a + b, 5.47645444019224170_LN);
}

TEST(Operations, plus88) {
	LargeNumbers::LargeNumber a = 5.0021667484302338_LN;
	LargeNumbers::LargeNumber b = 3.1653046628631903_LN;
	EXPECT_EQ(a + b, 8.1674714112934241_LN);
}

TEST(Operations, plus89) {
	LargeNumbers::LargeNumber a = 3.6554992433548120_LN;
	LargeNumbers::LargeNumber b = 70.564418664810604_LN;
	EXPECT_EQ(a + b, 74.2199179081654160_LN);
}

TEST(Operations, plus90) {
	LargeNumbers::LargeNumber a = 9.2813197325914498_LN;
	LargeNumbers::LargeNumber b = 17970712741.474738_LN;
	EXPECT_EQ(a + b, 17970712750.7560577325914498_LN);
}

TEST(Operations, plus91) {
	LargeNumbers::LargeNumber a = 30.744971484653110_LN;
	LargeNumbers::LargeNumber b = 0.00000000071306672230536596_LN;
	EXPECT_EQ(a + b, 30.74497148536617672230536596_LN);
}

TEST(Operations, plus92) {
	LargeNumbers::LargeNumber a = 87.262755701996923_LN;
	LargeNumbers::LargeNumber b = 0.79338318643397690_LN;
	EXPECT_EQ(a + b, 88.05613888843089990_LN);
}

TEST(Operations, plus93) {
	LargeNumbers::LargeNumber a = 39.68313279508543_LN;
	LargeNumbers::LargeNumber b = 1.7736077621941626_LN;
	EXPECT_EQ(a + b, 41.4567405572795926_LN);
}

TEST(Operations, plus94) {
	LargeNumbers::LargeNumber a = 39.719570896756916_LN;
	LargeNumbers::LargeNumber b = 85.938929008539899_LN;
	EXPECT_EQ(a + b, 125.658499905296815_LN);
}

TEST(Operations, plus95) {
	LargeNumbers::LargeNumber a = 72.3942381772590_LN;
	LargeNumbers::LargeNumber b = 42297970442.060197_LN;
	EXPECT_EQ(a + b, 42297970514.4544351772590_LN);
}

TEST(Operations, plus96) {
	LargeNumbers::LargeNumber a = 77518679647.436789_LN;
	LargeNumbers::LargeNumber b = 0.00000000023341605159645392_LN;
	EXPECT_EQ(a + b, 77518679647.43678900023341605159645392_LN);
}

TEST(Operations, plus97) {
	LargeNumbers::LargeNumber a = 36047952521.67809_LN;
	LargeNumbers::LargeNumber b = 0.41677264057449541_LN;
	EXPECT_EQ(a + b, 36047952522.09486264057449541_LN);
}

TEST(Operations, plus98) {
	LargeNumbers::LargeNumber a = 17249351669.704325_LN;
	LargeNumbers::LargeNumber b = 9.2613110799851731_LN;
	EXPECT_EQ(a + b, 17249351678.9656360799851731_LN);
}

TEST(Operations, plus99) {
	LargeNumbers::LargeNumber a = 49659677030.215690_LN;
	LargeNumbers::LargeNumber b = 13.683296265531172_LN;
	EXPECT_EQ(a + b, 49659677043.898986265531172_LN);
}

TEST(Operations, plus100) {
	LargeNumbers::LargeNumber a = 91346078572.45385_LN;
	LargeNumbers::LargeNumber b = 79789420920.669622_LN;
	EXPECT_EQ(a + b, 171135499493.123472_LN);
}

TEST(Operations, minus1) {
	LargeNumbers::LargeNumber a = -0.000000000026048038918855092_LN;
	LargeNumbers::LargeNumber b = -0.000000000033369588611304433_LN;
	EXPECT_EQ(a - b, 0.000000000007321549692449341_LN);
}

TEST(Operations, minus2) {
	LargeNumbers::LargeNumber a = -0.000000000043111226638909624_LN;
	LargeNumbers::LargeNumber b = -0.070507945559576698_LN;
	EXPECT_EQ(a - b, 0.070507945516465471361090376_LN);
}

TEST(Operations, minus3) {
	LargeNumbers::LargeNumber a = -0.000000000080008539491797396_LN;
	LargeNumbers::LargeNumber b = -0.85772119111109629_LN;
	EXPECT_EQ(a - b, 0.857721191031087750508202604_LN);
}

TEST(Operations, minus4) {
	LargeNumbers::LargeNumber a = -0.000000000044887166506362620_LN;
	LargeNumbers::LargeNumber b = -7.9257765216103737_LN;
	EXPECT_EQ(a - b, 7.925776521565486533493637380_LN);
}

TEST(Operations, minus5) {
	LargeNumbers::LargeNumber a = -0.000000000016335221309801085_LN;
	LargeNumbers::LargeNumber b = -4960421970.0980107_LN;
	EXPECT_EQ(a - b, 4960421970.098010699983664778690198915_LN);
}

TEST(Operations, minus6) {
	LargeNumbers::LargeNumber a = -0.095819307603995188_LN;
	LargeNumbers::LargeNumber b = -0.000000000028867117031116327_LN;
	EXPECT_EQ(a - b, -0.095819307575128070968883673_LN);
}

TEST(Operations, minus7) {
	LargeNumbers::LargeNumber a = -0.054048247983605793_LN;
	LargeNumbers::LargeNumber b = -0.093136229519831894_LN;
	EXPECT_EQ(a - b, 0.039087981536226101_LN);
}

TEST(Operations, minus8) {
	LargeNumbers::LargeNumber a = -0.028053888450575875_LN;
	LargeNumbers::LargeNumber b = -0.84258919911160014_LN;
	EXPECT_EQ(a - b, 0.814535310661024265_LN);
}

TEST(Operations, minus9) {
	LargeNumbers::LargeNumber a = -0.076185685839950151_LN;
	LargeNumbers::LargeNumber b = -2.218767054071788_LN;
	EXPECT_EQ(a - b, 2.142581368231837849_LN);
}

TEST(Operations, minus10) {
	LargeNumbers::LargeNumber a = -0.036548777685871346_LN;
	LargeNumbers::LargeNumber b = -7477123810.6218534_LN;
	EXPECT_EQ(a - b, 7477123810.585304622314128654_LN);
}

TEST(Operations, minus11) {
	LargeNumbers::LargeNumber a = -0.69034074467533889_LN;
	LargeNumbers::LargeNumber b = -0.000000000073304860021539904_LN;
	EXPECT_EQ(a - b, -0.690340744602034029978460096_LN);
}

TEST(Operations, minus12) {
	LargeNumbers::LargeNumber a = -0.70746672480858823_LN;
	LargeNumbers::LargeNumber b = -0.077436997911186017_LN;
	EXPECT_EQ(a - b, -0.630029726897402213_LN);
}

TEST(Operations, minus13) {
	LargeNumbers::LargeNumber a = -0.84450599624978263_LN;
	LargeNumbers::LargeNumber b = -0.98431726845236620_LN;
	EXPECT_EQ(a - b, 0.13981127220258357_LN);
}

TEST(Operations, minus14) {
	LargeNumbers::LargeNumber a = -0.5564580868396729_LN;
	LargeNumbers::LargeNumber b = -5.8041223417564320_LN;
	EXPECT_EQ(a - b, 5.2476642549167591_LN);
}

TEST(Operations, minus15) {
	LargeNumbers::LargeNumber a = -0.72304893406176585_LN;
	LargeNumbers::LargeNumber b = -9122071277.7496364_LN;
	EXPECT_EQ(a - b, 9122071277.02658746593823415_LN);
}

TEST(Operations, minus16) {
	LargeNumbers::LargeNumber a = -9.9478713451941512_LN;
	LargeNumbers::LargeNumber b = -0.000000000092445519180558280_LN;
	EXPECT_EQ(a - b, -9.947871345101705680819441720_LN);
}

TEST(Operations, minus17) {
	LargeNumbers::LargeNumber a = -1.7276071299684814_LN;
	LargeNumbers::LargeNumber b = -0.056807761225435595_LN;
	EXPECT_EQ(a - b, -1.670799368743045805_LN);
}

TEST(Operations, minus18) {
	LargeNumbers::LargeNumber a = -2.2082616541263936_LN;
	LargeNumbers::LargeNumber b = -0.35124835037958599_LN;
	EXPECT_EQ(a - b, -1.85701330374680761_LN);
}

TEST(Operations, minus19) {
	LargeNumbers::LargeNumber a = -6.5054386703444965_LN;
	LargeNumbers::LargeNumber b = -7.2677714610650719_LN;
	EXPECT_EQ(a - b, 0.7623327907205754_LN);
}

TEST(Operations, minus20) {
	LargeNumbers::LargeNumber a = -8.8392300195993330_LN;
	LargeNumbers::LargeNumber b = -7599447082.5141933_LN;
	EXPECT_EQ(a - b, 7599447073.6749632804006670_LN);
}

TEST(Operations, minus21) {
	LargeNumbers::LargeNumber a = -6840515649.060211_LN;
	LargeNumbers::LargeNumber b = -0.000000000030401225757660793_LN;
	EXPECT_EQ(a - b, -6840515649.060210999969598774242339207_LN);
}

TEST(Operations, minus22) {
	LargeNumbers::LargeNumber a = -1578196312.3744002_LN;
	LargeNumbers::LargeNumber b = -0.058933514341845108_LN;
	EXPECT_EQ(a - b, -1578196312.315466685658154892_LN);
}

TEST(Operations, minus23) {
	LargeNumbers::LargeNumber a = -5115149214.5814595_LN;
	LargeNumbers::LargeNumber b = -0.16182939119499794_LN;
	EXPECT_EQ(a - b, -5115149214.41963010880500206_LN);
}

TEST(Operations, minus24) {
	LargeNumbers::LargeNumber a = -7979956901.849012_LN;
	LargeNumbers::LargeNumber b = -1.9532071400141017_LN;
	EXPECT_EQ(a - b, -7979956899.8958048599858983_LN);
}

TEST(Operations, minus25) {
	LargeNumbers::LargeNumber a = -9395716874.4807998_LN;
	LargeNumbers::LargeNumber b = -3746900017.2533545_LN;
	EXPECT_EQ(a - b, -5648816857.2274453_LN);
}

TEST(Operations, minus26) {
	LargeNumbers::LargeNumber a = -0.00000000006246299304379105_LN;
	LargeNumbers::LargeNumber b = 0.00000000057305116105123414_LN;
	EXPECT_EQ(a - b, -0.00000000063551415409502519_LN);
}

TEST(Operations, minus27) {
	LargeNumbers::LargeNumber a = -0.000000000039935092577388062_LN;
	LargeNumbers::LargeNumber b = 0.55471041788772186_LN;
	EXPECT_EQ(a - b, -0.554710417927656952577388062_LN);
}

TEST(Operations, minus28) {
	LargeNumbers::LargeNumber a = -0.000000000028836977158565353_LN;
	LargeNumbers::LargeNumber b = 2.7205066127291832_LN;
	EXPECT_EQ(a - b, -2.720506612758020177158565353_LN);
}

TEST(Operations, minus29) {
	LargeNumbers::LargeNumber a = -0.000000000099986960759988173_LN;
	LargeNumbers::LargeNumber b = 29.989563349826540_LN;
	EXPECT_EQ(a - b, -29.989563349926526960759988173_LN);
}

TEST(Operations, minus30) {
	LargeNumbers::LargeNumber a = -0.00000000001743010855651358_LN;
	LargeNumbers::LargeNumber b = 89005835203.288761_LN;
	EXPECT_EQ(a - b, -89005835203.28876100001743010855651358_LN);
}

TEST(Operations, minus31) {
	LargeNumbers::LargeNumber a = -0.012449754168597717_LN;
	LargeNumbers::LargeNumber b = 0.00000000083032906568545396_LN;
	EXPECT_EQ(a - b, -0.01244975499892678268545396_LN);
}

TEST(Operations, minus32) {
	LargeNumbers::LargeNumber a = -0.064878071931532019_LN;
	LargeNumbers::LargeNumber b = 0.20274342531305570_LN;
	EXPECT_EQ(a - b, -0.267621497244587719_LN);
}

TEST(Operations, minus33) {
	LargeNumbers::LargeNumber a = -0.04924193304139407_LN;
	LargeNumbers::LargeNumber b = 3.0898028171608339_LN;
	EXPECT_EQ(a - b, -3.13904475020222797_LN);
}

TEST(Operations, minus34) {
	LargeNumbers::LargeNumber a = -0.092926425556942918_LN;
	LargeNumbers::LargeNumber b = 25.512328400378602_LN;
	EXPECT_EQ(a - b, -25.605254825935544918_LN);
}

TEST(Operations, minus35) {
	LargeNumbers::LargeNumber a = -0.073163272106596821_LN;
	LargeNumbers::LargeNumber b = 19228293161.597621_LN;
	EXPECT_EQ(a - b, -19228293161.670784272106596821_LN);
}

TEST(Operations, minus36) {
	LargeNumbers::LargeNumber a = -0.97392621947296940_LN;
	LargeNumbers::LargeNumber b = 0.00000000078906502348106743_LN;
	EXPECT_EQ(a - b, -0.97392622026203442348106743_LN);
}

TEST(Operations, minus37) {
	LargeNumbers::LargeNumber a = -0.37992236473519058_LN;
	LargeNumbers::LargeNumber b = 0.25130029827334122_LN;
	EXPECT_EQ(a - b, -0.63122266300853180_LN);
}

TEST(Operations, minus38) {
	LargeNumbers::LargeNumber a = -0.52005296206047665_LN;
	LargeNumbers::LargeNumber b = 1.8973120242312175_LN;
	EXPECT_EQ(a - b, -2.41736498629169415_LN);
}

TEST(Operations, minus39) {
	LargeNumbers::LargeNumber a = -0.54052922841955965_LN;
	LargeNumbers::LargeNumber b = 44.14625525658643_LN;
	EXPECT_EQ(a - b, -44.68678448500598965_LN);
}

TEST(Operations, minus40) {
	LargeNumbers::LargeNumber a = -0.21040721751214285_LN;
	LargeNumbers::LargeNumber b = 85151738565.17881_LN;
	EXPECT_EQ(a - b, -85151738565.38921721751214285_LN);
}

TEST(Operations, minus41) {
	LargeNumbers::LargeNumber a = -3.1422168038107020_LN;
	LargeNumbers::LargeNumber b = 0.00000000073610913266351282_LN;
	EXPECT_EQ(a - b, -3.14221680454681113266351282_LN);
}

TEST(Operations, minus42) {
	LargeNumbers::LargeNumber a = -9.1036533881737187_LN;
	LargeNumbers::LargeNumber b = 0.71885881230649902_LN;
	EXPECT_EQ(a - b, -9.82251220048021772_LN);
}

TEST(Operations, minus43) {
	LargeNumbers::LargeNumber a = -5.3742803692226610_LN;
	LargeNumbers::LargeNumber b = 8.448989659490081_LN;
	EXPECT_EQ(a - b, -13.8232700287127420_LN);
}

TEST(Operations, minus44) {
	LargeNumbers::LargeNumber a = -5.6159903016331436_LN;
	LargeNumbers::LargeNumber b = 18.605053053100014_LN;
	EXPECT_EQ(a - b, -24.2210433547331576_LN);
}

TEST(Operations, minus45) {
	LargeNumbers::LargeNumber a = -4.4487230494146461_LN;
	LargeNumbers::LargeNumber b = 66830610846.058204_LN;
	EXPECT_EQ(a - b, -66830610850.5069270494146461_LN);
}

TEST(Operations, minus46) {
	LargeNumbers::LargeNumber a = -4883744850.701199_LN;
	LargeNumbers::LargeNumber b = 0.00000000043851226709198280_LN;
	EXPECT_EQ(a - b, -4883744850.70119900043851226709198280_LN);
}

TEST(Operations, minus47) {
	LargeNumbers::LargeNumber a = -9737218074.4803015_LN;
	LargeNumbers::LargeNumber b = 0.62569717471065427_LN;
	EXPECT_EQ(a - b, -9737218075.10599867471065427_LN);
}

TEST(Operations, minus48) {
	LargeNumbers::LargeNumber a = -8621468532.7775069_LN;
	LargeNumbers::LargeNumber b = 8.5911213617823143_LN;
	EXPECT_EQ(a - b, -8621468541.3686282617823143_LN);
}

TEST(Operations, minus49) {
	LargeNumbers::LargeNumber a = -9907496730.6537755_LN;
	LargeNumbers::LargeNumber b = 42.425549813535327_LN;
	EXPECT_EQ(a - b, -9907496773.079325313535327_LN);
}

TEST(Operations, minus50) {
	LargeNumbers::LargeNumber a = -7301453994.4160508_LN;
	LargeNumbers::LargeNumber b = 43726041995.092633_LN;
	EXPECT_EQ(a - b, -51027495989.5086838_LN);
}

TEST(Operations, minus51) {
	LargeNumbers::LargeNumber a = 0.00000000060149328886258666_LN;
	LargeNumbers::LargeNumber b = -0.000000000091616117794041825_LN;
	EXPECT_EQ(a - b, 0.000000000693109406656628485_LN);
}

TEST(Operations, minus52) {
	LargeNumbers::LargeNumber a = 0.000000000554567818758720_LN;
	LargeNumbers::LargeNumber b = -0.072305655087266688_LN;
	EXPECT_EQ(a - b, 0.072305655641834506758720_LN);
}

TEST(Operations, minus53) {
	LargeNumbers::LargeNumber a = 0.00000000030368652435407758_LN;
	LargeNumbers::LargeNumber b = -0.86561851321050841_LN;
	EXPECT_EQ(a - b, 0.86561851351419493435407758_LN);
}

TEST(Operations, minus54) {
	LargeNumbers::LargeNumber a = 0.00000000018118892716242594_LN;
	LargeNumbers::LargeNumber b = -6.1116484072297946_LN;
	EXPECT_EQ(a - b, 6.11164840741098352716242594_LN);
}

TEST(Operations, minus55) {
	LargeNumbers::LargeNumber a = 0.00000000011938532324160647_LN;
	LargeNumbers::LargeNumber b = -7452548747.5341052_LN;
	EXPECT_EQ(a - b, 7452548747.53410520011938532324160647_LN);
}

TEST(Operations, minus56) {
	LargeNumbers::LargeNumber a = 0.26238345170321186_LN;
	LargeNumbers::LargeNumber b = -0.000000000052256348393874358_LN;
	EXPECT_EQ(a - b, 0.262383451755468208393874358_LN);
}

TEST(Operations, minus57) {
	LargeNumbers::LargeNumber a = 0.12353051807411640_LN;
	LargeNumbers::LargeNumber b = -0.078908068479735254_LN;
	EXPECT_EQ(a - b, 0.202438586553851654_LN);
}

TEST(Operations, minus58) {
	LargeNumbers::LargeNumber a = 0.56414379163574215_LN;
	LargeNumbers::LargeNumber b = -0.25729933484151365_LN;
	EXPECT_EQ(a - b, 0.82144312647725580_LN);
}

TEST(Operations, minus59) {
	LargeNumbers::LargeNumber a = 0.69704251860282006_LN;
	LargeNumbers::LargeNumber b = -9.2358828698542118_LN;
	EXPECT_EQ(a - b, 9.93292538845703186_LN);
}

TEST(Operations, minus60) {
	LargeNumbers::LargeNumber a = 0.47254637714370096_LN;
	LargeNumbers::LargeNumber b = -5463212390.8087574_LN;
	EXPECT_EQ(a - b, 5463212391.28130377714370096_LN);
}

TEST(Operations, minus61) {
	LargeNumbers::LargeNumber a = 2.118916307748052_LN;
	LargeNumbers::LargeNumber b = -0.000000000044313630282512266_LN;
	EXPECT_EQ(a - b, 2.118916307792365630282512266_LN);
}

TEST(Operations, minus62) {
	LargeNumbers::LargeNumber a = 9.9644956694724766_LN;
	LargeNumbers::LargeNumber b = -0.057500765734933310_LN;
	EXPECT_EQ(a - b, 10.021996435207409910_LN);
}

TEST(Operations, minus63) {
	LargeNumbers::LargeNumber a = 5.0375664381735684_LN;
	LargeNumbers::LargeNumber b = -0.56014411503038660_LN;
	EXPECT_EQ(a - b, 5.59771055320395500_LN);
}

TEST(Operations, minus64) {
	LargeNumbers::LargeNumber a = 4.4800514426039610_LN;
	LargeNumbers::LargeNumber b = -4.2754356811322756_LN;
	EXPECT_EQ(a - b, 8.7554871237362366_LN);
}

TEST(Operations, minus65) {
	LargeNumbers::LargeNumber a = 8.834308128245895_LN;
	LargeNumbers::LargeNumber b = -1547424031.3941011_LN;
	EXPECT_EQ(a - b, 1547424040.228409228245895_LN);
}

TEST(Operations, minus66) {
	LargeNumbers::LargeNumber a = 56.428214305873043_LN;
	LargeNumbers::LargeNumber b = -0.000000000025697975037370035_LN;
	EXPECT_EQ(a - b, 56.428214305898740975037370035_LN);
}

TEST(Operations, minus67) {
	LargeNumbers::LargeNumber a = 67.871803677674262_LN;
	LargeNumbers::LargeNumber b = -0.078656615984642372_LN;
	EXPECT_EQ(a - b, 67.950460293658904372_LN);
}

TEST(Operations, minus68) {
	LargeNumbers::LargeNumber a = 68.32955342203028_LN;
	LargeNumbers::LargeNumber b = -0.17460369836023753_LN;
	EXPECT_EQ(a - b, 68.50415712039051753_LN);
}

TEST(Operations, minus69) {
	LargeNumbers::LargeNumber a = 89.756637685716118_LN;
	LargeNumbers::LargeNumber b = -9.6594869411134509_LN;
	EXPECT_EQ(a - b, 99.4161246268295689_LN);
}

TEST(Operations, minus70) {
	LargeNumbers::LargeNumber a = 55.6415735162873_LN;
	LargeNumbers::LargeNumber b = -3237650232.3469300_LN;
	EXPECT_EQ(a - b, 3237650287.9885035162873_LN);
}

TEST(Operations, minus71) {
	LargeNumbers::LargeNumber a = 14413214881.926854_LN;
	LargeNumbers::LargeNumber b = -0.000000000035234173236094633_LN;
	EXPECT_EQ(a - b, 14413214881.926854000035234173236094633_LN);
}

TEST(Operations, minus72) {
	LargeNumbers::LargeNumber a = 15202162416.403425_LN;
	LargeNumbers::LargeNumber b = -0.021894708372036583_LN;
	EXPECT_EQ(a - b, 15202162416.425319708372036583_LN);
}

TEST(Operations, minus73) {
	LargeNumbers::LargeNumber a = 87106286439.754511_LN;
	LargeNumbers::LargeNumber b = -0.70213878517481316_LN;
	EXPECT_EQ(a - b, 87106286440.45664978517481316_LN);
}

TEST(Operations, minus74) {
	LargeNumbers::LargeNumber a = 18699641199.498609_LN;
	LargeNumbers::LargeNumber b = -2.3227202091149524_LN;
	EXPECT_EQ(a - b, 18699641201.8213292091149524_LN);
}

TEST(Operations, minus75) {
	LargeNumbers::LargeNumber a = 83798111697.958333_LN;
	LargeNumbers::LargeNumber b = -4401220371.1510154_LN;
	EXPECT_EQ(a - b, 88199332069.1093484_LN);
}

TEST(Operations, minus76) {
	LargeNumbers::LargeNumber a = 0.00000000018339586035765963_LN;
	LargeNumbers::LargeNumber b = 0.00000000083420126057101881_LN;
	EXPECT_EQ(a - b, -0.00000000065080540021335918_LN);
}

TEST(Operations, minus77) {
	LargeNumbers::LargeNumber a = 0.00000000013221898130390175_LN;
	LargeNumbers::LargeNumber b = 0.2866132087981388_LN;
	EXPECT_EQ(a - b, -0.28661320866591981869609825_LN);
}

TEST(Operations, minus78) {
	LargeNumbers::LargeNumber a = 0.00000000029683195188344298_LN;
	LargeNumbers::LargeNumber b = 4.001811028897473_LN;
	EXPECT_EQ(a - b, -4.00181102860064104811655702_LN);
}

TEST(Operations, minus79) {
	LargeNumbers::LargeNumber a = 0.00000000072767021393853781_LN;
	LargeNumbers::LargeNumber b = 93.951351224132772_LN;
	EXPECT_EQ(a - b, -93.95135122340510178606146219_LN);
}

TEST(Operations, minus80) {
	LargeNumbers::LargeNumber a = 0.00000000077091278383477930_LN;
	LargeNumbers::LargeNumber b = 17654463719.003821_LN;
	EXPECT_EQ(a - b, -17654463719.00382099922908721616522070_LN);
}

TEST(Operations, minus81) {
	LargeNumbers::LargeNumber a = 0.69227143509413636_LN;
	LargeNumbers::LargeNumber b = 0.00000000026920200923196074_LN;
	EXPECT_EQ(a - b, 0.69227143482493435076803926_LN);
}

TEST(Operations, minus82) {
	LargeNumbers::LargeNumber a = 0.30788883671311594_LN;
	LargeNumbers::LargeNumber b = 0.5981811989774883_LN;
	EXPECT_EQ(a - b, -0.29029236226437236_LN);
}

TEST(Operations, minus83) {
	LargeNumbers::LargeNumber a = 0.74100812420163818_LN;
	LargeNumbers::LargeNumber b = 3.2957413152819364_LN;
	EXPECT_EQ(a - b, -2.55473319108029822_LN);
}

TEST(Operations, minus84) {
	LargeNumbers::LargeNumber a = 0.51031168064022015_LN;
	LargeNumbers::LargeNumber b = 65.477666792066314_LN;
	EXPECT_EQ(a - b, -64.96735511142609385_LN);
}

TEST(Operations, minus85) {
	LargeNumbers::LargeNumber a = 0.2383687027234400_LN;
	LargeNumbers::LargeNumber b = 67298048453.62498_LN;
	EXPECT_EQ(a - b, -67298048453.3866112972765600_LN);
}

TEST(Operations, minus86) {
	LargeNumbers::LargeNumber a = 9.9067247428782178_LN;
	LargeNumbers::LargeNumber b = 0.00000000074446254230843112_LN;
	EXPECT_EQ(a - b, 9.90672474213375525769156888_LN);
}

TEST(Operations, minus87) {
	LargeNumbers::LargeNumber a = 4.515753642402623_LN;
	LargeNumbers::LargeNumber b = 0.96070079778961870_LN;
	EXPECT_EQ(a - b, 3.55505284461300430_LN);
}

TEST(Operations, minus88) {
	LargeNumbers::LargeNumber a = 5.0021667484302338_LN;
	LargeNumbers::LargeNumber b = 3.1653046628631903_LN;
	EXPECT_EQ(a - b, 1.8368620855670435_LN);
}

TEST(Operations, minus89) {
	LargeNumbers::LargeNumber a = 3.6554992433548120_LN;
	LargeNumbers::LargeNumber b = 70.564418664810604_LN;
	EXPECT_EQ(a - b, -66.9089194214557920_LN);
}

TEST(Operations, minus90) {
	LargeNumbers::LargeNumber a = 9.2813197325914498_LN;
	LargeNumbers::LargeNumber b = 17970712741.474738_LN;
	EXPECT_EQ(a - b, -17970712732.1934182674085502_LN);
}

TEST(Operations, minus91) {
	LargeNumbers::LargeNumber a = 30.744971484653110_LN;
	LargeNumbers::LargeNumber b = 0.00000000071306672230536596_LN;
	EXPECT_EQ(a - b, 30.74497148394004327769463404_LN);
}

TEST(Operations, minus92) {
	LargeNumbers::LargeNumber a = 87.262755701996923_LN;
	LargeNumbers::LargeNumber b = 0.79338318643397690_LN;
	EXPECT_EQ(a - b, 86.46937251556294610_LN);
}

TEST(Operations, minus93) {
	LargeNumbers::LargeNumber a = 39.68313279508543_LN;
	LargeNumbers::LargeNumber b = 1.7736077621941626_LN;
	EXPECT_EQ(a - b, 37.9095250328912674_LN);
}

TEST(Operations, minus94) {
	LargeNumbers::LargeNumber a = 39.719570896756916_LN;
	LargeNumbers::LargeNumber b = 85.938929008539899_LN;
	EXPECT_EQ(a - b, -46.219358111782983_LN);
}

TEST(Operations, minus95) {
	LargeNumbers::LargeNumber a = 72.3942381772590_LN;
	LargeNumbers::LargeNumber b = 42297970442.060197_LN;
	EXPECT_EQ(a - b, -42297970369.6659588227410_LN);
}

TEST(Operations, minus96) {
	LargeNumbers::LargeNumber a = 77518679647.436789_LN;
	LargeNumbers::LargeNumber b = 0.00000000023341605159645392_LN;
	EXPECT_EQ(a - b, 77518679647.43678899976658394840354608_LN);
}

TEST(Operations, minus97) {
	LargeNumbers::LargeNumber a = 36047952521.67809_LN;
	LargeNumbers::LargeNumber b = 0.41677264057449541_LN;
	EXPECT_EQ(a - b, 36047952521.26131735942550459_LN);
}

TEST(Operations, minus98) {
	LargeNumbers::LargeNumber a = 17249351669.704325_LN;
	LargeNumbers::LargeNumber b = 9.2613110799851731_LN;
	EXPECT_EQ(a - b, 17249351660.4430139200148269_LN);
}

TEST(Operations, minus99) {
	LargeNumbers::LargeNumber a = 49659677030.215690_LN;
	LargeNumbers::LargeNumber b = 13.683296265531172_LN;
	EXPECT_EQ(a - b, 49659677016.532393734468828_LN);
}

TEST(Operations, minus100) {
	LargeNumbers::LargeNumber a = 91346078572.45385_LN;
	LargeNumbers::LargeNumber b = 79789420920.669622_LN;
	EXPECT_EQ(a - b, 11556657651.784228_LN);
}

TEST(Operations, multiply1) {
	LargeNumbers::LargeNumber a = -0.000000000026048038918855092_LN;
	LargeNumbers::LargeNumber b = -0.000000000033369588611304433_LN;
	EXPECT_EQ(a * b, 0.000000000000000000000869212342853441513794741024222836_LN);
}

TEST(Operations, multiply2) {
	LargeNumbers::LargeNumber a = -0.000000000043111226638909624_LN;
	LargeNumbers::LargeNumber b = -0.070507945559576698_LN;
	EXPECT_EQ(a * b, 0.000000000003039684020862812478293365718341552_LN);
}

TEST(Operations, multiply3) {
	LargeNumbers::LargeNumber a = -0.000000000080008539491797396_LN;
	LargeNumbers::LargeNumber b = -0.85772119111109629_LN;
	EXPECT_EQ(a * b, 0.00000000006862501979196364913367581212726084_LN);
}

TEST(Operations, multiply4) {
	LargeNumbers::LargeNumber a = -0.000000000044887166506362620_LN;
	LargeNumbers::LargeNumber b = -7.9257765216103737_LN;
	EXPECT_EQ(a * b, 0.0000000003557656504177443966110496459110940_LN);
}

TEST(Operations, multiply5) {
	LargeNumbers::LargeNumber a = -0.000000000016335221309801085_LN;
	LargeNumbers::LargeNumber b = -4960421970.0980107_LN;
	EXPECT_EQ(a * b, 0.0810295906715505048390659712016095_LN);
}

TEST(Operations, multiply6) {
	LargeNumbers::LargeNumber a = -0.095819307603995188_LN;
	LargeNumbers::LargeNumber b = -0.000000000028867117031116327_LN;
	EXPECT_EQ(a * b, 0.000000000002766027166445063667752496776234476_LN);
}

TEST(Operations, multiply7) {
	LargeNumbers::LargeNumber a = -0.054048247983605793_LN;
	LargeNumbers::LargeNumber b = -0.093136229519831894_LN;
	EXPECT_EQ(a * b, 0.005033850029345900499274077324561942_LN);
}

TEST(Operations, multiply8) {
	LargeNumbers::LargeNumber a = -0.028053888450575875_LN;
	LargeNumbers::LargeNumber b = -0.84258919911160014_LN;
	EXPECT_EQ(a * b, 0.02363790340153689548360277573062250_LN);
}

TEST(Operations, multiply9) {
	LargeNumbers::LargeNumber a = -0.076185685839950151_LN;
	LargeNumbers::LargeNumber b = -2.218767054071788_LN;
	EXPECT_EQ(a * b, 0.169038289733544930056203495439988_LN);
}

TEST(Operations, multiply10) {
	LargeNumbers::LargeNumber a = -0.036548777685871346_LN;
	LargeNumbers::LargeNumber b = -7477123810.6218534_LN;
	EXPECT_EQ(a * b, 273279735.8841533234431514884726764_LN);
}

TEST(Operations, multiply11) {
	LargeNumbers::LargeNumber a = -0.69034074467533889_LN;
	LargeNumbers::LargeNumber b = -0.000000000073304860021539904_LN;
	EXPECT_EQ(a * b, 0.00000000005060533165559133615160071085806656_LN);
}

TEST(Operations, multiply12) {
	LargeNumbers::LargeNumber a = -0.70746672480858823_LN;
	LargeNumbers::LargeNumber b = -0.077436997911186017_LN;
	EXPECT_EQ(a * b, 0.05478409929123625947911790668677991_LN);
}

TEST(Operations, multiply13) {
	LargeNumbers::LargeNumber a = -0.84450599624978263_LN;
	LargeNumbers::LargeNumber b = -0.98431726845236620_LN;
	EXPECT_EQ(a * b, 0.8312618354202302523561832591591060_LN);
}

TEST(Operations, multiply14) {
	LargeNumbers::LargeNumber a = -0.5564580868396729_LN;
	LargeNumbers::LargeNumber b = -5.8041223417564320_LN;
	EXPECT_EQ(a * b, 3.22975081407718626756656635109280_LN);
}

TEST(Operations, multiply15) {
	LargeNumbers::LargeNumber a = -0.72304893406176585_LN;
	LargeNumbers::LargeNumber b = -9122071277.7496364_LN;
	EXPECT_EQ(a * b, 6595703913.812325004138389979436940_LN);
}

TEST(Operations, multiply16) {
	LargeNumbers::LargeNumber a = -9.9478713451941512_LN;
	LargeNumbers::LargeNumber b = -0.000000000092445519180558280_LN;
	EXPECT_EQ(a * b, 0.0000000009196361312478720031980150067319360_LN);
}

TEST(Operations, multiply17) {
	LargeNumbers::LargeNumber a = -1.7276071299684814_LN;
	LargeNumbers::LargeNumber b = -0.056807761225435595_LN;
	EXPECT_EQ(a * b, 0.0981414933306095701748323356554330_LN);
}

TEST(Operations, multiply18) {
	LargeNumbers::LargeNumber a = -2.2082616541263936_LN;
	LargeNumbers::LargeNumber b = -0.35124835037958599_LN;
	EXPECT_EQ(a * b, 0.775648263218391629611164699785664_LN);
}

TEST(Operations, multiply19) {
	LargeNumbers::LargeNumber a = -6.5054386703444965_LN;
	LargeNumbers::LargeNumber b = -7.2677714610650719_LN;
	EXPECT_EQ(a * b, 47.28004151003883995572717654179835_LN);
}

TEST(Operations, multiply20) {
	LargeNumbers::LargeNumber a = -8.8392300195993330_LN;
	LargeNumbers::LargeNumber b = -7599447082.5141933_LN;
	EXPECT_EQ(a * b, 67173260784.11602682923315171306890_LN);
}

TEST(Operations, multiply21) {
	LargeNumbers::LargeNumber a = -6840515649.060211_LN;
	LargeNumbers::LargeNumber b = -0.000000000030401225757660793_LN;
	EXPECT_EQ(a * b, 0.207960060545891024354344171007323_LN);
}

TEST(Operations, multiply22) {
	LargeNumbers::LargeNumber a = -1578196312.3744002_LN;
	LargeNumbers::LargeNumber b = -0.058933514341845108_LN;
	EXPECT_EQ(a * b, 93008655.0095637762771313728042216_LN);
}

TEST(Operations, multiply23) {
	LargeNumbers::LargeNumber a = -5115149214.5814595_LN;
	LargeNumbers::LargeNumber b = -0.16182939119499794_LN;
	EXPECT_EQ(a * b, 827781483.267289470412167064693430_LN);
}

TEST(Operations, multiply24) {
	LargeNumbers::LargeNumber a = -7979956901.849012_LN;
	LargeNumbers::LargeNumber b = -1.9532071400141017_LN;
	EXPECT_EQ(a * b, 15586508797.6963003985884842125204_LN);
}

TEST(Operations, multiply25) {
	LargeNumbers::LargeNumber a = -9395716874.4807998_LN;
	LargeNumbers::LargeNumber b = -3746900017.2533545_LN;
	EXPECT_EQ(a * b, 35204811719099742787.66924239292910_LN);
}

TEST(Operations, multiply26) {
	LargeNumbers::LargeNumber a = -0.00000000006246299304379105_LN;
	LargeNumbers::LargeNumber b = 0.00000000057305116105123414_LN;
	EXPECT_EQ(a * b, -0.0000000000000000000357944906864796227743336667864470_LN);
}

TEST(Operations, multiply27) {
	LargeNumbers::LargeNumber a = -0.000000000039935092577388062_LN;
	LargeNumbers::LargeNumber b = 0.55471041788772186_LN;
	EXPECT_EQ(a * b, -0.00000000002215241189198779130491297834043532_LN);
}

TEST(Operations, multiply28) {
	LargeNumbers::LargeNumber a = -0.000000000028836977158565353_LN;
	LargeNumbers::LargeNumber b = 2.7205066127291832_LN;
	EXPECT_EQ(a * b, -0.0000000000784511870509974545534236275096696_LN);
}

TEST(Operations, multiply29) {
	LargeNumbers::LargeNumber a = -0.000000000099986960759988173_LN;
	LargeNumbers::LargeNumber b = 29.989563349826540_LN;
	EXPECT_EQ(a * b, -0.000000002998565293868285721220832001511420_LN);
}

TEST(Operations, multiply30) {
	LargeNumbers::LargeNumber a = -0.00000000001743010855651358_LN;
	LargeNumbers::LargeNumber b = 89005835203.288761_LN;
	EXPECT_EQ(a * b, -1.55138136975648104928844415787438_LN);
}

TEST(Operations, multiply31) {
	LargeNumbers::LargeNumber a = -0.012449754168597717_LN;
	LargeNumbers::LargeNumber b = 0.00000000083032906568545396_LN;
	EXPECT_EQ(a * b, -0.00000000001033739274682532801363641776460932_LN);
}

TEST(Operations, multiply32) {
	LargeNumbers::LargeNumber a = -0.064878071931532019_LN;
	LargeNumbers::LargeNumber b = 0.20274342531305570_LN;
	EXPECT_EQ(a * b, -0.01315360253110561725240118328045830_LN);
}

TEST(Operations, multiply33) {
	LargeNumbers::LargeNumber a = -0.04924193304139407_LN;
	LargeNumbers::LargeNumber b = 3.0898028171608339_LN;
	EXPECT_EQ(a * b, -0.152147863433744547227681459714973_LN);
}

TEST(Operations, multiply34) {
	LargeNumbers::LargeNumber a = -0.092926425556942918_LN;
	LargeNumbers::LargeNumber b = 25.512328400378602_LN;
	EXPECT_EQ(a * b, -2.370769485882062754638980902640636_LN);
}

TEST(Operations, multiply35) {
	LargeNumbers::LargeNumber a = -0.073163272106596821_LN;
	LargeNumbers::LargeNumber b = 19228293161.597621_LN;
	EXPECT_EQ(a * b, -1406804844.727381624058257679762841_LN);
}

TEST(Operations, multiply36) {
	LargeNumbers::LargeNumber a = -0.97392621947296940_LN;
	LargeNumbers::LargeNumber b = 0.00000000078906502348106743_LN;
	EXPECT_EQ(a * b, -0.0000000007684911152372658309007735437266420_LN);
}

TEST(Operations, multiply37) {
	LargeNumbers::LargeNumber a = -0.37992236473519058_LN;
	LargeNumbers::LargeNumber b = 0.25130029827334122_LN;
	EXPECT_EQ(a * b, -0.0954746035786665265227948100697076_LN);
}

TEST(Operations, multiply38) {
	LargeNumbers::LargeNumber a = -0.52005296206047665_LN;
	LargeNumbers::LargeNumber b = 1.8973120242312175_LN;
	EXPECT_EQ(a * b, -0.986702738154403508971457859821375_LN);
}

TEST(Operations, multiply39) {
	LargeNumbers::LargeNumber a = -0.54052922841955965_LN;
	LargeNumbers::LargeNumber b = 44.14625525658643_LN;
	EXPECT_EQ(a * b, -23.8623412914555923274401027655495_LN);
}

TEST(Operations, multiply40) {
	LargeNumbers::LargeNumber a = -0.21040721751214285_LN;
	LargeNumbers::LargeNumber b = 85151738565.17881_LN;
	EXPECT_EQ(a * b, -17916540377.8207005906973565130085_LN);
}

TEST(Operations, multiply41) {
	LargeNumbers::LargeNumber a = -3.1422168038107020_LN;
	LargeNumbers::LargeNumber b = 0.00000000073610913266351282_LN;
	EXPECT_EQ(a * b, -0.000000002313014486093811274078489630199640_LN);
}

TEST(Operations, multiply42) {
	LargeNumbers::LargeNumber a = -9.1036533881737187_LN;
	LargeNumbers::LargeNumber b = 0.71885881230649902_LN;
	EXPECT_EQ(a * b, -6.544241462272595116199108771305674_LN);
}

TEST(Operations, multiply43) {
	LargeNumbers::LargeNumber a = -5.3742803692226610_LN;
	LargeNumbers::LargeNumber b = 8.448989659490081_LN;
	EXPECT_EQ(a * b, -45.4072392667627973550916099255410_LN);
}

TEST(Operations, multiply44) {
	LargeNumbers::LargeNumber a = -5.6159903016331436_LN;
	LargeNumbers::LargeNumber b = 18.605053053100014_LN;
	EXPECT_EQ(a * b, -104.4857975075797868751949480240104_LN);
}

TEST(Operations, multiply45) {
	LargeNumbers::LargeNumber a = -4.4487230494146461_LN;
	LargeNumbers::LargeNumber b = 66830610846.058204_LN;
	EXPECT_EQ(a * b, -297310878877.3195750782797306616044_LN);
}

TEST(Operations, multiply46) {
	LargeNumbers::LargeNumber a = -4883744850.701199_LN;
	LargeNumbers::LargeNumber b = 0.00000000043851226709198280_LN;
	EXPECT_EQ(a * b, -2.14158202637977983896121124737720_LN);
}

TEST(Operations, multiply47) {
	LargeNumbers::LargeNumber a = -9737218074.4803015_LN;
	LargeNumbers::LargeNumber b = 0.62569717471065427_LN;
	EXPECT_EQ(a * b, -6092549838.743841769768565291862405_LN);
}

TEST(Operations, multiply48) {
	LargeNumbers::LargeNumber a = -8621468532.7775069_LN;
	LargeNumbers::LargeNumber b = 8.5911213617823143_LN;
	EXPECT_EQ(a * b, -74068082481.87886630910675326621867_LN);
}

TEST(Operations, multiply49) {
	LargeNumbers::LargeNumber a = -9907496730.6537755_LN;
	LargeNumbers::LargeNumber b = 42.425549813535327_LN;
	EXPECT_EQ(a * b, -420330996073.7901470340996751770885_LN);
}

TEST(Operations, multiply50) {
	LargeNumbers::LargeNumber a = -7301453994.4160508_LN;
	LargeNumbers::LargeNumber b = 43726041995.092633_LN;
	EXPECT_EQ(a * b, -319263683985073088370.7180880337564_LN);
}

TEST(Operations, multiply51) {
	LargeNumbers::LargeNumber a = 0.00000000060149328886258666_LN;
	LargeNumbers::LargeNumber b = -0.000000000091616117794041825_LN;
	EXPECT_EQ(a * b, -0.00000000000000000005510648000476036517889970572705450_LN);
}

TEST(Operations, multiply52) {
	LargeNumbers::LargeNumber a = 0.000000000554567818758720_LN;
	LargeNumbers::LargeNumber b = -0.072305655087266688_LN;
	EXPECT_EQ(a * b, -0.000000000040098389425665833376057765519360_LN);
}

TEST(Operations, multiply53) {
	LargeNumbers::LargeNumber a = 0.00000000030368652435407758_LN;
	LargeNumbers::LargeNumber b = -0.86561851321050841_LN;
	EXPECT_EQ(a * b, -0.0000000002628766776934434876664416883824478_LN);
}

TEST(Operations, multiply54) {
	LargeNumbers::LargeNumber a = 0.00000000018118892716242594_LN;
	LargeNumbers::LargeNumber b = -6.1116484072297946_LN;
	EXPECT_EQ(a * b, -0.000000001107363018099915763498196383911924_LN);
}

TEST(Operations, multiply55) {
	LargeNumbers::LargeNumber a = 0.00000000011938532324160647_LN;
	LargeNumbers::LargeNumber b = -7452548747.5341052_LN;
	EXPECT_EQ(a * b, -0.889724941198188598212615961980644_LN);
}

TEST(Operations, multiply56) {
	LargeNumbers::LargeNumber a = 0.26238345170321186_LN;
	LargeNumbers::LargeNumber b = -0.000000000052256348393874358_LN;
	EXPECT_EQ(a * b, -0.00000000001371120106499034526331385789548588_LN);
}

TEST(Operations, multiply57) {
	LargeNumbers::LargeNumber a = 0.12353051807411640_LN;
	LargeNumbers::LargeNumber b = -0.078908068479735254_LN;
	EXPECT_EQ(a * b, -0.00974755457952955039615302197956560_LN);
}

TEST(Operations, multiply58) {
	LargeNumbers::LargeNumber a = 0.56414379163574215_LN;
	LargeNumbers::LargeNumber b = -0.25729933484151365_LN;
	EXPECT_EQ(a * b, -0.1451538223428459270149609471053475_LN);
}

TEST(Operations, multiply59) {
	LargeNumbers::LargeNumber a = 0.69704251860282006_LN;
	LargeNumbers::LargeNumber b = -9.2358828698542118_LN;
	EXPECT_EQ(a * b, -6.437803057123821551735800548528708_LN);
}

TEST(Operations, multiply60) {
	LargeNumbers::LargeNumber a = 0.47254637714370096_LN;
	LargeNumbers::LargeNumber b = -5463212390.8087574_LN;
	EXPECT_EQ(a * b, -2581621222.843255274485053414787104_LN);
}

TEST(Operations, multiply61) {
	LargeNumbers::LargeNumber a = 2.118916307748052_LN;
	LargeNumbers::LargeNumber b = -0.000000000044313630282512266_LN;
	EXPECT_EQ(a * b, -0.000000000093896873861133157115015527605832_LN);
}

TEST(Operations, multiply62) {
	LargeNumbers::LargeNumber a = 9.9644956694724766_LN;
	LargeNumbers::LargeNumber b = -0.057500765734933310_LN;
	EXPECT_EQ(a * b, -0.5729661311570943357906721815355460_LN);
}

TEST(Operations, multiply63) {
	LargeNumbers::LargeNumber a = 5.0375664381735684_LN;
	LargeNumbers::LargeNumber b = -0.56014411503038660_LN;
	EXPECT_EQ(a * b, -2.821763194417510204140170953543440_LN);
}

TEST(Operations, multiply64) {
	LargeNumbers::LargeNumber a = 4.4800514426039610_LN;
	LargeNumbers::LargeNumber b = -4.2754356811322756_LN;
	EXPECT_EQ(a * b, -19.15417179101709990393374550365160_LN);
}

TEST(Operations, multiply65) {
	LargeNumbers::LargeNumber a = 8.834308128245895_LN;
	LargeNumbers::LargeNumber b = -1547424031.3941011_LN;
	EXPECT_EQ(a * b, -13670420698.3879383511833932899845_LN);
}

TEST(Operations, multiply66) {
	LargeNumbers::LargeNumber a = 56.428214305873043_LN;
	LargeNumbers::LargeNumber b = -0.000000000025697975037370035_LN;
	EXPECT_EQ(a * b, -0.000000001450090842635692155785901322466505_LN);
}

TEST(Operations, multiply67) {
	LargeNumbers::LargeNumber a = 67.871803677674262_LN;
	LargeNumbers::LargeNumber b = -0.078656615984642372_LN;
	EXPECT_EQ(a * b, -5.338566398059862286646638779029464_LN);
}

TEST(Operations, multiply68) {
	LargeNumbers::LargeNumber a = 68.32955342203028_LN;
	LargeNumbers::LargeNumber b = -0.17460369836023753_LN;
	EXPECT_EQ(a * b, -11.9305927347899111067306756524084_LN);
}

TEST(Operations, multiply69) {
	LargeNumbers::LargeNumber a = 89.756637685716118_LN;
	LargeNumbers::LargeNumber b = -9.6594869411134509_LN;
	EXPECT_EQ(a * b, -867.0030696034262753806334487316062_LN);
}

TEST(Operations, multiply70) {
	LargeNumbers::LargeNumber a = 55.6415735162873_LN;
	LargeNumbers::LargeNumber b = -3237650232.3469300_LN;
	EXPECT_EQ(a * b, -180147953423.15636372365915298900_LN);
}

TEST(Operations, multiply71) {
	LargeNumbers::LargeNumber a = 14413214881.926854_LN;
	LargeNumbers::LargeNumber b = -0.000000000035234173236094633_LN;
	EXPECT_EQ(a * b, -0.507837710038868025080400927974582_LN);
}

TEST(Operations, multiply72) {
	LargeNumbers::LargeNumber a = 15202162416.403425_LN;
	LargeNumbers::LargeNumber b = -0.021894708372036583_LN;
	EXPECT_EQ(a * b, -332846912.731487960184653386496775_LN);
}

TEST(Operations, multiply73) {
	LargeNumbers::LargeNumber a = 87106286439.754511_LN;
	LargeNumbers::LargeNumber b = -0.70213878517481316_LN;
	EXPECT_EQ(a * b, -61160702141.89853324020777069216476_LN);
}

TEST(Operations, multiply74) {
	LargeNumbers::LargeNumber a = 18699641199.498609_LN;
	LargeNumbers::LargeNumber b = -2.3227202091149524_LN;
	EXPECT_EQ(a * b, -43434034517.2739884267105249012116_LN);
}

TEST(Operations, multiply75) {
	LargeNumbers::LargeNumber a = 83798111697.958333_LN;
	LargeNumbers::LargeNumber b = -4401220371.1510154_LN;
	EXPECT_EQ(a * b, -368813956269042419666.1133998413282_LN);
}

TEST(Operations, multiply76) {
	LargeNumbers::LargeNumber a = 0.00000000018339586035765963_LN;
	LargeNumbers::LargeNumber b = 0.00000000083420126057101881_LN;
	EXPECT_EQ(a * b, 0.0000000000000000001529890578938661999374907763076403_LN);
}

TEST(Operations, multiply77) {
	LargeNumbers::LargeNumber a = 0.00000000013221898130390175_LN;
	LargeNumbers::LargeNumber b = 0.2866132087981388_LN;
	EXPECT_EQ(a * b, 0.000000000037895706495532402559432578062900_LN);
}

TEST(Operations, multiply78) {
	LargeNumbers::LargeNumber a = 0.00000000029683195188344298_LN;
	LargeNumbers::LargeNumber b = 4.001811028897473_LN;
	EXPECT_EQ(a * b, 0.00000000118786537877632615032587266158954_LN);
}

TEST(Operations, multiply79) {
	LargeNumbers::LargeNumber a = 0.00000000072767021393853781_LN;
	LargeNumbers::LargeNumber b = 93.951351224132772_LN;
	EXPECT_EQ(a * b, 0.00000006836559984507940036595882698210932_LN);
}

TEST(Operations, multiply80) {
	LargeNumbers::LargeNumber a = 0.00000000077091278383477930_LN;
	LargeNumbers::LargeNumber b = 17654463719.003821_LN;
	EXPECT_EQ(a * b, 13.61005177272734649996924939170530_LN);
}

TEST(Operations, multiply81) {
	LargeNumbers::LargeNumber a = 0.69227143509413636_LN;
	LargeNumbers::LargeNumber b = 0.00000000026920200923196074_LN;
	EXPECT_EQ(a * b, 0.0000000001863608612612344065972450797265064_LN);
}

TEST(Operations, multiply82) {
	LargeNumbers::LargeNumber a = 0.30788883671311594_LN;
	LargeNumbers::LargeNumber b = 0.5981811989774883_LN;
	EXPECT_EQ(a * b, 0.184173313496835810889777407893502_LN);
}

TEST(Operations, multiply83) {
	LargeNumbers::LargeNumber a = 0.74100812420163818_LN;
	LargeNumbers::LargeNumber b = 3.2957413152819364_LN;
	EXPECT_EQ(a * b, 2.442171089890907503415569442571752_LN);
}

TEST(Operations, multiply84) {
	LargeNumbers::LargeNumber a = 0.51031168064022015_LN;
	LargeNumbers::LargeNumber b = 65.477666792066314_LN;
	EXPECT_EQ(a * b, 33.41401818505969302401423435902710_LN);
}

TEST(Operations, multiply85) {
	LargeNumbers::LargeNumber a = 0.2383687027234400_LN;
	LargeNumbers::LargeNumber b = 67298048453.62498_LN;
	EXPECT_EQ(a * b, 16041748505.709793850666415531200_LN);
}

TEST(Operations, multiply86) {
	LargeNumbers::LargeNumber a = 9.9067247428782178_LN;
	LargeNumbers::LargeNumber b = 0.00000000074446254230843112_LN;
	EXPECT_EQ(a * b, 0.000000007375185488032956627795288339657936_LN);
}

TEST(Operations, multiply87) {
	LargeNumbers::LargeNumber a = 4.515753642402623_LN;
	LargeNumbers::LargeNumber b = 0.96070079778961870_LN;
	EXPECT_EQ(a * b, 4.33828812687757643162475504985010_LN);
}

TEST(Operations, multiply88) {
	LargeNumbers::LargeNumber a = 5.0021667484302338_LN;
	LargeNumbers::LargeNumber b = 3.1653046628631903_LN;
	EXPECT_EQ(a * b, 15.83338173322542204511749364289214_LN);
}

TEST(Operations, multiply89) {
	LargeNumbers::LargeNumber a = 3.6554992433548120_LN;
	LargeNumbers::LargeNumber b = 70.564418664810604_LN;
	EXPECT_EQ(a * b, 257.9481790369873361756715520264480_LN);
}

TEST(Operations, multiply90) {
	LargeNumbers::LargeNumber a = 9.2813197325914498_LN;
	LargeNumbers::LargeNumber b = 17970712741.474738_LN;
	EXPECT_EQ(a * b, 166791930776.1820750357329014951524_LN);
}

TEST(Operations, multiply91) {
	LargeNumbers::LargeNumber a = 30.744971484653110_LN;
	LargeNumbers::LargeNumber b = 0.00000000071306672230536596_LN;
	EXPECT_EQ(a * b, 0.00000002192321604393353418738914220213560_LN);
}

TEST(Operations, multiply92) {
	LargeNumbers::LargeNumber a = 87.262755701996923_LN;
	LargeNumbers::LargeNumber b = 0.79338318643397690_LN;
	EXPECT_EQ(a * b, 69.23280317586000553694662645307870_LN);
}

TEST(Operations, multiply93) {
	LargeNumbers::LargeNumber a = 39.68313279508543_LN;
	LargeNumbers::LargeNumber b = 1.7736077621941626_LN;
	EXPECT_EQ(a * b, 70.382312353545254340746714310918_LN);
}

TEST(Operations, multiply94) {
	LargeNumbers::LargeNumber a = 39.719570896756916_LN;
	LargeNumbers::LargeNumber b = 85.938929008539899_LN;
	EXPECT_EQ(a * b, 3413.457383546060058164607490191484_LN);
}

TEST(Operations, multiply95) {
	LargeNumbers::LargeNumber a = 72.3942381772590_LN;
	LargeNumbers::LargeNumber b = 42297970442.060197_LN;
	EXPECT_EQ(a * b, 3062129346597.1670545340344600230_LN);
}

TEST(Operations, multiply96) {
	LargeNumbers::LargeNumber a = 77518679647.436789_LN;
	LargeNumbers::LargeNumber b = 0.00000000023341605159645392_LN;
	EXPECT_EQ(a * b, 18.09410412827508790943812975126288_LN);
}

TEST(Operations, multiply97) {
	LargeNumbers::LargeNumber a = 36047952521.67809_LN;
	LargeNumbers::LargeNumber b = 0.41677264057449541_LN;
	EXPECT_EQ(a * b, 15023800359.7638180630595882025669_LN);
}

TEST(Operations, multiply98) {
	LargeNumbers::LargeNumber a = 17249351669.704325_LN;
	LargeNumbers::LargeNumber b = 9.2613110799851731_LN;
	EXPECT_EQ(a * b, 159751611741.1934110341494609436575_LN);
}

TEST(Operations, multiply99) {
	LargeNumbers::LargeNumber a = 49659677030.215690_LN;
	LargeNumbers::LargeNumber b = 13.683296265531172_LN;
	EXPECT_EQ(a * b, 679508073255.034473088891578488680_LN);
}

TEST(Operations, multiply100) {
	LargeNumbers::LargeNumber a = 91346078572.45385_LN;
	LargeNumbers::LargeNumber b = 79789420920.669622_LN;
	EXPECT_EQ(a * b, 7288450712670080298750.38569194470_LN);
}

TEST(Operations, division1) {
	LargeNumbers::LargeNumber a = -0.000000000026048038918855092_LN;
	LargeNumbers::LargeNumber b = -0.000000000033369588611304433_LN;
	EXPECT_EQ(a / b, 0.7805921500042388997253364892266371918976027786235700409095250353710088944826188180790807204163686721_LN);
}

TEST(Operations, division2) {
	LargeNumbers::LargeNumber a = -0.000000000043111226638909624_LN;
	LargeNumbers::LargeNumber b = -0.070507945559576698_LN;
	EXPECT_EQ(a / b, 0.0000000006114378499722726407683032617548657491660342483159068325204031089346570896855707252772503198_LN);
}

TEST(Operations, division3) {
	LargeNumbers::LargeNumber a = -0.000000000080008539491797396_LN;
	LargeNumbers::LargeNumber b = -0.85772119111109629_LN;
	EXPECT_EQ(a / b, 0.0000000000932803576744488924869010263850370724621985814233993577064337823623064684767480759481799226_LN);
}

TEST(Operations, division4) {
	LargeNumbers::LargeNumber a = -0.000000000044887166506362620_LN;
	LargeNumbers::LargeNumber b = -7.9257765216103737_LN;
	EXPECT_EQ(a / b, 0.0000000000056634408482214388510816228638831136241378597368749309002025319645268673120393003381455697_LN);
}

TEST(Operations, division5) {
	LargeNumbers::LargeNumber a = -0.000000000016335221309801085_LN;
	LargeNumbers::LargeNumber b = -4960421970.0980107_LN;
	EXPECT_EQ(a / b, 0.0000000000000000000032931112329297107888752246605312061825183945208207850087677501127471957136792877_LN);
}

TEST(Operations, division6) {
	LargeNumbers::LargeNumber a = -0.095819307603995188_LN;
	LargeNumbers::LargeNumber b = -0.000000000028867117031116327_LN;
	EXPECT_EQ(a / b, 3319323765.5395245840656973683126295987418757188557834347892578535610007934383535724787735435143135998326361737_LN);
}

TEST(Operations, division7) {
	LargeNumbers::LargeNumber a = -0.054048247983605793_LN;
	LargeNumbers::LargeNumber b = -0.093136229519831894_LN;
	EXPECT_EQ(a / b, 0.5803138935541412418494672648371813381953484861885212727969493557944152855416685111260371293451450169_LN);
}

TEST(Operations, division8) {
	LargeNumbers::LargeNumber a = -0.028053888450575875_LN;
	LargeNumbers::LargeNumber b = -0.84258919911160014_LN;
	EXPECT_EQ(a / b, 0.0332948588471760888206862830708550014456249301137410561701447613829001632020703699770854746272453276_LN);
}

TEST(Operations, division9) {
	LargeNumbers::LargeNumber a = -0.076185685839950151_LN;
	LargeNumbers::LargeNumber b = -2.218767054071788_LN;
	EXPECT_EQ(a / b, 0.0343369465938920374278811868535737079491336500860750537931959233239516323989999899346534053604038692_LN);
}

TEST(Operations, division10) {
	LargeNumbers::LargeNumber a = -0.036548777685871346_LN;
	LargeNumbers::LargeNumber b = -7477123810.6218534_LN;
	EXPECT_EQ(a / b, 0.0000000000048880797766048596393974954892070850273311056583487359721273092240036516830396001679268839_LN);
}

TEST(Operations, division11) {
	LargeNumbers::LargeNumber a = -0.69034074467533889_LN;
	LargeNumbers::LargeNumber b = -0.000000000073304860021539904_LN;
	EXPECT_EQ(a / b, 9417393941.8544572428386522942292058410987095833276885195775776496455604290641711113254829819261067249248948303_LN);
}

TEST(Operations, division12) {
	LargeNumbers::LargeNumber a = -0.70746672480858823_LN;
	LargeNumbers::LargeNumber b = -0.077436997911186017_LN;
	EXPECT_EQ(a / b, 9.1360298551345628124867847322882207667464793802836828074141709371930256332374280096564844393032235680_LN);
}

TEST(Operations, division13) {
	LargeNumbers::LargeNumber a = -0.84450599624978263_LN;
	LargeNumbers::LargeNumber b = -0.98431726845236620_LN;
	EXPECT_EQ(a / b, 0.8579611709724369026711501454619223027467429975140965502577556092684437945942337168525889882036676402_LN);
}

TEST(Operations, division14) {
	LargeNumbers::LargeNumber a = -0.5564580868396729_LN;
	LargeNumbers::LargeNumber b = -5.8041223417564320_LN;
	EXPECT_EQ(a / b, 0.0958729079220750292786926183526943656672716395434047207925494140168142712924998193344718432187139169_LN);
}

TEST(Operations, division15) {
	LargeNumbers::LargeNumber a = -0.72304893406176585_LN;
	LargeNumbers::LargeNumber b = -9122071277.7496364_LN;
	EXPECT_EQ(a / b, 0.0000000000792636794918947343646087366734306673003626716690648818436786931289266817823974196956604217_LN);
}

TEST(Operations, division16) {
	LargeNumbers::LargeNumber a = -9.9478713451941512_LN;
	LargeNumbers::LargeNumber b = -0.000000000092445519180558280_LN;
	EXPECT_EQ(a / b, 107607934201.3824129890516152378048904830114913281959713541769386286915772038435975418861636638635381889553931747_LN);
}

TEST(Operations, division17) {
	LargeNumbers::LargeNumber a = -1.7276071299684814_LN;
	LargeNumbers::LargeNumber b = -0.056807761225435595_LN;
	EXPECT_EQ(a / b, 30.4114630237346467223709238254877001172692611293346756281780837239769919769489075157582209512723725145_LN);
}

TEST(Operations, division18) {
	LargeNumbers::LargeNumber a = -2.2082616541263936_LN;
	LargeNumbers::LargeNumber b = -0.35124835037958599_LN;
	EXPECT_EQ(a / b, 6.2868954451742653550316628183096227719382929872475097392645307532024882740664484773383158353499534409_LN);
}

TEST(Operations, division19) {
	LargeNumbers::LargeNumber a = -6.5054386703444965_LN;
	LargeNumbers::LargeNumber b = -7.2677714610650719_LN;
	EXPECT_EQ(a / b, 0.8951077651788382420924695551312662596058279872597600275306498966237276820435631547229838605889786201_LN);
}

TEST(Operations, division20) {
	LargeNumbers::LargeNumber a = -8.8392300195993330_LN;
	LargeNumbers::LargeNumber b = -7599447082.5141933_LN;
	EXPECT_EQ(a / b, 0.0000000011631412027248397104642073849900340253237918312813479381710102781427134702097897034607414008_LN);
}

TEST(Operations, division21) {
	LargeNumbers::LargeNumber a = -6840515649.060211_LN;
	LargeNumbers::LargeNumber b = -0.000000000030401225757660793_LN;
	EXPECT_EQ(a / b, 225007889602493153894.9033219193144505288168945816269673175047621283109198589063667382335436930962441904413720614398605293_LN);
}

TEST(Operations, division22) {
	LargeNumbers::LargeNumber a = -1578196312.3744002_LN;
	LargeNumbers::LargeNumber b = -0.058933514341845108_LN;
	EXPECT_EQ(a / b, 26779266941.7275677833212165921963878710716932814087233025670349555578046538607398815226385150050009302543173729_LN);
}

TEST(Operations, division23) {
	LargeNumbers::LargeNumber a = -5115149214.5814595_LN;
	LargeNumbers::LargeNumber b = -0.16182939119499794_LN;
	EXPECT_EQ(a / b, 31608283123.4155074092641817526134522897313948812554997801890815321221612379677973962617811581061253171155495591_LN);
}

TEST(Operations, division24) {
	LargeNumbers::LargeNumber a = -7979956901.849012_LN;
	LargeNumbers::LargeNumber b = -1.9532071400141017_LN;
	EXPECT_EQ(a / b, 4085566112.4561517691113790852707624576639819620210685004797635023629826168968069244469924975768447405414054591_LN);
}

TEST(Operations, division25) {
	LargeNumbers::LargeNumber a = -9395716874.4807998_LN;
	LargeNumbers::LargeNumber b = -3746900017.2533545_LN;
	EXPECT_EQ(a / b, 2.5075974355377331397626283096098982952746718627880144866804632389886144582217868874200195382558414981_LN);
}

TEST(Operations, division26) {
	LargeNumbers::LargeNumber a = -0.00000000006246299304379105_LN;
	LargeNumbers::LargeNumber b = 0.00000000057305116105123414_LN;
	EXPECT_EQ(a / b, -0.1090007267923613743510388009071784585894757341703432962923773706649812665827902522834606081949354248_LN);
}

TEST(Operations, division27) {
	LargeNumbers::LargeNumber a = -0.000000000039935092577388062_LN;
	LargeNumbers::LargeNumber b = 0.55471041788772186_LN;
	EXPECT_EQ(a / b, -0.0000000000719926853536600908135714826051435234157579301893835119785217887716256059080379626252620939_LN);
}

TEST(Operations, division28) {
	LargeNumbers::LargeNumber a = -0.000000000028836977158565353_LN;
	LargeNumbers::LargeNumber b = 2.7205066127291832_LN;
	EXPECT_EQ(a / b, -0.0000000000105998555650031687552366740569849808744999695277319597339269105437278116799558854923350546_LN);
}

TEST(Operations, division29) {
	LargeNumbers::LargeNumber a = -0.000000000099986960759988173_LN;
	LargeNumbers::LargeNumber b = 29.989563349826540_LN;
	EXPECT_EQ(a / b, -0.0000000000033340585720987664463582879084428319500890130042544430776354726650678843274482912808211720_LN);
}

TEST(Operations, division30) {
	LargeNumbers::LargeNumber a = -0.00000000001743010855651358_LN;
	LargeNumbers::LargeNumber b = 89005835203.288761_LN;
	EXPECT_EQ(a / b, -0.0000000000000000000001958310768805587073662695866147369163505735094124027894590371395080837077301450_LN);
}

TEST(Operations, division31) {
	LargeNumbers::LargeNumber a = -0.012449754168597717_LN;
	LargeNumbers::LargeNumber b = 0.00000000083032906568545396_LN;
	EXPECT_EQ(a / b, -14993759.3215771451981366355981315173017384172439090603386625382202956150562392011281276982391172852130763722_LN);
}

TEST(Operations, division32) {
	LargeNumbers::LargeNumber a = -0.064878071931532019_LN;
	LargeNumbers::LargeNumber b = 0.20274342531305570_LN;
	EXPECT_EQ(a / b, -0.3200008672604496224682643154689814820669877400190990467725546934174814777046651143440615613721617214_LN);
}

TEST(Operations, division33) {
	LargeNumbers::LargeNumber a = -0.04924193304139407_LN;
	LargeNumbers::LargeNumber b = 3.0898028171608339_LN;
	EXPECT_EQ(a / b, -0.0159369176466223907196712543722272959017185828119699664394078722903439304518059326127241633020876306_LN);
}

TEST(Operations, division34) {
	LargeNumbers::LargeNumber a = -0.092926425556942918_LN;
	LargeNumbers::LargeNumber b = 25.512328400378602_LN;
	EXPECT_EQ(a / b, -0.0036424125661366092056746787361640090553683384635178746100271743772667371170409541605780701957762828_LN);
}

TEST(Operations, division35) {
	LargeNumbers::LargeNumber a = -0.073163272106596821_LN;
	LargeNumbers::LargeNumber b = 19228293161.597621_LN;
	EXPECT_EQ(a / b, -0.0000000000038049800620222031682572924612163348231798592956056516673316209818794955566044999092036914_LN);
}

TEST(Operations, division36) {
	LargeNumbers::LargeNumber a = -0.97392621947296940_LN;
	LargeNumbers::LargeNumber b = 0.00000000078906502348106743_LN;
	EXPECT_EQ(a / b, -1234278786.2733564308349239101227661440921452509631541492524760012398559312986626877261745999083229437364439430_LN);
}

TEST(Operations, division37) {
	LargeNumbers::LargeNumber a = -0.37992236473519058_LN;
	LargeNumbers::LargeNumber b = 0.25130029827334122_LN;
	EXPECT_EQ(a / b, -1.5118261591633535318226115526544203883568275460368573189542308281350363590733140987621998554141778281_LN);
}

TEST(Operations, division38) {
	LargeNumbers::LargeNumber a = -0.52005296206047665_LN;
	LargeNumbers::LargeNumber b = 1.8973120242312175_LN;
	EXPECT_EQ(a / b, -0.2740998609710492012335059292881980084867717451268889729131467038578439441760207639086152331372985371_LN);
}

TEST(Operations, division39) {
	LargeNumbers::LargeNumber a = -0.54052922841955965_LN;
	LargeNumbers::LargeNumber b = 44.14625525658643_LN;
	EXPECT_EQ(a / b, -0.0122440561555652000905626236365204638461766815727734125124607938886402568269489438343080904435580221_LN);
}

TEST(Operations, division40) {
	LargeNumbers::LargeNumber a = -0.21040721751214285_LN;
	LargeNumbers::LargeNumber b = 85151738565.17881_LN;
	EXPECT_EQ(a / b, -0.0000000000024709679574080345874325704008063688098889236483448159360836353049566050885613025820680065_LN);
}

TEST(Operations, division41) {
	LargeNumbers::LargeNumber a = -3.1422168038107020_LN;
	LargeNumbers::LargeNumber b = 0.00000000073610913266351282_LN;
	EXPECT_EQ(a / b, -4268683357.3725802764020749441376034986669833007282997125497660636560549132859711546286995564044374664779225101_LN);
}

TEST(Operations, division42) {
	LargeNumbers::LargeNumber a = -9.1036533881737187_LN;
	LargeNumbers::LargeNumber b = 0.71885881230649902_LN;
	EXPECT_EQ(a / b, -12.6640353186519806974109683657666864055100559413659176982116048180229963859004252844270313163245937090_LN);
}

TEST(Operations, division43) {
	LargeNumbers::LargeNumber a = -5.3742803692226610_LN;
	LargeNumbers::LargeNumber b = 8.448989659490081_LN;
	EXPECT_EQ(a / b, -0.6360855659452911575348355819575006824089528818849673967500039158508527807532848843738476388376865422_LN);
}

TEST(Operations, division44) {
	LargeNumbers::LargeNumber a = -5.6159903016331436_LN;
	LargeNumbers::LargeNumber b = 18.605053053100014_LN;
	EXPECT_EQ(a / b, -0.3018529582046741438140696561323898331488179048100591366837381490536786276779527647032191041283440431_LN);
}

TEST(Operations, division45) {
	LargeNumbers::LargeNumber a = -4.4487230494146461_LN;
	LargeNumbers::LargeNumber b = 66830610846.058204_LN;
	EXPECT_EQ(a / b, -0.0000000000665671462986042751547175651378587553249956728519869071833460666742908394683998752325212474_LN);
}

TEST(Operations, division46) {
	LargeNumbers::LargeNumber a = -4883744850.701199_LN;
	LargeNumbers::LargeNumber b = 0.00000000043851226709198280_LN;
	EXPECT_EQ(a / b, -11137076923954739630.3950055187972706961139000679620539619446038959481192546884517057759825096020608153608974419701276971_LN);
}

TEST(Operations, division47) {
	LargeNumbers::LargeNumber a = -9737218074.4803015_LN;
	LargeNumbers::LargeNumber b = 0.62569717471065427_LN;
	EXPECT_EQ(a / b, -15562189615.1011943031065692273649973581668498615913658791931619669087322638518273320616472197262672950284092471_LN);
}

TEST(Operations, division48) {
	LargeNumbers::LargeNumber a = -8621468532.7775069_LN;
	LargeNumbers::LargeNumber b = 8.5911213617823143_LN;
	EXPECT_EQ(a / b, -1003532387.6496719370029765609516306184331549403754138511731200273297124509103503903772620529271656625999002045_LN);
}

TEST(Operations, division49) {
	LargeNumbers::LargeNumber a = -9907496730.6537755_LN;
	LargeNumbers::LargeNumber b = 42.425549813535327_LN;
	EXPECT_EQ(a / b, -233526654.9095591417081166875329757560403931373193672478423947464639136543029275012305183895000939084731168862_LN);
}

TEST(Operations, division50) {
	LargeNumbers::LargeNumber a = -7301453994.4160508_LN;
	LargeNumbers::LargeNumber b = 43726041995.092633_LN;
	EXPECT_EQ(a / b, -0.1669818181859563658692401688976705350994918488350623643398177564231219108257012263347089350089011391_LN);
}

TEST(Operations, division51) {
	LargeNumbers::LargeNumber a = 0.00000000060149328886258666_LN;
	LargeNumbers::LargeNumber b = -0.000000000091616117794041825_LN;
	EXPECT_EQ(a / b, -6.5653653892514561005345643935569875042836775170944364146634266540045125346298327483924242829644658066_LN);
}

TEST(Operations, division52) {
	LargeNumbers::LargeNumber a = 0.000000000554567818758720_LN;
	LargeNumbers::LargeNumber b = -0.072305655087266688_LN;
	EXPECT_EQ(a / b, -0.0000000076697710309021401495474258138892656500543337580939038984509830357237532822045850788970312453_LN);
}

TEST(Operations, division53) {
	LargeNumbers::LargeNumber a = 0.00000000030368652435407758_LN;
	LargeNumbers::LargeNumber b = -0.86561851321050841_LN;
	EXPECT_EQ(a / b, -0.0000000003508318268606906862101281238934142374828279110478399554997708061186908698191579847979199413_LN);
}

TEST(Operations, division54) {
	LargeNumbers::LargeNumber a = 0.00000000018118892716242594_LN;
	LargeNumbers::LargeNumber b = -6.1116484072297946_LN;
	EXPECT_EQ(a / b, -0.0000000000296464906175047475284431465076587836715082738020664454798313567299978919276160557486156843_LN);
}

TEST(Operations, division55) {
	LargeNumbers::LargeNumber a = 0.00000000011938532324160647_LN;
	LargeNumbers::LargeNumber b = -7452548747.5341052_LN;
	EXPECT_EQ(a / b, -0.0000000000000000000160193951473458812588090003970137824690102458865047379231505762937893973118738132_LN);
}

TEST(Operations, division56) {
	LargeNumbers::LargeNumber a = 0.26238345170321186_LN;
	LargeNumbers::LargeNumber b = -0.000000000052256348393874358_LN;
	EXPECT_EQ(a / b, -5021082792.1908377286714788438209091358519188355832038925980439968718148592465725698894202353060430825863175001_LN);
}

TEST(Operations, division57) {
	LargeNumbers::LargeNumber a = 0.12353051807411640_LN;
	LargeNumbers::LargeNumber b = -0.078908068479735254_LN;
	EXPECT_EQ(a / b, -1.5654991999435500521731723308570920766999503128496550552687624825417876429587015042764197741575636275_LN);
}

TEST(Operations, division58) {
	LargeNumbers::LargeNumber a = 0.56414379163574215_LN;
	LargeNumbers::LargeNumber b = -0.25729933484151365_LN;
	EXPECT_EQ(a / b, -2.1925582978410446019498652771498108643273871153906899485585505843951460014894855732649411312486217768_LN);
}

TEST(Operations, division59) {
	LargeNumbers::LargeNumber a = 0.69704251860282006_LN;
	LargeNumbers::LargeNumber b = -9.2358828698542118_LN;
	EXPECT_EQ(a / b, -0.0754711302021766393648668011242387133235331662868688933420030801664251306655991426875363243897395900_LN);
}

TEST(Operations, division60) {
	LargeNumbers::LargeNumber a = 0.47254637714370096_LN;
	LargeNumbers::LargeNumber b = -5463212390.8087574_LN;
	EXPECT_EQ(a / b, -0.0000000000864960655636795820973910492156113059798339930117827631043596317416651223343073147464112566_LN);
}

TEST(Operations, division61) {
	LargeNumbers::LargeNumber a = 2.118916307748052_LN;
	LargeNumbers::LargeNumber b = -0.000000000044313630282512266_LN;
	EXPECT_EQ(a / b, -47816355695.5127576007355935026641738153129684572910813658048862563524285833866127939480034814832016756535552080_LN);
}

TEST(Operations, division62) {
	LargeNumbers::LargeNumber a = 9.9644956694724766_LN;
	LargeNumbers::LargeNumber b = -0.057500765734933310_LN;
	EXPECT_EQ(a / b, -173.2932690915239257398684749986241522979547542666607342800813851521683327296962666458957104186225631474_LN);
}

TEST(Operations, division63) {
	LargeNumbers::LargeNumber a = 5.0375664381735684_LN;
	LargeNumbers::LargeNumber b = -0.56014411503038660_LN;
	EXPECT_EQ(a / b, -8.9933399334210471474454534057711808425233449720534511474287301962701904794947568626616466748330393637_LN);
}

TEST(Operations, division64) {
	LargeNumbers::LargeNumber a = 4.4800514426039610_LN;
	LargeNumbers::LargeNumber b = -4.2754356811322756_LN;
	EXPECT_EQ(a / b, -1.0478584585834528178640137583782649966854360381627820205279320422468672081872374428351757620339959512_LN);
}

TEST(Operations, division65) {
	LargeNumbers::LargeNumber a = 8.834308128245895_LN;
	LargeNumbers::LargeNumber b = -1547424031.3941011_LN;
	EXPECT_EQ(a / b, -0.0000000057090415742651442871616971449054995820508123016633148151109175851479915124077796373380932691_LN);
}

TEST(Operations, division66) {
	LargeNumbers::LargeNumber a = 56.428214305873043_LN;
	LargeNumbers::LargeNumber b = -0.000000000025697975037370035_LN;
	EXPECT_EQ(a / b, -2195823376114.8513289770825061636145473243712253583829447792809281741150592332988938787802217991377668496626167239_LN);
}

TEST(Operations, division67) {
	LargeNumbers::LargeNumber a = 67.871803677674262_LN;
	LargeNumbers::LargeNumber b = -0.078656615984642372_LN;
	EXPECT_EQ(a / b, -862.8874103982068826197530945179974876805816909378984271715327181922686792910808018057085327961960621737_LN);
}

TEST(Operations, division68) {
	LargeNumbers::LargeNumber a = 68.32955342203028_LN;
	LargeNumbers::LargeNumber b = -0.17460369836023753_LN;
	EXPECT_EQ(a / b, -391.3408138758586420155371289511215452226933006836640161777648229549064834688506254557988728672166488795_LN);
}

TEST(Operations, division69) {
	LargeNumbers::LargeNumber a = 89.756637685716118_LN;
	LargeNumbers::LargeNumber b = -9.6594869411134509_LN;
	EXPECT_EQ(a / b, -9.2920709177303213242699769895027574081547300286953386066995551424769185822833616021566738583998965012_LN);
}

TEST(Operations, division70) {
	LargeNumbers::LargeNumber a = 55.6415735162873_LN;
	LargeNumbers::LargeNumber b = -3237650232.3469300_LN;
	EXPECT_EQ(a / b, -0.0000000171857889281491214048958532809789570936055239754247288214194901427465053874222676953887811648_LN);
}

TEST(Operations, division71) {
	LargeNumbers::LargeNumber a = 14413214881.926854_LN;
	LargeNumbers::LargeNumber b = -0.000000000035234173236094633_LN;
	EXPECT_EQ(a / b, -409069194992821671635.7818246707132997359579760995101184683229857682416031045421630784822840870871282109395451402898403466_LN);
}

TEST(Operations, division72) {
	LargeNumbers::LargeNumber a = 15202162416.403425_LN;
	LargeNumbers::LargeNumber b = -0.021894708372036583_LN;
	EXPECT_EQ(a / b, -694330436290.2260221823974272494823140875645086442686247248576378938074550497114445819171930381379789645862198066_LN);
}

TEST(Operations, division73) {
	LargeNumbers::LargeNumber a = 87106286439.754511_LN;
	LargeNumbers::LargeNumber b = -0.70213878517481316_LN;
	EXPECT_EQ(a / b, -124058502790.2531436179914641294243264207498301315419182053045846286203614269555671655594244436964322448249096488_LN);
}

TEST(Operations, division74) {
	LargeNumbers::LargeNumber a = 18699641199.498609_LN;
	LargeNumbers::LargeNumber b = -2.3227202091149524_LN;
	EXPECT_EQ(a / b, -8050750635.4473518479012819539468314310073332877305983869258517145776229492327920997955257336926476139555856830_LN);
}

TEST(Operations, division75) {
	LargeNumbers::LargeNumber a = 83798111697.958333_LN;
	LargeNumbers::LargeNumber b = -4401220371.1510154_LN;
	EXPECT_EQ(a / b, -19.0397445779437973878868030577761131792027500723838272484263495595249291939461758452822858381372236657_LN);
}

TEST(Operations, division76) {
	LargeNumbers::LargeNumber a = 0.00000000018339586035765963_LN;
	LargeNumbers::LargeNumber b = 0.00000000083420126057101881_LN;
	EXPECT_EQ(a / b, 0.2198460599689377050969073754113402032171388192985841567768879180455901319715455681448684167860683032_LN);
}

TEST(Operations, division77) {
	LargeNumbers::LargeNumber a = 0.00000000013221898130390175_LN;
	LargeNumbers::LargeNumber b = 0.2866132087981388_LN;
	EXPECT_EQ(a / b, 0.0000000004613150310076021504550817098364902646397072669755736085436650594458627386493313623205705358_LN);
}

TEST(Operations, division78) {
	LargeNumbers::LargeNumber a = 0.00000000029683195188344298_LN;
	LargeNumbers::LargeNumber b = 4.001811028897473_LN;
	EXPECT_EQ(a / b, 0.0000000000741744049731459369264189544706397369831955851490747874988125009582731971839315144452506696_LN);
}

TEST(Operations, division79) {
	LargeNumbers::LargeNumber a = 0.00000000072767021393853781_LN;
	LargeNumbers::LargeNumber b = 93.951351224132772_LN;
	EXPECT_EQ(a / b, 0.0000000000077451809309542439501874187874133274321108188523798913698030393434913745723381674310519708_LN);
}

TEST(Operations, division80) {
	LargeNumbers::LargeNumber a = 0.00000000077091278383477930_LN;
	LargeNumbers::LargeNumber b = 17654463719.003821_LN;
	EXPECT_EQ(a / b, 0.0000000000000000000436667347196134023450387627823496623136031630335981049753261339289333798450373391_LN);
}

TEST(Operations, division81) {
	LargeNumbers::LargeNumber a = 0.69227143509413636_LN;
	LargeNumbers::LargeNumber b = 0.00000000026920200923196074_LN;
	EXPECT_EQ(a / b, 2571568604.0724659065920410522721592297053446717766443859623367577295114225832609242493954954029569531691849556_LN);
}

TEST(Operations, division82) {
	LargeNumbers::LargeNumber a = 0.30788883671311594_LN;
	LargeNumbers::LargeNumber b = 0.5981811989774883_LN;
	EXPECT_EQ(a / b, 0.5147083145364836168385676030536439215463585906996638332764678254549586081964010234633518144389221050_LN);
}

TEST(Operations, division83) {
	LargeNumbers::LargeNumber a = 0.74100812420163818_LN;
	LargeNumbers::LargeNumber b = 3.2957413152819364_LN;
	EXPECT_EQ(a / b, 0.2248380723225081587771558493035853688075044306157080498437595030045705766373542542664457377254542345_LN);
}

TEST(Operations, division84) {
	LargeNumbers::LargeNumber a = 0.51031168064022015_LN;
	LargeNumbers::LargeNumber b = 65.477666792066314_LN;
	EXPECT_EQ(a / b, 0.0077936753956244012557700020780411327165146611799728077085100678159426781207542203108729901646600622_LN);
}

TEST(Operations, division85) {
	LargeNumbers::LargeNumber a = 0.2383687027234400_LN;
	LargeNumbers::LargeNumber b = 67298048453.62498_LN;
	EXPECT_EQ(a / b, 0.0000000000035419853651135165107625168426234816278067975917484857596322107627334686646371308076179985_LN);
}

TEST(Operations, division86) {
	LargeNumbers::LargeNumber a = 9.9067247428782178_LN;
	LargeNumbers::LargeNumber b = 0.00000000074446254230843112_LN;
	EXPECT_EQ(a / b, 13307217193.4392071763152439155186559353625552445343576196562945417996263127270336736218633680659976373941351568_LN);
}

TEST(Operations, division87) {
	LargeNumbers::LargeNumber a = 4.515753642402623_LN;
	LargeNumbers::LargeNumber b = 0.96070079778961870_LN;
	EXPECT_EQ(a / b, 4.7004787055371175206343650629962675919706446118166478042958612455632714832628048747615978676419108683_LN);
}

TEST(Operations, division88) {
	LargeNumbers::LargeNumber a = 5.0021667484302338_LN;
	LargeNumbers::LargeNumber b = 3.1653046628631903_LN;
	EXPECT_EQ(a / b, 1.5803113068760660135546397887117402585084798111405264025980402364135768201506833974836781613159752780_LN);
}

TEST(Operations, division89) {
	LargeNumbers::LargeNumber a = 3.6554992433548120_LN;
	LargeNumbers::LargeNumber b = 70.564418664810604_LN;
	EXPECT_EQ(a / b, 0.0518037179717850286206844385016467016892196468676616347525626943103449765244601423398380752906695255_LN);
}

TEST(Operations, division90) {
	LargeNumbers::LargeNumber a = 9.2813197325914498_LN;
	LargeNumbers::LargeNumber b = 17970712741.474738_LN;
	EXPECT_EQ(a / b, 0.0000000005164692055408033324759030550877945690397773289899806645843682822494539461528338239053317677_LN);
}

TEST(Operations, division91) {
	LargeNumbers::LargeNumber a = 30.744971484653110_LN;
	LargeNumbers::LargeNumber b = 0.00000000071306672230536596_LN;
	EXPECT_EQ(a / b, 43116542285.4872558098589686560310951823399701855577267535362372926564977244024965480719996567183900579033309176_LN);
}

TEST(Operations, division92) {
	LargeNumbers::LargeNumber a = 87.262755701996923_LN;
	LargeNumbers::LargeNumber b = 0.79338318643397690_LN;
	EXPECT_EQ(a / b, 109.9881585520071796869305412551595379924824304211940427249544900737998470220814222912998219329931782887_LN);
}

TEST(Operations, division93) {
	LargeNumbers::LargeNumber a = 39.68313279508543_LN;
	LargeNumbers::LargeNumber b = 1.7736077621941626_LN;
	EXPECT_EQ(a / b, 22.3742439793975081937681739665146253151147448636343427543818510653981105007870014216141515498034340122_LN);
}

TEST(Operations, division94) {
	LargeNumbers::LargeNumber a = 39.719570896756916_LN;
	LargeNumbers::LargeNumber b = 85.938929008539899_LN;
	EXPECT_EQ(a / b, 0.4621836850306793328828916007993621482206873673021024054496204271966571978503908792339574627561486820_LN);
}

TEST(Operations, division95) {
	LargeNumbers::LargeNumber a = 72.3942381772590_LN;
	LargeNumbers::LargeNumber b = 42297970442.060197_LN;
	EXPECT_EQ(a / b, 0.0000000017115298304069861035626800265549213263229002991443184660848652418020688106432726336389004684_LN);
}

TEST(Operations, division96) {
	LargeNumbers::LargeNumber a = 77518679647.436789_LN;
	LargeNumbers::LargeNumber b = 0.00000000023341605159645392_LN;
	EXPECT_EQ(a / b, 332105179216451369936.1876870763729277022342730411704852561469420141503136802162330139215720482438621123896887756261867449_LN);
}

TEST(Operations, division97) {
	LargeNumbers::LargeNumber a = 36047952521.67809_LN;
	LargeNumbers::LargeNumber b = 0.41677264057449541_LN;
	EXPECT_EQ(a / b, 86493087626.8370403624727561141601458348262981297468892803731733605339563970393231685284601459772963785917263337_LN);
}

TEST(Operations, division98) {
	LargeNumbers::LargeNumber a = 17249351669.704325_LN;
	LargeNumbers::LargeNumber b = 9.2613110799851731_LN;
	EXPECT_EQ(a / b, 1862517252.7658946056107462748922078075735254620064130169216411727701727822217311887146677494135045841969255060_LN);
}

TEST(Operations, division99) {
	LargeNumbers::LargeNumber a = 49659677030.215690_LN;
	LargeNumbers::LargeNumber b = 13.683296265531172_LN;
	EXPECT_EQ(a / b, 3629218871.4287076465361813535193585518765653415663013881538246850969251183108616329485418040609425592126021996_LN);
}

TEST(Operations, division100) {
	LargeNumbers::LargeNumber a = 91346078572.45385_LN;
	LargeNumbers::LargeNumber b = 79789420920.669622_LN;
	EXPECT_EQ(a / b, 1.1448394726824048280437559379925336104480849973150116255778928052565853897408944220490392649827828607_LN);
}

TEST(Operations, plusEqual1) {
	LargeNumbers::LargeNumber a = -0.000000000026048038918855092_LN;
	LargeNumbers::LargeNumber b = -0.000000000033369588611304433_LN;
	a += b;
	EXPECT_EQ(a, -0.000000000059417627530159525_LN);
}

TEST(Operations, plusEqual6) {
	LargeNumbers::LargeNumber a = -0.095819307603995188_LN;
	LargeNumbers::LargeNumber b = -0.000000000028867117031116327_LN;
	a += b;
	EXPECT_EQ(a, -0.095819307632862305031116327_LN);
}

TEST(Operations, plusEqual11) {
	LargeNumbers::LargeNumber a = -0.69034074467533889_LN;
	LargeNumbers::LargeNumber b = -0.000000000073304860021539904_LN;
	a += b;
	EXPECT_EQ(a, -0.690340744748643750021539904_LN);
}

TEST(Operations, plusEqual16) {
	LargeNumbers::LargeNumber a = -9.9478713451941512_LN;
	LargeNumbers::LargeNumber b = -0.000000000092445519180558280_LN;
	a += b;
	EXPECT_EQ(a, -9.947871345286596719180558280_LN);
}

TEST(Operations, plusEqual21) {
	LargeNumbers::LargeNumber a = -6840515649.060211_LN;
	LargeNumbers::LargeNumber b = -0.000000000030401225757660793_LN;
	a += b;
	EXPECT_EQ(a, -6840515649.060211000030401225757660793_LN);
}

TEST(Operations, minusEqual1) {
	LargeNumbers::LargeNumber a = -0.000000000026048038918855092_LN;
	LargeNumbers::LargeNumber b = -0.000000000033369588611304433_LN;
	a -= b;
	EXPECT_EQ(a, 0.000000000007321549692449341_LN);
}

TEST(Operations, minusEqual6) {
	LargeNumbers::LargeNumber a = -0.095819307603995188_LN;
	LargeNumbers::LargeNumber b = -0.000000000028867117031116327_LN;
	a -= b;
	EXPECT_EQ(a, -0.095819307575128070968883673_LN);
}

TEST(Operations, minusEqual11) {
	LargeNumbers::LargeNumber a = -0.69034074467533889_LN;
	LargeNumbers::LargeNumber b = -0.000000000073304860021539904_LN;
	a -= b;
	EXPECT_EQ(a, -0.690340744602034029978460096_LN);
}

TEST(Operations, minusEqual16) {
	LargeNumbers::LargeNumber a = -9.9478713451941512_LN;
	LargeNumbers::LargeNumber b = -0.000000000092445519180558280_LN;
	a -= b;
	EXPECT_EQ(a, -9.947871345101705680819441720_LN);
}

TEST(Operations, minusEqual21) {
	LargeNumbers::LargeNumber a = -6840515649.060211_LN;
	LargeNumbers::LargeNumber b = -0.000000000030401225757660793_LN;
	a -= b;
	EXPECT_EQ(a, -6840515649.060210999969598774242339207_LN);
}

TEST(Operations, multiplyEqual1) {
	LargeNumbers::LargeNumber a = -0.000000000026048038918855092_LN;
	LargeNumbers::LargeNumber b = -0.000000000033369588611304433_LN;
	a *= b;
	EXPECT_EQ(a, 0.000000000000000000000869212342853441513794741024222836_LN);
}

TEST(Operations, multiplyEqual6) {
	LargeNumbers::LargeNumber a = -0.095819307603995188_LN;
	LargeNumbers::LargeNumber b = -0.000000000028867117031116327_LN;
	a *= b;
	EXPECT_EQ(a, 0.000000000002766027166445063667752496776234476_LN);
}

TEST(Operations, multiplyEqual11) {
	LargeNumbers::LargeNumber a = -0.69034074467533889_LN;
	LargeNumbers::LargeNumber b = -0.000000000073304860021539904_LN;
	a *= b;
	EXPECT_EQ(a, 0.00000000005060533165559133615160071085806656_LN);
}

TEST(Operations, multiplyEqual16) {
	LargeNumbers::LargeNumber a = -9.9478713451941512_LN;
	LargeNumbers::LargeNumber b = -0.000000000092445519180558280_LN;
	a *= b;
	EXPECT_EQ(a, 0.0000000009196361312478720031980150067319360_LN);
}

TEST(Operations, multiplyEqual21) {
	LargeNumbers::LargeNumber a = -6840515649.060211_LN;
	LargeNumbers::LargeNumber b = -0.000000000030401225757660793_LN;
	a *= b;
	EXPECT_EQ(a, 0.207960060545891024354344171007323_LN);
}

TEST(Operations, divideEqual1) {
	LargeNumbers::LargeNumber a = -0.000000000026048038918855092_LN;
	LargeNumbers::LargeNumber b = -0.000000000033369588611304433_LN;
	a /= b;
	EXPECT_EQ(a, 0.7805921500042388997253364892266371918976027786235700409095250353710088944826188180790807204163686721_LN);
}

TEST(Operations, divideEqual6) {
	LargeNumbers::LargeNumber a = -0.095819307603995188_LN;
	LargeNumbers::LargeNumber b = -0.000000000028867117031116327_LN;
	a /= b;
	EXPECT_EQ(a, 3319323765.5395245840656973683126295987418757188557834347892578535610007934383535724787735435143135998326361737_LN);
}

TEST(Operations, divideEqual11) {
	LargeNumbers::LargeNumber a = -0.69034074467533889_LN;
	LargeNumbers::LargeNumber b = -0.000000000073304860021539904_LN;
	a /= b;
	EXPECT_EQ(a, 9417393941.8544572428386522942292058410987095833276885195775776496455604290641711113254829819261067249248948303_LN);
}

TEST(Operations, divideEqual16) {
	LargeNumbers::LargeNumber a = -9.9478713451941512_LN;
	LargeNumbers::LargeNumber b = -0.000000000092445519180558280_LN;
	a /= b;
	EXPECT_EQ(a, 107607934201.3824129890516152378048904830114913281959713541769386286915772038435975418861636638635381889553931747_LN);
}

TEST(Operations, divideEqual21) {
	LargeNumbers::LargeNumber a = -6840515649.060211_LN;
	LargeNumbers::LargeNumber b = -0.000000000030401225757660793_LN;
	a /= b;
	EXPECT_EQ(a, 225007889602493153894.9033219193144505288168945816269673175047621283109198589063667382335436930962441904413720614398605293_LN);
}

TEST(Methods, toString1) {
	LargeNumbers::LargeNumber a = -0.000000000026048038918855092_LN;
	EXPECT_EQ(a.toString(), "-0.000000000026048038918855092");
}

TEST(Methods, toString6) {
	LargeNumbers::LargeNumber a = -0.095819307603995188_LN;
	EXPECT_EQ(a.toString(), "-0.095819307603995188");
}

TEST(Methods, toString11) {
	LargeNumbers::LargeNumber a = -0.69034074467533889_LN;
	EXPECT_EQ(a.toString(), "-0.69034074467533889");
}

TEST(Methods, toString16) {
	LargeNumbers::LargeNumber a = -9.9478713451941512_LN;
	EXPECT_EQ(a.toString(), "-9.9478713451941512");
}

TEST(Methods, toString21) {
	LargeNumbers::LargeNumber a = -6840515649.060211_LN;
	EXPECT_EQ(a.toString(), "-6840515649.060211");
}

TEST(Methods, setPrecision1_0) {
	LargeNumbers::LargeNumber a = -0.000000000026048038918855092_LN;
	a.setPrecision(1);
	EXPECT_EQ(a, -0.0_LN);
}

TEST(Methods, setPrecision1_1) {
	LargeNumbers::LargeNumber a = -0.000000000026048038918855092_LN;
	a.setPrecision(4);
	EXPECT_EQ(a, -0.0000_LN);
}

TEST(Methods, setPrecision1_2) {
	LargeNumbers::LargeNumber a = -0.000000000026048038918855092_LN;
	a.setPrecision(7);
	EXPECT_EQ(a, -0.0000000_LN);
}

TEST(Methods, setPrecision1_3) {
	LargeNumbers::LargeNumber a = -0.000000000026048038918855092_LN;
	a.setPrecision(10);
	EXPECT_EQ(a, -0.0000000000_LN);
}

TEST(Methods, setPrecision6_0) {
	LargeNumbers::LargeNumber a = -0.095819307603995188_LN;
	a.setPrecision(1);
	EXPECT_EQ(a, -0.0_LN);
}

TEST(Methods, setPrecision6_1) {
	LargeNumbers::LargeNumber a = -0.095819307603995188_LN;
	a.setPrecision(4);
	EXPECT_EQ(a, -0.0958_LN);
}

TEST(Methods, setPrecision6_2) {
	LargeNumbers::LargeNumber a = -0.095819307603995188_LN;
	a.setPrecision(7);
	EXPECT_EQ(a, -0.0958193_LN);
}

TEST(Methods, setPrecision6_3) {
	LargeNumbers::LargeNumber a = -0.095819307603995188_LN;
	a.setPrecision(10);
	EXPECT_EQ(a, -0.0958193076_LN);
}

TEST(Methods, setPrecision11_0) {
	LargeNumbers::LargeNumber a = -0.69034074467533889_LN;
	a.setPrecision(1);
	EXPECT_EQ(a, -0.6_LN);
}

TEST(Methods, setPrecision11_1) {
	LargeNumbers::LargeNumber a = -0.69034074467533889_LN;
	a.setPrecision(4);
	EXPECT_EQ(a, -0.6903_LN);
}

TEST(Methods, setPrecision11_2) {
	LargeNumbers::LargeNumber a = -0.69034074467533889_LN;
	a.setPrecision(7);
	EXPECT_EQ(a, -0.6903407_LN);
}

TEST(Methods, setPrecision11_3) {
	LargeNumbers::LargeNumber a = -0.69034074467533889_LN;
	a.setPrecision(10);
	EXPECT_EQ(a, -0.6903407446_LN);
}

TEST(Methods, setPrecision16_0) {
	LargeNumbers::LargeNumber a = -9.9478713451941512_LN;
	a.setPrecision(1);
	EXPECT_EQ(a, -9.9_LN);
}

TEST(Methods, setPrecision16_1) {
	LargeNumbers::LargeNumber a = -9.9478713451941512_LN;
	a.setPrecision(4);
	EXPECT_EQ(a, -9.9478_LN);
}

TEST(Methods, setPrecision16_2) {
	LargeNumbers::LargeNumber a = -9.9478713451941512_LN;
	a.setPrecision(7);
	EXPECT_EQ(a, -9.9478713_LN);
}

TEST(Methods, setPrecision16_3) {
	LargeNumbers::LargeNumber a = -9.9478713451941512_LN;
	a.setPrecision(10);
	EXPECT_EQ(a, -9.9478713451_LN);
}

TEST(Methods, setPrecision21_0) {
	LargeNumbers::LargeNumber a = -6840515649.060211_LN;
	a.setPrecision(1);
	EXPECT_EQ(a, -6840515649.0_LN);
}

TEST(Methods, setPrecision21_1) {
	LargeNumbers::LargeNumber a = -6840515649.060211_LN;
	a.setPrecision(4);
	EXPECT_EQ(a, -6840515649.0602_LN);
}

TEST(Methods, setPrecision21_2) {
	LargeNumbers::LargeNumber a = -6840515649.060211_LN;
	a.setPrecision(7);
	EXPECT_EQ(a, -6840515649.060211_LN);
}

TEST(Methods, setPrecision21_3) {
	LargeNumbers::LargeNumber a = -6840515649.060211_LN;
	a.setPrecision(10);
	EXPECT_EQ(a, -6840515649.060211_LN);
}

TEST(Methods, getInverse1_0) {
	LargeNumbers::LargeNumber a = -0.000000000026048038918855092_LN;
	EXPECT_EQ(a.getInverse(8), -38390606030.46556381_LN);
}

TEST(Methods, getInverse1_1) {
	LargeNumbers::LargeNumber a = -0.000000000026048038918855092_LN;
	EXPECT_EQ(a.getInverse(32), -38390606030.46556381485659526710119929343480_LN);
}

TEST(Methods, getInverse1_2) {
	LargeNumbers::LargeNumber a = -0.000000000026048038918855092_LN;
	EXPECT_EQ(a.getInverse(56), -38390606030.46556381485659526710119929343480495232029757994353946019_LN);
}

TEST(Methods, getInverse1_3) {
	LargeNumbers::LargeNumber a = -0.000000000026048038918855092_LN;
	EXPECT_EQ(a.getInverse(80), -38390606030.46556381485659526710119929343480495232029757994353946019280586502941331513179018_LN);
}

TEST(Methods, getInverse6_0) {
	LargeNumbers::LargeNumber a = -0.095819307603995188_LN;
	EXPECT_EQ(a.getInverse(8), -10.43631001_LN);
}

TEST(Methods, getInverse6_1) {
	LargeNumbers::LargeNumber a = -0.095819307603995188_LN;
	EXPECT_EQ(a.getInverse(32), -10.43631001940474238457338222387719_LN);
}

TEST(Methods, getInverse6_2) {
	LargeNumbers::LargeNumber a = -0.095819307603995188_LN;
	EXPECT_EQ(a.getInverse(56), -10.43631001940474238457338222387719527019158418530331589624_LN);
}

TEST(Methods, getInverse6_3) {
	LargeNumbers::LargeNumber a = -0.095819307603995188_LN;
	EXPECT_EQ(a.getInverse(80), -10.43631001940474238457338222387719527019158418530331589624100368651723274364039121_LN);
}

TEST(Methods, getInverse11_0) {
	LargeNumbers::LargeNumber a = -0.69034074467533889_LN;
	EXPECT_EQ(a.getInverse(8), -1.44856001_LN);
}

TEST(Methods, getInverse11_1) {
	LargeNumbers::LargeNumber a = -0.69034074467533889_LN;
	EXPECT_EQ(a.getInverse(32), -1.44856001577929621208222878867364_LN);
}

TEST(Methods, getInverse11_2) {
	LargeNumbers::LargeNumber a = -0.69034074467533889_LN;
	EXPECT_EQ(a.getInverse(56), -1.44856001577929621208222878867364522979842525165244566066_LN);
}

TEST(Methods, getInverse11_3) {
	LargeNumbers::LargeNumber a = -0.69034074467533889_LN;
	EXPECT_EQ(a.getInverse(80), -1.44856001577929621208222878867364522979842525165244566066213047066380329842842003_LN);
}

TEST(Methods, getInverse16_0) {
	LargeNumbers::LargeNumber a = -9.9478713451941512_LN;
	EXPECT_EQ(a.getInverse(8), -0.10052401_LN);
}

TEST(Methods, getInverse16_1) {
	LargeNumbers::LargeNumber a = -9.9478713451941512_LN;
	EXPECT_EQ(a.getInverse(32), -0.10052401818436295239810262258235_LN);
}

TEST(Methods, getInverse16_2) {
	LargeNumbers::LargeNumber a = -9.9478713451941512_LN;
	EXPECT_EQ(a.getInverse(56), -0.10052401818436295239810262258235563239509191251444899251_LN);
}

TEST(Methods, getInverse16_3) {
	LargeNumbers::LargeNumber a = -9.9478713451941512_LN;
	EXPECT_EQ(a.getInverse(80), -0.10052401818436295239810262258235563239509191251444899251207844312596394518137612_LN);
}

TEST(Methods, getInverse21_0) {
	LargeNumbers::LargeNumber a = -6840515649.060211_LN;
	EXPECT_EQ(a.getInverse(8), -0.00000000_LN);
}

TEST(Methods, getInverse21_1) {
	LargeNumbers::LargeNumber a = -6840515649.060211_LN;
	EXPECT_EQ(a.getInverse(32), -0.00000000014618780970662433840004_LN);
}

TEST(Methods, getInverse21_2) {
	LargeNumbers::LargeNumber a = -6840515649.060211_LN;
	EXPECT_EQ(a.getInverse(56), -0.00000000014618780970662433840004134488905620082485174022_LN);
}

TEST(Methods, getInverse21_3) {
	LargeNumbers::LargeNumber a = -6840515649.060211_LN;
	EXPECT_EQ(a.getInverse(80), -0.00000000014618780970662433840004134488905620082485174022180427174248321685172908_LN);
}
