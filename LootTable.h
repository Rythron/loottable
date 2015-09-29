/**
  /////////////////////////////////////////////////////////////////////////////
  Exile Mod Loot Table Template
  /////////////////////////////////////////////////////////////////////////////
	
  Format of this file is the following:

  > LootTableName
  Spawn Chance %, Item Class Name

  You can add one item to multiple loot tables.

  Be careful with spawn chance values! They do not define how common an item is
  in general, but how common it is in relation to all the other items of that
  loot table. Values from 0..100 are allowed. The higher the chance, the more
  often will it spawn.
*/

///////////////////////////////////////////////////////////////////////////////
// Slums/Ghetto, Farms, Village Houses, Castle etc.
// Spawn Guerilla things :)
///////////////////////////////////////////////////////////////////////////////
> CivillianLowerClass

// Food
200, Exile_Item_PlasticBottleEmpty
50, Exile_Item_PlasticBottleFreshWater
30, Exile_Item_Energydrink
40, Exile_Item_Beer
150, Exile_Item_GloriousKnakworst
170, Exile_Item_SausageGravy
170, Exile_Item_ChristmasTinner
170, Exile_Item_BBQSandwich
190, Exile_Item_Surstromming
200, Exile_Item_Catfood

20, Exile_Item_ChristmasTinner_Cooked
20, Exile_Item_BBQSandwich_Cooked
20, Exile_Item_GloriousKnakworst_Cooked
20, Exile_Item_SausageGravy_Cooked
20, Exile_Item_Surstromming_Cooked
20, Exile_Item_Catfood_Cooked

// Pistols
80, hgun_ACPC2_F            // ACP-C2 .45
80, hgun_P07_F              // P07 9 mm
80, hgun_Rook40_F           // Rook-40 9 mm
50, hgun_Pistol_heavy_01_F  // 4-five .45
50, hgun_Pistol_heavy_02_F  // Zubr .45
50, hgun_Pistol_Signal_F    // Starter Pistol
50,hgun_mas_mp7_F
50,hgun_mas_uzi_F		
50,hgun_mas_sa61_F		
50,hgun_mas_m9_F
50,hgun_mas_bhp_F
50,hgun_mas_acp_F
50,hgun_mas_usp_F
50,hgun_mas_grach_F		
50,hgun_mas_mak_F


// Pistol Magazines
90, 11Rnd_45ACP_Mag       // 4-five
90, 16Rnd_9x21_Mag        // PDW2000, P07, ROOK-40
90, 30Rnd_9x21_Mag        // Sting, PDW2000, P07, ROOK-40
60, 6Rnd_45ACP_Cylinder   // Zubr
30, 6Rnd_GreenSignal_F    // Starter Pistol
30, 6Rnd_RedSignal_F      // Starter Pistol 
90, 9Rnd_45ACP_Mag        // ACP-C2

// Pistol Items
50, muzzle_snds_L
50, muzzle_snds_acp
20, optic_Yorris      // No one needs this crap
20, optic_MRD

// SMG Ammo
40, 30Rnd_45ACP_Mag_SMG_01                // Vermin SMG
40, 30Rnd_45ACP_Mag_SMG_01_Tracer_Green   // Vermin SMG

// SMGs
30, SMG_01_F        // Vermin SMG .45 ACP
30, SMG_02_F        // Sting 9 mm
30, hgun_PDW2000_F  // PDW2000 9 mm
50,arifle_mas_mp5
50,arifle_mas_mp5_v
50,arifle_mas_mp5_d
// SMG Items
50, optic_Holosight_smg
50, optic_ACO_grn_smg
50, optic_Aco_smg
50, optic_ACO_grn
50, optic_Aco
1, optic_Nightstalker

// Backpacks
75, B_OutdoorPack_blk
75, B_OutdoorPack_tan
75, B_OutdoorPack_blu

70, B_HuntingBackpack

60, B_AssaultPack_khk
60, B_AssaultPack_dgtl
60, B_AssaultPack_rgr
60, B_AssaultPack_sgg
60, B_AssaultPack_blk
60, B_AssaultPack_cbr
60, B_AssaultPack_mcamo
60, B_Kitbag_mcamo
60, B_Kitbag_sgg
60, B_Kitbag_cbr

50, B_FieldPack_blk
50, B_FieldPack_ocamo
50, B_FieldPack_oucamo
50, B_FieldPack_cbr
50, B_Bergen_sgg
50, B_Bergen_mcamo
50, B_Bergen_rgr
50, B_Bergen_blk

// Rifles
40, arifle_Katiba_F       // Katiba 6.5 mm
40, arifle_Katiba_GL_F    // Katiba GL 6.5 mm
30, arifle_SDAR_F         // SDAR 5.56 mm
40, arifle_TRG21_F        // TRG-21 5.56 mm
40, arifle_TRG20_F        // TRG-20 5.56 mm

// Rifle Items
30, muzzle_snds_M
30, muzzle_snds_H
30, optic_Arco
30, optic_Holosight
40, acc_flashlight
30, optic_MRCO
30, optic_DMS
5, optic_NVS
1, optic_tws

// Rifle Ammo
50, 20Rnd_556x45_UW_mag            // SDAR
70, 30Rnd_556x45_Stanag            // TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
70, 30Rnd_556x45_Stanag_Tracer_Green     // TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
70, 30Rnd_556x45_Stanag_Tracer_Red     // TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
70, 30Rnd_556x45_Stanag_Tracer_Yellow    // TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
70, 30Rnd_65x39_caseless_green       // Katiba
70, 30Rnd_65x39_caseless_green_mag_Tracer  // Katiba
50, 30Rnd_65x39_caseless_mag         // MX/C/M/SW/3GL
40, 30Rnd_65x39_caseless_mag_Tracer      // MX/C/M/SW/3GL
40,30Rnd_mas_556x45_Stanag 40,30Rnd_mas_556x45_T_Stanag 
40,20Rnd_mas_762x51_Stanag 40,20Rnd_mas_762x51_T_Stanag 


