
##############################
# Country definition for GER #
##############################

country =
{ tag                 = GER
  regular_id          = U72
  capital             = 163
  manpower            = 60
  transports          = 142
  escorts             = 0
  # Resource Reserves
  energy              = 1000
  metal               = 1000
  rare_materials      = 500
  oil                 = 500
  supplies            = 500
  money               = 300
  # NATO
  diplomacy =
  { relation = { tag = BEL value = 200 access = yes }
    relation = { tag = BUL value = 200 access = yes }
    relation = { tag = CAN value = 200 access = yes }
    relation = { tag = CZE value = 200 access = yes }
    relation = { tag = DEN value = 200 access = yes }
    relation = { tag = EST value = 200 access = yes }
    relation = { tag = FRA value = 200 access = yes }
    relation = { tag = USA value = 200 access = yes }
    relation = { tag = GRE value = 200 access = yes }
    relation = { tag = HUN value = 200 access = yes }
    relation = { tag = ICL value = 200 access = yes }
    relation = { tag = ITA value = 200 access = yes }
    relation = { tag = LAT value = 200 access = yes }
    relation = { tag = LIT value = 200 access = yes }
    relation = { tag = LUX value = 200 access = yes }
    relation = { tag = HOL value = 200 access = yes }
    relation = { tag = NOR value = 200 access = yes }
    relation = { tag = POL value = 200 access = yes }
    relation = { tag = POR value = 200 access = yes }
    relation = { tag = ROM value = 200 access = yes }
    relation = { tag = SLO value = 200 access = yes }
    relation = { tag = SLV value = 200 access = yes }
    relation = { tag = SPA value = 200 access = yes }
    relation = { tag = TUR value = 200 access = yes }
    relation = { tag = ENG value = 200 access = yes }
  }
  SpyInfo                = {  country = "GER" NumberOfSpies = 7  } 
   
   nationalprovinces      = { 126 145 127 131 142 147 141 137 174  171 176 146 148 154 151 152 153 156 169 157 163 162 172 170 173 177 138 134 132 178 175 179 133 144 160 180 136 139 135 129 128 130 149 150 140 143  } 
   ownedprovinces         = {  126 145 127 131 142 147 141 137 174  171 176 146 148 154 151 152 153 156 169 157 163 162 172 170 173 177 138 134 132 178 175 179 133 144 160 180 136 139 135 129 128 130 149 150 140 143 } 
   controlledprovinces    = {  126 145 127 131 142 147 141 137 174  171 176 146 148 154 151 152 153 156 169 157 163 162 172 170 173 177 138 134 132 178 175 179 133 144 160 180 136 139 135 129 128 130 149 150 140 143 } 
  techapps            = { 
					#Industry
					5010 5020 5030 5040 5050 5060 5070 5080 5090
					5110 5120 5130 5140 5150 5160 5170 5180 5190
					5210 5220 5230 5240 5250 5260 5270 5280 5290
					#Army Equip
					2200 2210 2220 2230
                                        2000 2050 2110
                                        2010 2060 2120
                                             2070
					2300 2310 2320 2330
					2400 2410 2420 2430
					2500 2510 2520 2530
					2600 2610 2620 2630
					2700 2710 2720 2730
					2800 2810 2820 2830
					#Army Org
					1260 1270
					1900 1910 1920 1930
					1500 1510 1520 1530
					1200 1210 1220 1230
					1300 1310 1320 1330
					1400 1410 1420 1430
					1700 1710 1720
					1800 1810 1820
					1000 1010
					1050 1060 1070
					1110 1120
					#Aircraft
                                        4100 4110 4120 4130
					4640 4650 4660 4670
					4800 4810 4820
					4700 4710 4720
					4750 4760 4770
					4500 4510 4520
                                        4570
					4400 4410 4420
					4900 4910 4920					
					#Land Docs
					6010 6030 6040
					6930
					6600 6610
					6700 6710
					6100 6110 6120 6140 6150 6160 6170
					6200 6210 6220 6240 6250 6260 6270
					6300 6310 6320 6340 6350 6360 6370
					#Air Docs
					9040 9510 9520 9530 9540
					9050 9060 9070 9090 9120
					9130 9140 9150 9170 9200
					9210 9220 9230 9250 9280
					#Secret Weapons
					7010 7060 7070 7080
					7180 7190 7200
					7330 7310 7320
                                        #Navy Techs
                                        3000 3010 3020
                                        3100 3110 3120
                                        3590
                                        3700 37700 3710 37710 3720 3730
                                        3850 3860 3870
                                        #Navy Doctrines
                                        8900 8910 8920
                                        8950 8960 8970
                                        8400 8410 8420
                                        8000 8010 8020
                                        8500 8510 8520
                                        8100 8110 8120
                                        8600 8610 8620
                        }
  policy =
  { date              = { year = 0 month = march day = 0 }
    democratic        = 10
    political_left    = 7
    free_market       = 8
    freedom           = 10
    professional_army = 2
    defense_lobby     = 2
    interventionism   = 4
  }
# #####################################
# ARMY
# #####################################

landunit =
{ id = { type = 11100 id = 1 }
location = 129
name = "Heeresführungskommando"
division =
{ id = { type = 11100 id = 2 }
  name = "HFüKdo HQ"
  strength = 100
  type = hq
  model = 2
  }
}
landunit =
{ id = { type = 11100 id = 3 }
location = 146
name = "1. Deutsch-Niederländisches Korps"   
division =
{ id = { type = 11100 id = 4 }
  name = "1. Panzerdivision"  # reaction force
  strength = 100
  type = armor
  model = 16
  }
}
landunit =
{ id = { type = 11100 id = 6 }
location = 142
name = "II. (Deutsch-Amerikanisches) Korps"
division =
{ id = { type = 11100 id = 7 }
  name = "7. Panzerdivision"
  strength = 100
  type = armor
  model = 16
  }
}
landunit =
{ id = { type = 11100 id = 12 }
location = 133
name = "EUROCORPS"  
division =
{ id = { type = 11100 id = 13 }
  name = "Gebirgsjägerbrigade 23"
  strength = 100
  type = bergsjaeger
  model = 14
  }
division =
{ id = { type = 11100 id = 14 }
  name = "10. Panzerdivision"
  strength = 40
  type = armor
  model = 16
  }
}
landunit =
{ id = { type = 11100 id = 9 }
location = 170
name = "V. (US/GE) Korps"
division =
{ id = { type = 11100 id = 10 }
  name = "13. Panzergrenadierdivision"
  strength = 100
  type = infantry
  model = 2
  }
}
landunit =
{ id = { type = 11100 id = 15 }
location = 153
name = "Multinationales Korps Nord-Ost"
division =
{ id = { type = 11100 id = 16 }
  name = "14. Panzergrenadierdivision"
  strength = 100
  type = infantry
  model = 2
  }
}
landunit =
{ id = { type = 11100 id = 18 }
location = 175
name = "Division Spezielle Operationen"
division =
{ experience    = 15
  id = { type = 11100 id = 19 }
  name = "Kommando Spezialkräfte"
  strength = 100
  type = bergsjaeger
  model = 14
  extra = engineer
  brigade_model = 0
  }
division =
{ id = { type = 11100 id = 20 }
  name = "Luftlandebrigade 26"
  strength = 100
  type = paratrooper
  model = 16
  }
division =
{ id = { type = 11100 id = 21 }
  name = "Luftlandebrigade 31"
  strength = 100
  type = paratrooper
  model = 16
  }
}
landunit =
{ id = { type = 11100 id = 22 }
location = 180
name = "Division Luftbewegliche Operationen"
division =
{ id = { type = 11100 id = 23 }
  name = "Luftbewegliche Brigade 1"
  strength = 100
  type = militia
  model = 3
  }
division =
{ id = { type = 11100 id = 24 }
  name = "Heerestruppenbrigade"  # only support elicopters
  strength = 100
  type = militia
  model = 3
  }
}
# #####################################
# NAVY
# #####################################
navalunit =
{ id = { type = 11100 id = 200 }
location = 147
base = 147
name = "1. Fregatten-Geschwader"
division =
{ id = { type = 11100 id = 201 }
name = "Lütjens"
type = light_cruiser
model = 0
}
division =
{ id = { type = 11100 id = 202 }
name = "Mölders"
type = light_cruiser
model = 0
}
}
navalunit =
{ id = { type = 11100 id = 203 }
location = 152
base = 152
name = "6. Fregatten-Geschwader"
division =
{ id = { type = 11100 id = 204 }
name = "Brandenburg"
type = destroyer
model = 2
}
division =
{ id = { type = 11100 id = 205 }
name = "Schleswig-Holstein"
type = destroyer
model = 2
}
division =
{ id = { type = 11100 id = 206 }
name = "Bayern"
type = destroyer
model = 2
}
division =
{ id = { type = 11100 id = 207 }
name = "Mecklenburg-Vorpommern"
type = destroyer
model = 2
}
}
navalunit =
{ id = { type = 11100 id = 208 }
location = 147
base = 147
name = "2. Fregatten-Geschwader"
division =
{ id = { type = 11100 id = 209 }
name = "Bremen"
type = destroyer
model = 1
}
division =
{ id = { type = 11100 id = 210 }
name = "Niedersachsen"
type = destroyer
model = 1
}
division =
{ id = { type = 11100 id = 211 }
name = "Rheinland-Pfalz"
type = destroyer
model = 1
}
division =
{ id = { type = 11100 id = 212 }
name = "FGS Emden"
type = destroyer
model = 1
}
}
navalunit =
{ id = { type = 11100 id = 213 }
location = 147
base = 147
name = "4. Fregatten-Geschwader"
division =
{ id = { type = 11100 id = 214 }
name = "Köln"
type = destroyer
model = 0
}
division =
{ id = { type = 11100 id = 215 }
name = "Karlsruhe"
type = destroyer
model = 0
}
division =
{ id = { type = 11100 id = 216 }
name = "Augsburg"
type = destroyer
model = 0
}
division =
{ id = { type = 11100 id = 217 }
name = "Lübeck"
type = destroyer
model = 0
}
}
navalunit =
{ id = { type = 11100 id = 218 }
location = 152
base = 152
name = "1. Uboot-Geschwader"
division =
{ id = { type = 11100 id = 219 }
name = "U 23"
type = submarine
model = 3
}
division =
{ id = { type = 11100 id = 220 }
name = "U 25"
type = submarine
model = 3
}
division =
{ id = { type = 11100 id = 221 }
name = "U 28"
type = submarine
model = 3
}
division =
{ id = { type = 11100 id = 222 }
name = "U 33"
type = submarine
model = 3
}
}
navalunit =
{ id = { type = 11100 id = 223 }
location = 152
base = 152
name = "3. Uboot-Geschwader"
division =
{ id = { type = 11100 id = 224 }
name = "U 15"
type = submarine
model = 3
}
division =
{ id = { type = 11100 id = 225 }
name = "U 16"
type = submarine
model = 3
}
division =
{ id = { type = 11100 id = 226 }
name = "U 24"
type = submarine
model = 3
}
division =
{ id = { type = 11100 id = 227 }
name = "U 26"
type = submarine
model = 3
}
division =
{ id = { type = 11100 id = 228 }
name = "U 27"
type = submarine
model = 3
}
division =
{ id = { type = 11100 id = 229 }
name = "U 28"
type = submarine
model = 3
}
division =
{ id = { type = 11100 id = 230 }
name = "U 29"
type = submarine
model = 3
}
division =
{ id = { type = 11100 id = 231 }
name = "U 30"
type = submarine
model = 3
}
}
# #####################################
# AIR FORCE
# #####################################
airunit =
{ id = { type = 11100 id = 100 }
location = 179
base = 179
name = "1. Luftwaffendivision"
division =
{ id = { type = 11100 id = 101 }
  name = "Jagdbombergeschwader 32"
  type = tactical_bomber
  strength = 100
  model = 3
  }
division =
{ id = { type = 11100 id = 102 }
  name = "JaboG 34 'Allgäu'" # dissolved in june
  type = tactical_bomber
  strength = 100
  model = 3
  }
division =
{ id = { type = 11100 id = 103 }
  name = "Jagdgeschwader 74"
  type = multi_role
  strength = 100
  model = 1
  }
}
airunit =
{ id = { type = 11100 id = 104 }
location = 130
base = 130
name = "2. Luftwaffendivision"
division =
{ id = { type = 11100 id = 105 }
  name = "Jagdbombergeschwader 33"
  type = tactical_bomber
  strength = 100
  model = 3
  }
division =
{ id = { type = 11100 id = 106 }
  name = "Jagdbombergeschwader 35"
  type = tactical_bomber
  strength = 100
  model = 3
  }
division =
{ id = { type = 11100 id = 107 }
  name = "JaboG 31 'Boelcke'"
  type = tactical_bomber
  strength = 100
  model = 3
  }
}
airunit =
{ id = { type = 11100 id = 108 }
location = 163
base = 163
name = "3. Luftwaffendivision"
division =
{ id = { type = 11100 id = 109 }
  name = "JG 73 'Steinhoff'"
  type = interceptor
  strength = 100
  model = 2
  }
division =
{ id = { type = 11100 id = 110 }
  name = "Jagdgeschwader 79"
  type = multi_role
  strength = 100
  model = 1
  }
}
airunit =
{ id = { type = 11100 id = 111 }
location = 147
base = 147
name = "4. Luftwaffendivision"
division =
{ id = { type = 11100 id = 112 }
  name = "JaboG 38 'Friesland'"
  type = tactical_bomber
  strength = 100
  model = 3
  }
division =
{ id = { type = 11100 id = 114 }
  name = "JG 71 'Richthofen'"
  type = multi_role
  strength = 100
  model = 1
  }
}
airunit =
{ id = { type = 11100 id = 115 }
location = 134
base = 134
name = "Luftransport Kommando"
division =
{ id = { type = 11100 id = 116 }
  name = "Lufttransportgeschwader 61"
  type = transport_plane
  strength = 100
  model = 2
  }
division =
{ id = { type = 11100 id = 117 }
  name = "Lufttransportgeschwader 62"
  type = transport_plane
  strength = 100
  model = 2
  }
division =
{ id = { type = 11100 id = 118 }
  name = "Lufttransportgeschwader 63"
  type = transport_plane
  strength = 100
  model = 1
  }
}
airunit =
{ id = { type = 11100 id = 119 }
location = 152
base = 152
name = "Marinefliegergeschwader 2"
division =
{ id = { type = 11100 id = 120 }
  name = "Marinefliegergeschwader 2"
  type = naval_bomber
  strength = 100
  model = 2
  }
}
  # ###################################
  # Under Development
  # ###################################
  division_development =
  { id    = { type = 11100 id = 300 }
    name  = "Sachsen"
    type  = light_cruiser
    model = 2
    cost  = 4
    date  = { day = 9 month = august year = 2003 }
  }
  division_development =
  { id    = { type = 11100 id = 301 }
    name  = "U 31"
    type  = submarine
    model = 6
    cost  = 7
    date  = { day = 28 month = november year = 2003 }
  }
  division_development =
  { id    = { type = 11100 id = 302 }
    name  = "Hamburg"
    type  = light_cruiser
    model = 2
    cost  = 4
    date  = { day = 14 month = march year = 2004 }
  }
  division_development =
  { id    = { type = 11100 id = 303 }
    name  = "U 32"
    type  = submarine
    model = 6
    cost  = 7
    date  = { day = 13 month = june year = 2004 }
  }
  division_development =
  { id    = { type = 11100 id = 304 }
    name  = "Hessen"
    type  = light_cruiser
    model = 2
    cost  = 4
    date  = { day = 19 month = june year = 2005 }
  }
  division_development =
  { id    = { type = 11100 id = 305 }
    name  = "U 33"
    type  = submarine
    model = 6
    cost  = 7
    date  = { day = 4 month = september year = 2005 }
  }
  division_development =
  { id    = { type = 11100 id = 306 }
    name  = "U 34"
    type  = submarine
    model = 6
    cost  = 7
    date  = { day = 17 month = may year = 2006 }
  }
}
