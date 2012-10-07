# #############################
# Country definition for SWE #
# #############################

country = {
	tag = SWE
	regular_id = U06
	# Resource Reserves
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 20
	manpower = 36
	capital = 2159
	transports = 55
	escorts = 0
	diplomacy = { }
	SpyInfo                = {  country = "SWE" NumberOfSpies = 6  } 
   nationalprovinces      = {   2167 2166 2165 2163 2164 2162 2161 2160 2159 2157 2154 2153 2155 2152 2156 2158 526  } 
   ownedprovinces         = {   2167 2166 2165 2163 2164 2162 2161 2160 2159 2157 2154 2153 2155 2152 2156 2158  } 
   controlledprovinces    = {   2167 2166 2165 2163 2164 2162 2161 2160 2159 2157 2154 2153 2155 2152 2156 2158  }
	techapps = {
		# Industry
		5010 5020 5030
		5040 5050 5060
		5070 5080 5090
		5110 5120 5130
		5140 5150 5160
		5170 5180 5190
		5210 5220 5230
		5240 5250 5260
		5270 5280 5290
		# Army Equip
		2000 2050 2110
		2010 2060 2120
		2200 2210 2220
		2230 2800 2810
		2820 2830 2600
		2610 2620 2630
		2700 2710 2720
		2730 2500 2510
		2520 2530 2300
		2310 2320 2330
		2400 2410 2420
		2430 # Army Org
		1000 1050 1110
		1010 1060 1120
		1260 1270 1800
		1810 1820 1990
		1900 1910 1920
		1930 1300 1310
		1320 1330 1500
		1510 1520 1530
		# Aircraft
		4800 4810 4820
		4700 4710 4720
		4750 4760 4770
		4900 4910 4920
		4000 4010 4020
		4030 4400 4410
		4110 4100 # Land Docs
		6930 6600 6610
		6010 6020 6100
		6110 6120 6140
		6150 6160 6170
		6210 
		6240 6250 
		6270 6200 
		6220 6240 
		6260 # Air Docs
		9040 9510 9520
		9530 9540 9050
		9060 9070 9090
		9100 9110 9120
		9130 9140 9150
		9160 9170 9190
		9200 # Secret Weapons
		7010 7060 7070
		7080 7180 7330
		7310 7320 # Navy Techs
		3700 3710 3720
		37720 3730 3590
		3850 3860 3870
		3880 # Navy Doctrines
		8900 8910 8920
		8950 8960 8970
		8400 8410 8420
	}
	policy = {
		date = { year = 0 month = march day = 0 }
		democratic = 10
		political_left = 10
		free_market = 7
		freedom = 9
		professional_army = 2
		defense_lobby = 3
		interventionism = 3
	}
	# #####################################
	# ARMY
	# #####################################
	landunit = {
		id = { type = 20700 id = 1 }
		location = 2159
		name = "Central Command"
		division = {
			id = { type = 20700 id = 2 }
			name = "7th Armored Brigade"
			strength = 100
			type = light_armor
			model = 0
		}
		division = {
			id = { type = 20700 id = 3 }
			name = "4th Armored Brigade"
			strength = 100
			type = light_armor
			model = 0
		}
	}
	landunit = {
		id = { type = 20700 id = 4 }
		location = 2153
		name = "Southern Command"
		division = {
			id = { type = 20700 id = 5 }
			name = "Swedish Army HQ"
			strength = 100
			type = hq
			model = 3
			extra = sp_artillery
			brigade_model = 3
		}
		division = {
			id = { type = 20700 id = 6 }
			name = "3rd Cavalry Brigade"
			strength = 100
			type = militia
			model = 6
		}
	}
	# #####################################
	# NAVY
	# #####################################
	navalunit = {
		id = { type = 20700 id = 200 }
		location = 2159
		base = 2159
		name = "1. Ubåtsflottiljen"
		division = {
			id = { type = 20700 id = 201 }
			name = "HMS Gotland"
			type = submarine
			model = 6
		}
		division = {
			id = { type = 20700 id = 202 }
			name = "HMS Uppland"
			type = submarine
			model = 6
		}
		division = {
			id = { type = 20700 id = 203 }
			name = "HMS Hallland"
			type = submarine
			model = 6
		}
            division = {
			id = { type = 20700 id = 206 }
			name = "HMS Södermanland"
			type = submarine
			model = 5
		}
		division = {
			id = { type = 20700 id = 207 }
			name = "HMS Östergotland"
			type = submarine
			model = 5
		}
		division = {
			id = { type = 20700 id = 204 }
			name = "HMS Västergotland"
			type = submarine
			model = 4
		}
		division = {
			id = { type = 20700 id = 205 }
			name = "HMS Hälsingland"
			type = submarine
			model = 4
		}
		division = {
			id = { type = 20700 id = 208 }
			name = "HMS Najad"
			type = submarine
			model = 2
		}
		division = {
			id = { type = 20700 id = 209 }
			name = "HMS Neptun"
			type = submarine
			model = 2
		}
	}
	# #####################################
	# AIR FORCE
	# #####################################
	airunit = {
		id = { type = 20700 id = 100 }
		location = 2165
		base = 2165
		name = "F21 Norrbotten Air Flotilla"
		division = {
			id = { type = 20700 id = 101 }
			name = "1. JAS Skvadron"
			type = interceptor
			strength = 100
			model = 9
		}
		division = {
			id = { type = 20700 id = 102 }
			name = "2. JAS Skvadron"
			type = interceptor
			strength = 100
			model = 9
		}
		division = {
			id = { type = 20700 id = 103 }
			name = "3. JAS Skvadron"
			type = interceptor
			strength = 100
			model = 9
		}
	}
	airunit = {
		id = { type = 20700 id = 104 }
		location = 2160
		base = 2160
		name = "F17 Blekinge Air Flotilla"
		division = {
			id = { type = 20700 id = 105 }
			name = "4. JAS Skvadron"
			type = interceptor
			strength = 100
			model = 9
		}
		division = {
			id = { type = 20700 id = 106 }
			name = "5. JAS Skvadron"
			type = interceptor
			strength = 100
			model = 9
		}
		division = {
			id = { type = 20700 id = 107 }
			name = "6. JAS Skvadron"
			type = interceptor
			strength = 100
			model = 9
		}
	}
}