40,30Rnd_mas_9x21_Stanag
40,30Rnd_mas_9x21d_Stanag
40,200Rnd_mas_556x45_Stanag
40,200Rnd_mas_556x45_T_Stanag
40,100Rnd_mas_762x51_Stanag
40,100Rnd_mas_762x51_T_Stanag
15,150Rnd_762x51_Box
10,150Rnd_762x51_Box_Tracer
40,64Rnd_mas_9x18_mag
40,10Rnd_mas_12Gauge_Slug
40,10Rnd_mas_12Gauge_Pellets
40,10Rnd_mas_762x54_mag
40,10Rnd_mas_762x54_T_mag
40,30Rnd_mas_762x39_mag
40,30Rnd_mas_762x39_T_mag
40,100Rnd_mas_762x39_mag
40,100Rnd_mas_762x39_T_mag
40,5Rnd_mas_127x108_mag
40,5Rnd_mas_127x108_T_mag
40,30Rnd_mas_545x39_mag
40,30Rnd_mas_545x39_T_mag
40,100Rnd_mas_545x39_mag 
40,100Rnd_mas_545x39_T_mag
40,100Rnd_mas_762x54_mag 
40,100Rnd_mas_762x54_T_mag
40,25Rnd_mas_9x19_Mag
40,17Rnd_mas_9x21_Mag
40,15Rnd_mas_9x21_Mag
40,13Rnd_mas_9x21_Mag
40,20Rnd_mas_765x17_Mag
40,12Rnd_mas_45acp_Mag
40,10Rnd_mas_45acp_Mag
40,8Rnd_mas_45acp_Mag
40,8Rnd_mas_9x18_Mag
40,5Rnd_mas_762x51_Stanag 	
40,5Rnd_mas_762x51_T_Stanag
//MAGS 1.5
40,30Rnd_mas_9x39_mag
45,20Rnd_mas_9x39_mag
40,40Rnd_mas_46x30_Mag
// Items
15, Binocular
10, Exile_Item_CamoTentKit
65, Exile_Item_CookingPot
40, Exile_Item_DuctTape
40, Exile_Item_LightBulb
40, Exile_Item_Matches
15, Exile_Item_InstaDoc
25, ItemGPS

// Chem lights
100, Chemlight_blue
100, Chemlight_green
100, Chemlight_red
100, Chemlight_yellow

// Road flares
80, FlareGreen_F
80, FlareRed_F
80, FlareWhite_F
80, FlareYellow_F

// Uniforms
50, U_C_Poor_1
50, U_C_Poor_2
50, U_C_Poor_shorts_1
50, U_C_HunterBody_grn

40, U_C_Poloshirt_salmon
40, U_C_Poloshirt_tricolour
40, U_C_Poloshirt_stripped
40, U_C_Poloshirt_burgundy
40, U_C_Poloshirt_blue

// Guerilla Headgear
30, H_Booniehat_khk
30, H_Booniehat_indp
30, H_Booniehat_mcamo
30, H_Booniehat_grn
30, H_Booniehat_tan
30, H_Booniehat_dirty
30, H_Booniehat_dgtl
30, H_Booniehat_khk_hs

20, H_Bandanna_khk
20, H_Bandanna_khk_hs
20, H_Bandanna_cbr
20, H_Bandanna_sgg
20, H_Bandanna_gry
20, H_Bandanna_camo
20, H_Bandanna_mcamo
20, H_BandMask_blk

10, H_Beret_blk
10, H_Beret_red
10, H_Beret_grn
10, H_Beret_grn_SF
10, H_Beret_brn_SF
10, H_Beret_ocamo
10, H_Beret_02
10, H_Beret_Colonel

15, H_Hat_camo
15, H_Cap_brn_SPECOPS
15, H_Cap_tan_specops_US
15, H_Cap_khaki_specops_UK
15, H_Watchcap_blk
15, H_Watchcap_khk
15, H_Watchcap_camo
15, H_Watchcap_sgg
15, H_TurbanO_blk

10, H_Shemag_khk
10, H_Shemag_tan
10, H_Shemag_olive
10, H_Shemag_olive_hs
10, H_ShemagOpen_khk
10, H_ShemagOpen_tan

// Guerilla Vests
15, V_BandollierB_khk
15, V_BandollierB_cbr
15, V_BandollierB_rgr
15, V_BandollierB_blk
15, V_BandollierB_oli
10, V_Chestrig_khk
10, V_Chestrig_rgr
10, V_Chestrig_blk
10, V_Chestrig_oli
15, V_HarnessO_brn
15, V_HarnessOGL_brn
15, V_HarnessO_gry
15, V_HarnessOGL_gry
15, V_HarnessOSpec_brn
15, V_HarnessOSpec_gry

5, V_I_G_resistanceLeader_F

// Guerilla Uniforms
40, U_IG_Guerilla1_1
40, U_IG_Guerilla2_1
40, U_IG_Guerilla2_2
40, U_IG_Guerilla2_3
40, U_IG_Guerilla3_1
40, U_IG_Guerilla3_2

10, U_IG_leader
5, U_I_G_resistanceLeader_F

///////////////////////////////////////////////////////////////////////////////
// Apartments, Offices etc.
///////////////////////////////////////////////////////////////////////////////
> CivillianUpperClass

200, Exile_Item_PlasticBottleEmpty
50, Exile_Item_PlasticBottleFreshWater
30, Exile_Item_Energydrink
40, Exile_Item_Beer
150, Exile_Item_GloriousKnakworst
170, Exile_Item_SausageGravy
170, Exile_Item_ChristmasTinner
170, Exile_Item_BBQSandwich
190, Exile_Item_Surstromming
200, Exile_Item_Catfood
20, Exile_Item_ChristmasTinner_Cooked
20, Exile_Item_BBQSandwich_Cooked
20, Exile_Item_GloriousKnakworst_Cooked
20, Exile_Item_SausageGravy_Cooked
20, Exile_Item_Surstromming_Cooked
20, Exile_Item_Catfood_Cooked

// Pistols
80, hgun_ACPC2_F            // ACP-C2 .45
80, hgun_P07_F              // P07 9 mm
80, hgun_Rook40_F           // Rook-40 9 mm
50, hgun_Pistol_heavy_01_F  // 4-five .45
50, hgun_Pistol_heavy_02_F  // Zubr .45
50, hgun_Pistol_Signal_F    // Starter Pistol
50,hgun_mas_mp7_F
50,hgun_mas_uzi_F		
50,hgun_mas_sa61_F		
50,hgun_mas_m9_F
50,hgun_mas_bhp_F
50,hgun_mas_acp_F
50,hgun_mas_grach_F		
50,hgun_mas_mak_F
// Pistol Magazines
80, 11Rnd_45ACP_Mag      // 4-five
80, 16Rnd_9x21_Mag       // PDW2000, P07, ROOK-40
80, 30Rnd_9x21_Mag       // Sting, PDW2000, P07, ROOK-40
70, 6Rnd_45ACP_Cylinder  // Zubr
50, 6Rnd_GreenSignal_F   // Starter Pistol
50, 6Rnd_RedSignal_F     // Starter Pistol 
70, 9Rnd_45ACP_Mag       // ACP-C2

// Pistol Items
25, muzzle_snds_L
25, muzzle_snds_acp
10, optic_Yorris
10, optic_MRD

// Backpacks
85, B_OutdoorPack_blk
85, B_OutdoorPack_tan
85, B_OutdoorPack_blu
70, B_HuntingBackpack

// Uniforms
100, U_C_Poloshirt_salmon
100, U_C_Poloshirt_tricolour
100, U_C_Poloshirt_stripped
100, U_C_Poloshirt_burgundy
100, U_C_Poloshirt_blue

50, U_C_Journalist
50, U_C_Scientist
50, U_Rangemaster

5, U_OrestesBody
5, U_NikosBody
5, U_NikosAgedBody

// Vests
50, V_Rangemaster_belt
50, V_Press_F
50, V_TacVest_blk_POLICE

