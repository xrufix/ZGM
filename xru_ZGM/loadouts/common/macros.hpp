#define ARR_1(var1) var1
#define ARR_2(var1,var2) var1, var2
#define ARR_3(var1,var2,var3) var1, var2, var3
#define ARR_4(var1,var2,var3,var4) var1, var2, var3, var4
#define ARR_5(var1,var2,var3,var4,var5) var1, var2, var3, var4, var5
#define ARR_6(var1,var2,var3,var4,var5,var6) var1, var2, var3, var4, var5, var6
#define ARR_7(var1,var2,var3,var4,var5,var6,var7) var1, var2, var3, var4, var5, var6, var7
#define ARR_8(var1,var2,var3,var4,var5,var6,var7,var8) var1, var2, var3, var4, var5, var6, var7, var8
#define ARR_9(var1,var2,var3,var4,var5,var6,var7,var8,var9) var1, var2, var3, var4, var5, var6, var7, var8, var9
#define ARR_10(var1,var2,var3,var4,var5,var6,var7,var8,var9,var10) var1, var2, var3, var4, var5, var6, var7, var8, var9, var10

#define WEAPON(var1,var2,var3,var4) {ARR_4(var1,var2,var3,var4)}

#define DOUBLES(var1,var2) var1##_##var2
#define TRIPLES(var1,var2,var3) var1##_##var2##_##var3
#define QUADRUPLES(var1,var2,var3,var4) var1##_##var2##_##var3##_##var4
#define QUOTE(var1) #var1
#define QQUOTE(var1) QUOTE(QUOTE(var1))

#define COMMON Common##SIDE
#define LOADOUT(var1,var2) TRIPLES(SIDE_SHORT,var1,var2)

#define EASYTRACK_PDA QUOTE(TRIPLES(SIDE_SHORT,EasyTrack,PDA))
#define EASYTRACK_TABLET QUOTE(TRIPLES(SIDE_SHORT,EasyTrack,Tablet))
#define TERMINAL QUOTE(DOUBLES(SIDE_SHORT,UavTerminal))
#define GRENADE_IR ARR_2(QUOTE(DOUBLES(SIDE_SHORT,ir_grenade)),2)

#define MAGS_COMMON ARR_7(MAG_PISTOL,3,MAG_RIFLE,7,MAG_RIFLE_TRACER,4,GRENADES_RGO)

#define GRENADES_MINI   ARR_4(GRENADES_BASIC,"MiniGrenade","SmokeShell",2)
#define GRENADES_RGO    ARR_5(GRENADES_BASIC,"HandGrenade",2,"SmokeShell",2)

#define SOLDIER(var1,var2,var3) \
class var3 : LOADOUT(var1,var2) { \
    scope = 0; \
};