// Headgear
60, H_Bandanna_surfer
60, H_Beret_blk_POLICE
60, H_Cap_blk
60, H_Cap_blk_Raven
60, H_Cap_blu
60, H_Cap_grn
60, H_Cap_headphones
60, H_Cap_oli
60, H_Cap_press
60, H_Cap_red
60, H_Cap_tan
60, H_Hat_blue
60, H_Hat_brown
60, H_Hat_checker
60, H_Hat_grey
60, H_Hat_tan
60, H_StrawHat
60, H_StrawHat_dark

// Rifles
70, arifle_Katiba_F       // Katiba 6.5 mm
60, arifle_MXC_F          // MXC 6.5 mm
60, arifle_MX_F           // MX 6.5 mm
60, arifle_MX_GL_F        // MX 3GL 6.5 mm
50, arifle_MXM_F          // MXM 6.5 mm
50, arifle_SDAR_F         // SDAR 5.56 mm
70, arifle_TRG21_F        // TRG-21 5.56 mm
70, arifle_TRG20_F        // TRG-20 5.56 mm
70, arifle_Mk20_F         // Mk20 5.56 mm
70, arifle_Mk20C_F        // Mk20C 5.56 mm

// Rifle Items
25, muzzle_snds_M
25, muzzle_snds_H
40, optic_Arco
40, optic_Holosight
70, acc_flashlight
60, optic_MRCO
60, optic_DMS
5, optic_NVS
1, optic_Nightstalker
1, optic_tws

// Rifle Ammo
60, 20Rnd_556x45_UW_mag                     // SDAR
80, 30Rnd_556x45_Stanag                     // TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
50, 30Rnd_556x45_Stanag_Tracer_Green        // TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
50, 30Rnd_556x45_Stanag_Tracer_Red          // TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
50, 30Rnd_556x45_Stanag_Tracer_Yellow       // TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
80, 30Rnd_65x39_caseless_green              // Katiba
50, 30Rnd_65x39_caseless_green_mag_Tracer   // Katiba
80, 30Rnd_65x39_caseless_mag                // MX/C/M/SW/3GL
50, 30Rnd_65x39_caseless_mag_Tracer         // MX/C/M/SW/3GL
40,30Rnd_mas_556x45_Stanag 40,30Rnd_mas_556x45_T_Stanag 
40,20Rnd_mas_762x51_Stanag 40,20Rnd_mas_762x51_T_Stanag 


40,30Rnd_mas_9x21_Stanag
40,30Rnd_mas_9x21d_Stanag
40,200Rnd_mas_556x45_Stanag
40,200Rnd_mas_556x45_T_Stanag
40,100Rnd_mas_762x51_Stanag
40,100Rnd_mas_762x51_T_Stanag
15,150Rnd_762x51_Box
10,150Rnd_762x51_Box_Tracer
40,64Rnd_mas_9x18_mag
40,10Rnd_mas_12Gauge_Slug
40,10Rnd_mas_12Gauge_Pellets
40,10Rnd_mas_762x54_mag
40,10Rnd_mas_762x54_T_mag
40,30Rnd_mas_762x39_mag
40,30Rnd_mas_762x39_T_mag
40,100Rnd_mas_762x39_mag
40,100Rnd_mas_762x39_T_mag
40,5Rnd_mas_127x108_mag
40,5Rnd_mas_127x108_T_mag
40,30Rnd_mas_545x39_mag
40,30Rnd_mas_545x39_T_mag
40,100Rnd_mas_545x39_mag 
40,100Rnd_mas_545x39_T_mag
40,100Rnd_mas_762x54_mag 
40,100Rnd_mas_762x54_T_mag
40,25Rnd_mas_9x19_Mag
40,17Rnd_mas_9x21_Mag
40,15Rnd_mas_9x21_Mag
40,13Rnd_mas_9x21_Mag
40,20Rnd_mas_765x17_Mag
40,12Rnd_mas_45acp_Mag
40,10Rnd_mas_45acp_Mag
40,8Rnd_mas_45acp_Mag
40,8Rnd_mas_9x18_Mag
40,5Rnd_mas_762x51_Stanag 	
40,5Rnd_mas_762x51_T_Stanag
//MAGS 1.5
40,30Rnd_mas_9x39_mag
45,20Rnd_mas_9x39_mag
40,40Rnd_mas_46x30_Mag
///////////////////////////////////////////////////////////////////////////////
// Kiosks, Supermarkets etc.
///////////////////////////////////////////////////////////////////////////////
> Shop

// Smoke Nades
 50, SmokeShell
 50, SmokeShellRed
 50, SmokeShellGreen
 50, SmokeShellYellow
 50, SmokeShellPurple
 50, SmokeShellBlue
 50, SmokeShellOrange

// Pistols
80, hgun_ACPC2_F            // ACP-C2 .45
80, hgun_P07_F              // P07 9 mm
80, hgun_Rook40_F           // Rook-40 9 mm
50, hgun_Pistol_heavy_01_F  // 4-five .45
50, hgun_Pistol_heavy_02_F  // Zubr .45
50, hgun_Pistol_Signal_F    // Starter Pistol
50,hgun_mas_mp7_F
50,hgun_mas_uzi_F		
50,hgun_mas_sa61_F		
50,hgun_mas_m9_F
50,hgun_mas_bhp_F
50,hgun_mas_acp_F
50,hgun_mas_grach_F		
50,hgun_mas_mak_F
// Pistol Magazines
80, 11Rnd_45ACP_Mag    // 4-five
80, 16Rnd_9x21_Mag       // PDW2000, P07, ROOK-40
80, 30Rnd_9x21_Mag       // Sting, PDW2000, P07, ROOK-40
70, 6Rnd_45ACP_Cylinder  // Zubr
60, 6Rnd_GreenSignal_F     // Starter Pistol
60, 6Rnd_RedSignal_F   // Starter Pistol 
80, 9Rnd_45ACP_Mag       // ACP-C2

// SMG Items
50, optic_Holosight_smg
50, optic_ACO_grn_smg
50, optic_Aco_smg
50, optic_ACO_grn
50, optic_Aco
1, optic_Nightstalker

// Pistol Items
25, muzzle_snds_L
25, muzzle_snds_acp
10, optic_Yorris
10, optic_MRD

200, Exile_Item_PlasticBottleEmpty
50, Exile_Item_PlasticBottleFreshWater
30, Exile_Item_Energydrink
40, Exile_Item_Beer
150, Exile_Item_GloriousKnakworst
170, Exile_Item_SausageGravy
170, Exile_Item_ChristmasTinner
170, Exile_Item_BBQSandwich
190, Exile_Item_Surstromming
200, Exile_Item_Catfood

20, Exile_Item_ChristmasTinner_Cooked
20, Exile_Item_BBQSandwich_Cooked
20, Exile_Item_GloriousKnakworst_Cooked
20, Exile_Item_SausageGravy_Cooked
20, Exile_Item_Surstromming_Cooked
20, Exile_Item_Catfood_Cooked

15, Binocular
10, Exile_Item_CamoTentKit
65, Exile_Item_CookingPot
40, Exile_Item_DuctTape
80, Exile_Item_LightBulb
40, Exile_Item_Matches
50, Exile_Item_InstaDoc
25, ItemGPS

///////////////////////////////////////////////////////////////////////////////
// Factories, Construction Sites, Warehouses, Research etc.
///////////////////////////////////////////////////////////////////////////////
> Industrial

10, Exile_Item_DuctTape
30, Exile_Item_ExtensionCord
5, Exile_Item_FloodLightKit
50, Exile_Item_FuelCanisterEmpty
40, Exile_Item_FuelCanisterFull
25, Exile_Item_JunkMetal
20, Exile_Item_LightBulb
10, Exile_Item_MetalBoard
5, Exile_Item_PortableGeneratorKit
10, Exile_Item_Rope
10, Exile_Magazine_Battery
50, Exile_Melee_Axe

///////////////////////////////////////////////////////////////////////////////
// Fuel Stations, Garages, Workshops etc.
///////////////////////////////////////////////////////////////////////////////
> VehicleService

10, Exile_Item_DuctTape
50, Exile_Item_FuelCanisterEmpty
40, Exile_Item_FuelCanisterFull
25, Exile_Item_JunkMetal
20, Exile_Item_LightBulb
10, Exile_Item_MetalBoard
10, Exile_Magazine_Battery

///////////////////////////////////////////////////////////////////////////////
// Towers, Barracks, Hangars etc.
///////////////////////////////////////////////////////////////////////////////
> Military

// LMGs
50, arifle_MX_SW_Black_F   // MX SW 6.5 mm (Black)
50, arifle_MX_SW_F       // MX SW 6.5 mm
50, LMG_Mk200_F        // Mk200 6.5 mm
50, LMG_Zafir_F        // Zafir 7.62 mm
50,LMG_mas_M60_F
50,LMG_mas_rpk_F		 
50,LMG_mas_pkm_F
50,LMG_mas_m72_F
50,LMG_mas_M249_F
50,LMG_mas_M249_F_v
50,LMG_mas_M249_F_d
50,LMG_mas_M249a_F			
50,LMG_mas_Mk48_F
50,LMG_mas_Mk48_F_v
50,LMG_mas_Mk48_F_d		
50,LMG_mas_mg3_F

80, hgun_ACPC2_F            // ACP-C2 .45
80, hgun_P07_F              // P07 9 mm
80, hgun_Rook40_F           // Rook-40 9 mm
50, hgun_Pistol_heavy_01_F  // 4-five .45
50, hgun_Pistol_heavy_02_F  // Zubr .45
50, hgun_Pistol_Signal_F    // Starter Pistol
50,hgun_mas_mp7_F
50,hgun_mas_uzi_F		
50,hgun_mas_sa61_F		
50,hgun_mas_m9_F
50,hgun_mas_bhp_F
50,hgun_mas_acp_F
50,hgun_mas_grach_F		
50,hgun_mas_mak_F
// SMGs
30, SMG_01_F        // Vermin SMG .45 ACP
30, SMG_02_F        // Sting 9 mm
30, hgun_PDW2000_F  // PDW2000 9 mm
50,arifle_mas_mp5
50,arifle_mas_mp5_v
50,arifle_mas_mp5_d
// SMG Items
50, optic_Holosight_smg
50, optic_ACO_grn_smg
50, optic_Aco_smg
50, optic_ACO_grn
50, optic_Aco
1, optic_Nightstalker
// LMG Ammo
70, 100Rnd_65x39_caseless_mag      // MX SW
60, 100Rnd_65x39_caseless_mag_Tracer   // MX SW
70, 150Rnd_762x54_Box          // Zafir
60, 150Rnd_762x54_Box_Tracer       // Zafir
//60, 200Rnd_65x39_Belt          // Mk200
//50, 200Rnd_65x39_Belt_Tracer_Green   // Mk200
//50, 200Rnd_65x39_Belt_Tracer_Red     // Mk200
//50, 200Rnd_65x39_Belt_Tracer_Yellow    // Mk200
30, 130Rnd_338_Mag
300, 150Rnd_93x64_Mag

// Rifles
80, arifle_Katiba_F    // Katiba 6.5 mm
70, arifle_Katiba_GL_F   // Katiba GL 6.5 mm
70, arifle_MXC_F     // MXC 6.5 mm
70, arifle_MX_F      // MX 6.5 mm
35, arifle_MX_GL_F     // MX 3GL 6.5 mm
50, arifle_MXM_F     // MXM 6.5 mm
20, arifle_MXM_Black_F // MXM 6.5 mm (Black)
60, arifle_SDAR_F    // SDAR 5.56 mm
70, arifle_TRG21_F     // TRG-21 5.56 mm
70, arifle_TRG20_F     // TRG-20 5.56 mm
30, arifle_TRG21_GL_F  // TRG-21 EGLM 5.56 mm
60, arifle_Mk20_F    // Mk20 5.56 mm
60, arifle_Mk20C_F   // Mk20C 5.56 mm
30, arifle_Mk20_GL_F   // Mk20 EGLM 5.56 mm
20, arifle_MXC_Black_F   // MXC 6.5 mm (Black)
20, arifle_MX_Black_F  // MX 6.5 mm (Black)
20, arifle_MX_GL_Black_F // MX 3GL 6.5 mm (Black)
50,arifle_Katiba_C_F
50,arifle_Mk20_GL_plain_F
50,arifle_Mk20_plain_F
50,arifle_Mk20C_plain_F
50,arifle_mas_lee
50,arifle_mas_m14
50,arifle_mas_g36c
50,arifle_mas_aks74u
50,arifle_mas_aks74u_c
50,arifle_mas_ak_74m
50,arifle_mas_ak_74m_gl
50,arifle_mas_ak_74m_c
50,arifle_mas_ak_74m_gl_c		
50,arifle_mas_aks74		
50,arifle_mas_ak_74m_sf
50,arifle_mas_ak_74m_sf_gl
	50,arifle_mas_ak_74m_sf_c
	50,arifle_mas_ak_74m_sf_gl_c		
	50,arifle_mas_akm
	50,arifle_mas_akms
	50,arifle_mas_akms_gl
	50,arifle_mas_akms_c
	50,arifle_mas_akms_gl_c		
	50,arifle_mas_bizon		
	50,arifle_mas_saiga		
	50,arifle_mas_m1014
	50,arifle_mas_hk416
	50,arifle_mas_hk416_gl
	50,arifle_mas_hk416_v
	50,arifle_mas_hk416_gl_v
	50,arifle_mas_hk416_d
	50,arifle_mas_hk416_gl_d
	50,arifle_mas_hk416c
	50,arifle_mas_hk416c_v
	50,arifle_mas_hk416c_d	
	50,arifle_mas_hk417c
	50,arifle_mas_hk417_m203c
	50,arifle_mas_hk417c_v
	50,arifle_mas_hk417_m203c_v
	50,arifle_mas_hk417c_d
	50,arifle_mas_hk417_m203c_d
	50,arifle_mas_m4
	50,arifle_mas_m4_gl
	50,arifle_mas_m4_v
	50,arifle_mas_m4_gl_v
	50,arifle_mas_m4_d
	50,arifle_mas_m4_gl_d
	50,arifle_mas_m4c
	50,arifle_mas_m4c_v
	50,arifle_mas_m4c_d		
	50,arifle_mas_m16
	50,arifle_mas_m16_gl		
	50,arifle_mas_l119
	50,arifle_mas_l119_gl
	50,arifle_mas_l119_v
	50,arifle_mas_l119_gl_v
	50,arifle_mas_l119_d
	50,arifle_mas_l119_gl_d
	50,arifle_mas_l119c
	50,arifle_mas_l119c_v
	50,arifle_mas_l119c_d		
	50,arifle_mas_mk16
	50,arifle_mas_mk16_gl
	50,arifle_mas_mk16_l
	50,arifle_mas_mk16_l_gl		
	50,arifle_mas_mk17
	50,arifle_mas_mk17_gl	
	50,srifle_mas_mk17s
	50,arifle_mas_g3
	50,arifle_mas_g3s	
	50,arifle_mas_fal
	


	 
//SILENCERS
40,muzzle_mas_snds_L 
40,muzzle_mas_snds_LM 
40,muzzle_mas_snds_C 
40,muzzle_mas_snds_M 
40,muzzle_mas_snds_Mc 
40,muzzle_mas_snds_AK 
40,muzzle_mas_snds_SM
40,muzzle_mas_snds_SMc
40,muzzle_mas_snds_SH 
40,muzzle_mas_snds_SHc 
40,muzzle_mas_snds_SV 
40,muzzle_mas_snds_SVc 
40,muzzle_mas_snds_SVD 
40,muzzle_mas_snds_KSVK 
40,muzzle_snds_acp
40,muzzle_snds_H_MG
40,muzzle_snds_L
	 
// Rifle Items
25, muzzle_snds_M
25, muzzle_snds_H
50, optic_Arco
50, optic_Holosight
50, optic_MRCO
70, acc_flashlight
5, optic_NVS
1, optic_tws
1, optic_tws_mg

// Rifle Ammo
35, 20Rnd_556x45_UW_mag            // SDAR
50, 30Rnd_556x45_Stanag            // TRG-50, TRG-21/EGLM, Mk20/C/EGLM, SDAR
40, 30Rnd_556x45_Stanag_Tracer_Green     // TRG-50, TRG-21/EGLM, Mk20/C/EGLM, SDAR
40, 30Rnd_556x45_Stanag_Tracer_Red     // TRG-50, TRG-21/EGLM, Mk20/C/EGLM, SDAR
40, 30Rnd_556x45_Stanag_Tracer_Yellow    // TRG-50, TRG-21/EGLM, Mk20/C/EGLM, SDAR
50, 30Rnd_65x39_caseless_green       // Katiba
40, 30Rnd_65x39_caseless_green_mag_Tracer  // Katiba
50, 30Rnd_65x39_caseless_mag         // MX/C/M/SW/3GL
40, 30Rnd_65x39_caseless_mag_Tracer      // MX/C/M/SW/3GL
40,30Rnd_mas_556x45_Stanag 40,30Rnd_mas_556x45_T_Stanag 
40,20Rnd_mas_762x51_Stanag 40,20Rnd_mas_762x51_T_Stanag 


40,30Rnd_mas_9x21_Stanag
40,30Rnd_mas_9x21d_Stanag
40,200Rnd_mas_556x45_Stanag
40,200Rnd_mas_556x45_T_Stanag
40,100Rnd_mas_762x51_Stanag
40,100Rnd_mas_762x51_T_Stanag
15,150Rnd_762x51_Box
10,150Rnd_762x51_Box_Tracer
40,64Rnd_mas_9x18_mag
40,10Rnd_mas_12Gauge_Slug
40,10Rnd_mas_12Gauge_Pellets
40,10Rnd_mas_762x54_mag
40,10Rnd_mas_762x54_T_mag
40,30Rnd_mas_762x39_mag
40,30Rnd_mas_762x39_T_mag
40,100Rnd_mas_762x39_mag
40,100Rnd_mas_762x39_T_mag
40,5Rnd_mas_127x108_mag
40,5Rnd_mas_127x108_T_mag
40,30Rnd_mas_545x39_mag
40,30Rnd_mas_545x39_T_mag
40,100Rnd_mas_545x39_mag 
40,100Rnd_mas_545x39_T_mag
40,100Rnd_mas_762x54_mag 
40,100Rnd_mas_762x54_T_mag
40,25Rnd_mas_9x19_Mag
40,17Rnd_mas_9x21_Mag
40,15Rnd_mas_9x21_Mag
40,13Rnd_mas_9x21_Mag
40,20Rnd_mas_765x17_Mag
40,12Rnd_mas_45acp_Mag
40,10Rnd_mas_45acp_Mag
40,8Rnd_mas_45acp_Mag
40,8Rnd_mas_9x18_Mag
40,5Rnd_mas_762x51_Stanag 	
40,5Rnd_mas_762x51_T_Stanag
//MAGS 1.5
40,30Rnd_mas_9x39_mag
45,20Rnd_mas_9x39_mag
40,40Rnd_mas_46x30_Mag
 

//SCOPES
40,optic_mas_zeiss 
40,optic_mas_zeiss_c 
40,optic_mas_zeiss_eo 
40,optic_mas_zeiss_eo_c 
40,optic_mas_acog 
40,optic_mas_acog_c 
40,optic_mas_acog_eo 
40,optic_mas_acog_eo_c 
40,optic_mas_acog_rd 
40,optic_mas_acog_rd_c 
40,optic_mas_handle 
40,optic_mas_aim 
40,optic_mas_aim_c 
40,optic_mas_pso 
40,optic_mas_pso_c 
40,optic_mas_pso_eo 
40,optic_mas_pso_eo_c 
40,optic_mas_pso_nv 
40,optic_mas_pso_nv_c 
40,optic_mas_pso_nv_eo 
40,optic_mas_pso_nv_eo_c
40,optic_mas_term 
40,acc_mas_pointer_IR 
40,optic_mas_DMS 
40,optic_mas_DMS_c 
40,optic_mas_Holosight_blk 
40,optic_mas_Holosight_camo 
40,optic_mas_Arco_blk 
40,optic_mas_Arco_camo 
40,optic_mas_Hamr_camo 
40,optic_mas_Aco_camo 
40,optic_mas_ACO_grn_camo 
40,optic_mas_MRCO_camo

//MAS 1.5 
40,acc_mas_pointer_IR_top
40,acc_mas_pointer_IR2
40,acc_mas_pointer_IR2_top
40,acc_mas_pointer_IR2c
40,acc_mas_pointer_IR2c_top
40,muzzle_mas_snds_MP5SD6
40,muzzle_mas_snds_MP7
40,optic_mas_PSO_day
40,optic_mas_PSO_nv_day
40,optic_mas_LRPS
40,G_mas_wpn_gog
40,G_mas_wpn_gog_d
40,G_mas_wpn_gog_m
40,G_mas_wpn_gog_md
40,G_mas_wpn_gog_g
40,G_mas_wpn_gog_gd
40,G_mas_wpn_mask
40,G_mas_wpn_mask_b
40,G_mas_wpn_wrap
40,G_mas_wpn_wrap_f
40,G_mas_wpn_wrap_t
40,G_mas_wpn_wrap_b
40,G_mas_wpn_wrap_c
40,G_mas_wpn_wrap_g
40,G_mas_wpn_wrap_gog
40,G_mas_wpn_wrap_gog_f
40,G_mas_wpn_wrap_gog_t
40,G_mas_wpn_wrap_gog_b
40,G_mas_wpn_wrap_gog_c
40,G_mas_wpn_wrap_gog_g
40,G_mas_wpn_wrap_mask
40,G_mas_wpn_wrap_mask_t
40,G_mas_wpn_wrap_mask_f
40,G_mas_wpn_wrap_mask_b
40,G_mas_wpn_wrap_mask_c
40,G_mas_wpn_wrap_mask_g
40,G_mas_wpn_bala
40,G_mas_wpn_bala_b
40,G_mas_wpn_bala_t
40,G_mas_wpn_bala_gog
40,G_mas_wpn_bala_gog_b
40,G_mas_wpn_bala_gog_t
40,G_mas_wpn_bala_mask
40,G_mas_wpn_bala_mask_b
40,G_mas_wpn_bala_mask_t
40,G_mas_wpn_shemag
40,G_mas_wpn_shemag_r
40,G_mas_wpn_shemag_w
40,G_mas_wpn_shemag_gog
40,G_mas_wpn_shemag_mask
40,NVGoggles_mas_h
40,Rangefinder_mas_h



// Snipers
25, srifle_DMR_01_F  // Rahim 7.62 mm
25, srifle_EBR_F // Mk18 ABR 7.62 mm
20, srifle_GM6_F   // GM6 Lynx 12.7 mm
20, srifle_LRR_F // M320 LRR .408
			30,srifle_DMR_02_camo_F
			25,srifle_DMR_02_F
			25,srifle_DMR_02_sniper_F
			25,srifle_DMR_03_F
			25,srifle_DMR_03_khaki_F
			25,srifle_DMR_03_multicam_F
			25,srifle_DMR_03_tan_F
			25,srifle_DMR_03_woodland_F
			25,srifle_DMR_04_F
			25,srifle_DMR_04_Tan_F
			25,srifle_DMR_05_blk_F
			25,srifle_DMR_05_hex_F
			25,srifle_DMR_05_tan_f
			25,srifle_DMR_06_camo_F
			25,srifle_DMR_06_olive_F
			25,srifle_GM6_camo_F
			25,srifle_LRR_camo_F
			25,srifle_mas_sr25_d
			25,srifle_mas_lrr
			25,srifle_mas_svd		
			25,srifle_mas_ksvk
			25,srifle_mas_ksvk_c
			25,srifle_mas_m91
	25,srifle_mas_ebr		
	25,srifle_mas_m110		
	25,srifle_mas_m107
	25,srifle_mas_m107_v
	25,srifle_mas_m107_d		
	25,srifle_mas_m24
	25,srifle_mas_m24_v
	25,srifle_mas_m24_d

// Sniper Ammo
25, 5Rnd_127x108_Mag     // GM6 Lynx
25, 7Rnd_408_Mag       // M320 LRR
40, 10Rnd_762x51_Mag     // Rahim
40, 20Rnd_762x51_Mag     // Mk18 ABR
15, 5Rnd_127x108_APDS_Mag  // GM6 Lynx 

// Sniper Items
25, muzzle_snds_B
35, optic_DMS
35, optic_SOS
35, optic_LRPS

// Noob Tube Nades
30, 1Rnd_HE_Grenade_shell
15, 3Rnd_HE_Grenade_shell

// Smoke Nades
35, SmokeShell
35, SmokeShellRed
35, SmokeShellGreen
35, SmokeShellYellow
35, SmokeShellPurple
35, SmokeShellBlue
35, SmokeShellOrange

// Noob Tube Flares
15, 3Rnd_UGL_FlareGreen_F
15, 3Rnd_UGL_FlareRed_F
15, 3Rnd_UGL_FlareWhite_F
15, 3Rnd_UGL_FlareYellow_F
35, UGL_FlareGreen_F
35, UGL_FlareRed_F
35, UGL_FlareWhite_F
35, UGL_FlareYellow_F
20,1Rnd_HE_Grenade_shell 20,UGL_FlareWhite_F 20,UGL_FlareGreen_F 20,UGL_FlareRed_F 20,UGL_FlareYellow_F 20,UGL_FlareCIR_F 20,1Rnd_Smoke_Grenade_shell 20,1Rnd_SmokeRed_Grenade_shell 20,1Rnd_SmokeGreen_Grenade_shell 20,1Rnd_SmokeYellow_Grenade_shell 20,1Rnd_SmokePurple_Grenade_shell 20,1Rnd_SmokeBlue_Grenade_shell 20,1Rnd_SmokeOrange_Grenade_shell 20,3Rnd_HE_Grenade_shell 20,3Rnd_UGL_FlareWhite_F 20,3Rnd_UGL_FlareGreen_F 20,3Rnd_UGL_FlareRed_F 20,3Rnd_UGL_FlareYellow_F 20,3Rnd_UGL_FlareCIR_F 20,3Rnd_Smoke_Grenade_shell 20,3Rnd_SmokeRed_Grenade_shell 20,3Rnd_SmokeGreen_Grenade_shell 20,3Rnd_SmokeYellow_Grenade_shell 20,3Rnd_SmokePurple_Grenade_shell 20,3Rnd_SmokeBlue_Grenade_shell 20,3Rnd_SmokeOrange_Grenade_shell
// No Infrared for now
//UGL_FlareCIR_F    
//3Rnd_UGL_FlareCIR_F

// Noob Tube Smokes
35, 1Rnd_Smoke_Grenade_shell
35, 1Rnd_SmokeBlue_Grenade_shell
35, 1Rnd_SmokeGreen_Grenade_shell
35, 1Rnd_SmokeOrange_Grenade_shell
35, 1Rnd_SmokePurple_Grenade_shell
35, 1Rnd_SmokeRed_Grenade_shell
35, 1Rnd_SmokeYellow_Grenade_shell
15, 3Rnd_Smoke_Grenade_shell
15, 3Rnd_SmokeBlue_Grenade_shell
15, 3Rnd_SmokeGreen_Grenade_shell
15, 3Rnd_SmokeOrange_Grenade_shell
15, 3Rnd_SmokePurple_Grenade_shell
15, 3Rnd_SmokeRed_Grenade_shell
15, 3Rnd_SmokeYellow_Grenade_shell

// Explosives
25, HandGrenade
25, MiniGrenade

// Items
70, Binocular
50, ItemRadio
40, ItemGPS
50, NVGoggles
50, Exile_Item_InstaDoc

// Backpacks
70, B_OutdoorPack_blk
70, B_OutdoorPack_tan
70, B_OutdoorPack_blu
60, B_HuntingBackpack

50, B_AssaultPack_khk
50, B_AssaultPack_dgtl
50, B_AssaultPack_rgr
50, B_AssaultPack_sgg
50, B_AssaultPack_blk
50, B_AssaultPack_cbr
50, B_AssaultPack_mcamo

40, B_Kitbag_mcamo
40, B_Kitbag_sgg
40, B_Kitbag_cbr

20, B_FieldPack_blk
20, B_FieldPack_ocamo
20, B_FieldPack_oucamo
20, B_FieldPack_cbr

15, B_Bergen_sgg
15, B_Bergen_mcamo
15, B_Bergen_rgr
15, B_Bergen_blk

// Headgear
70, H_MilCap_ocamo
70, H_MilCap_mcamo
70, H_MilCap_oucamo
70, H_MilCap_blue
70, H_MilCap_rucamo
70, H_MilCap_dgtl

// Does not exist in ARMA anymore?
//  H_HelmetB_plain_mcamo

70, H_HelmetB
70, H_HelmetB_paint
70, H_HelmetB_light
70, H_HelmetB_plain_blk
70, H_HelmetSpecB
70, H_HelmetSpecB_paint1
70, H_HelmetSpecB_paint2
70, H_HelmetSpecB_blk
70, H_HelmetIA
70, H_HelmetIA_net
70, H_HelmetIA_camo
70, H_HelmetB_grass
70, H_HelmetB_snakeskin
70, H_HelmetB_desert
70, H_HelmetB_black
70, H_HelmetB_sand
70, H_HelmetB_light_grass
70, H_HelmetB_light_snakeskin
70, H_HelmetB_light_desert
70, H_HelmetB_light_black
70, H_HelmetB_light_sand

40, H_HelmetCrew_B
40, H_HelmetCrew_O
40, H_HelmetCrew_I

30, H_PilotHelmetFighter_B
30, H_PilotHelmetFighter_O
30, H_PilotHelmetFighter_I

30, H_PilotHelmetHeli_B
30, H_PilotHelmetHeli_O
30, H_PilotHelmetHeli_I

25, H_HelmetB_camo

30, H_CrewHelmetHeli_B
30, H_CrewHelmetHeli_O
30, H_CrewHelmetHeli_I

25, H_BandMask_khk
25, H_BandMask_reaper
25, H_BandMask_demon

10, H_HelmetO_oucamo
10, H_HelmetLeaderO_oucamo
10, H_HelmetSpecO_ocamo
10, H_HelmetSpecO_blk
10, H_HelmetO_ocamo
10, H_HelmetLeaderO_ocamo

// Vests
70, V_Rangemaster_belt
70, V_PlateCarrier1_blk
70, V_PlateCarrier1_rgr
70, V_PlateCarrier2_rgr
70, V_PlateCarrier3_rgr
70, V_PlateCarrierGL_rgr
70, V_PlateCarrierIA1_dgtl
70, V_PlateCarrierIA2_dgtl
70, V_PlateCarrierIAGL_dgtl
70, V_PlateCarrierSpec_rgr

50, V_TacVest_blk
50, V_TacVest_brn
50, V_TacVest_camo
50, V_TacVest_khk
50, V_TacVest_oli
50, V_TacVestCamo_khk
50, V_TacVestIR_blk

30, V_RebreatherB
30, V_RebreatherIR
30, V_RebreatherIA

10, V_PlateCarrierL_CTRG
10, V_PlateCarrierH_CTRG
// Uniforms
70, U_B_CTRG_1             // CTRG Combat Uniform (UBACS)
70, U_B_CTRG_2             // CTRG Combat Uniform (UBACS2)
70, U_B_CTRG_3             // CTRG Combat Uniform (Tee)
50, U_B_CombatUniform_mcam       // Combat Fatigues (MTP)
70, U_B_CombatUniform_mcam_tshirt  // Combat Fatigues (MTP) (Tee)
70, U_B_CombatUniform_mcam_vest  // Recon Fatigues (MTP)
90, U_B_CombatUniform_mcam_worn  // Worn Combat Fatigues (MTP)
30, U_B_SpecopsUniform_sgg       // Specop Fatigues (Sage)
20, U_O_OfficerUniform_ocamo     // Officer Fatigues (Hex)
20, U_I_OfficerUniform         // Combat Fatigues [AAF] (Tee)
35, U_I_CombatUniform        // Combat Fatigues [AAF]
35, U_I_CombatUniform_tshirt     // Combat Fatigues [AAF] (Tee)
35, U_I_CombatUniform_shortsleeve  // Combat Fatigues [AAF]

15, U_B_GhillieSuit        // Ghillie Suit [NATO]
15, U_O_GhillieSuit        // Ghillie Suit [CSAT]
15, U_I_GhillieSuit        // Ghillie Suit [AAF]

35, U_B_HeliPilotCoveralls       // Heli Pilot Coveralls
35, U_O_PilotCoveralls         // Pilot Coveralls [CSAT]
35, U_B_PilotCoveralls         // Pilot Coveralls [NATO]
35, U_I_pilotCoveralls         // Pilot Coveralls [AAF]
35, U_I_HeliPilotCoveralls       // Heli Pilot Coveralls

25, U_B_Wetsuit          // Wetsuit [NATO]
25, U_O_Wetsuit          // Wetsuit [CSAT]
25, U_I_Wetsuit          // Wetsuit [AAF]

15, U_O_CombatUniform_ocamo    // Heli Pilot Coveralls
15, U_O_CombatUniform_oucamo     // Fatigues (Urban) [CSAT]
15, U_O_SpecopsUniform_ocamo     // Recon Fatigues (Hex)
15, U_O_SpecopsUniform_blk       // Recon Fatigues (Black)    

///////////////////////////////////////////////////////////////////////////////
// Hospital, Medevac etc.
///////////////////////////////////////////////////////////////////////////////
> Medical

100, Exile_Item_InstaDoc

///////////////////////////////////////////////////////////////////////////////
// Light Houses + Life Guard Towers + Castles
///////////////////////////////////////////////////////////////////////////////
> Tourist

// The ONLY place to find the BEST backpacks :)
10, B_Carryall_ocamo
10, B_Carryall_oucamo
10, B_Carryall_mcamo
10, B_Carryall_oli
10, B_Carryall_khk
10, B_Carryall_cbr

// Snipers
80, srifle_DMR_01_F  // Rahim 7.62 mm
80, srifle_EBR_F // Mk18 ABR 7.62 mm
70, srifle_GM6_F   // GM6 Lynx 12.7 mm
70, srifle_LRR_F // M320 LRR .408
70,srifle_mas_m91 
70,LMG_mas_m72_F
70,srifle_mas_svd 
70,srifle_mas_ksvk 
60,srifle_mas_m107
70,srifle_mas_hk417 
70,srifle_mas_sr25 
70,srifle_mas_ebr 
70,srifle_mas_m110 
70,srifle_mas_m24 



// Sniper Ammo
50, 5Rnd_127x108_Mag     // GM6 Lynx
50, 7Rnd_408_Mag       // M320 LRR
60, 10Rnd_762x51_Mag     // Rahim
60, 20Rnd_762x51_Mag     // Mk18 ABR
40, 5Rnd_127x108_APDS_Mag  // GM6 Lynx 

40,30Rnd_mas_9x21_Stanag
40,30Rnd_mas_9x21d_Stanag
40,200Rnd_mas_556x45_Stanag
40,200Rnd_mas_556x45_T_Stanag
40,100Rnd_mas_762x51_Stanag
40,100Rnd_mas_762x51_T_Stanag
40,64Rnd_mas_9x18_mag
40,10Rnd_mas_12Gauge_Slug
40,10Rnd_mas_12Gauge_Pellets
40,10Rnd_mas_762x54_mag
40,10Rnd_mas_762x54_T_mag
40,30Rnd_mas_762x39_mag
40,30Rnd_mas_762x39_T_mag
40,100Rnd_mas_762x39_mag
40,100Rnd_mas_762x39_T_mag
40,5Rnd_mas_127x108_mag
40,5Rnd_mas_127x108_T_mag
40,30Rnd_mas_545x39_mag
40,30Rnd_mas_545x39_T_mag
40,100Rnd_mas_545x39_mag 
40,100Rnd_mas_545x39_T_mag
40,100Rnd_mas_762x54_mag 
40,100Rnd_mas_762x54_T_mag
40,25Rnd_mas_9x19_Mag
40,17Rnd_mas_9x21_Mag
40,15Rnd_mas_9x21_Mag
40,13Rnd_mas_9x21_Mag
40,20Rnd_mas_765x17_Mag
40,12Rnd_mas_45acp_Mag
40,10Rnd_mas_45acp_Mag
40,8Rnd_mas_45acp_Mag
40,8Rnd_mas_9x18_Mag
40,5Rnd_mas_762x51_Stanag 	
40,5Rnd_mas_762x51_T_Stanag
//MAGS 1.5
40,30Rnd_mas_9x39_mag
45,20Rnd_mas_9x39_mag
40,40Rnd_mas_46x30_Mag

40,muzzle_mas_snds_L 
40,muzzle_mas_snds_LM 
40,muzzle_mas_snds_C 
40,muzzle_mas_snds_M 
40,muzzle_mas_snds_Mc 
40,muzzle_mas_snds_AK 
40,muzzle_mas_snds_SM
40,muzzle_mas_snds_SMc
40,muzzle_mas_snds_SH 
40,muzzle_mas_snds_SHc 
40,muzzle_mas_snds_SV 
40,muzzle_mas_snds_SVc 
40,muzzle_mas_snds_SVD 
40,muzzle_mas_snds_KSVK 
40,muzzle_snds_acp
40,muzzle_snds_H_MG
40,muzzle_snds_L

//MAS 1.5 
40,acc_mas_pointer_IR_top
40,acc_mas_pointer_IR2
40,acc_mas_pointer_IR2_top
40,acc_mas_pointer_IR2c
40,acc_mas_pointer_IR2c_top
40,muzzle_mas_snds_MP5SD6
40,muzzle_mas_snds_MP7
40,optic_mas_PSO_day
40,optic_mas_PSO_nv_day
40,optic_mas_LRPS
40,G_mas_wpn_gog
40,G_mas_wpn_gog_d
40,G_mas_wpn_gog_m
40,G_mas_wpn_gog_md
40,G_mas_wpn_gog_g
40,G_mas_wpn_gog_gd
40,G_mas_wpn_mask
40,G_mas_wpn_mask_b
40,G_mas_wpn_wrap
40,G_mas_wpn_wrap_f
40,G_mas_wpn_wrap_t
40,G_mas_wpn_wrap_b
40,G_mas_wpn_wrap_c
40,G_mas_wpn_wrap_g
40,G_mas_wpn_wrap_gog
40,G_mas_wpn_wrap_gog_f
40,G_mas_wpn_wrap_gog_t
40,G_mas_wpn_wrap_gog_b
40,G_mas_wpn_wrap_gog_c
40,G_mas_wpn_wrap_gog_g
40,G_mas_wpn_wrap_mask
40,G_mas_wpn_wrap_mask_t
40,G_mas_wpn_wrap_mask_f
40,G_mas_wpn_wrap_mask_b
40,G_mas_wpn_wrap_mask_c
40,G_mas_wpn_wrap_mask_g
40,G_mas_wpn_bala
40,G_mas_wpn_bala_b
40,G_mas_wpn_bala_t
40,G_mas_wpn_bala_gog
40,G_mas_wpn_bala_gog_b
40,G_mas_wpn_bala_gog_t
40,G_mas_wpn_bala_mask
40,G_mas_wpn_bala_mask_b
40,G_mas_wpn_bala_mask_t
40,G_mas_wpn_shemag
40,G_mas_wpn_shemag_r
40,G_mas_wpn_shemag_w
40,G_mas_wpn_shemag_gog
40,G_mas_wpn_shemag_mask
40,NVGoggles_mas_h
40,Rangefinder_mas_h


//SCOPES
40,optic_mas_zeiss 
40,optic_mas_zeiss_c 
40,optic_mas_zeiss_eo 
40,optic_mas_zeiss_eo_c 
40,optic_mas_acog 
40,optic_mas_acog_c 
40,optic_mas_acog_eo 
40,optic_mas_acog_eo_c 
40,optic_mas_acog_rd 
40,optic_mas_acog_rd_c 
40,optic_mas_handle 
40,optic_mas_aim 
40,optic_mas_aim_c 
40,optic_mas_pso 
40,optic_mas_pso_c 
40,optic_mas_pso_eo 
40,optic_mas_pso_eo_c 
40,optic_mas_pso_nv 
40,optic_mas_pso_nv_c 
40,optic_mas_pso_nv_eo 
40,optic_mas_pso_nv_eo_c
40,optic_mas_term 
40,acc_mas_pointer_IR 
40,optic_mas_DMS 
40,optic_mas_DMS_c 
40,optic_mas_Holosight_blk 
40,optic_mas_Holosight_camo 
40,optic_mas_Arco_blk 
40,optic_mas_Arco_camo 
40,optic_mas_Hamr_camo 
40,optic_mas_Aco_camo 
40,optic_mas_ACO_grn_camo 
40,optic_mas_MRCO_camo
// Sniper Items
70, muzzle_snds_B
70, acc_flashlight
70, optic_DMS
70, optic_SOS
70, optic_LRPS

80, Binocular
75, Rangefinder
50, Laserdesignator
50, ItemRadio
40, ItemGPS
50, NVGoggles
50, Exile_Item_InstaDoc

// Explosives
25, HandGrenade
25, MiniGrenade
