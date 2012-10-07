# #############################
# Country definition for POL #
# #############################

country = {
	tag = POL
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 100
	manpower = 50
	transports = 20
	escorts = 0
	capital = 232
	# NATO
	diplomacy = {
		relation = { tag = BEL value = 200 access = yes }
		relation = { tag = BUL value = 200 access = yes }
		relation = { tag = CAN value = 200 access = yes }
		relation = { tag = CZE value = 200 access = yes }
		relation = { tag = DEN value = 200 access = yes }
		relation = { tag = EST value = 200 access = yes }
		relation = { tag = FRA value = 200 access = yes }
		relation = { tag = GER value = 200 access = yes }
		relation = { tag = GRE value = 200 access = yes }
		relation = { tag = HUN value = 200 access = yes }
		relation = { tag = ICL value = 200 access = yes }
		relation = { tag = ITA value = 200 access = yes }
		relation = { tag = LAT value = 200 access = yes }
		relation = { tag = LIT value = 200 access = yes }
		relation = { tag = LUX value = 200 access = yes }
		relation = { tag = HOL value = 200 access = yes }
		relation = { tag = NOR value = 200 access = yes }
		relation = { tag = USA value = 200 access = yes }
		relation = { tag = POR value = 200 access = yes }
		relation = { tag = ROM value = 200 access = yes }
		relation = { tag = SLO value = 200 access = yes }
		relation = { tag = SLV value = 200 access = yes }
		relation = { tag = SPA value = 200 access = yes }
		relation = { tag = TUR value = 200 access = yes }
		relation = { tag = ENG value = 200 access = yes }
	}
	 SpyInfo                = {  country = "POL" NumberOfSpies = 9  } 
   nationalprovinces      = {  226 222 235 233 223 224 234 230 232 221 243 237 236 228 254 229 252 225 227 231 255 258 250 246 239 168 185 183 203 155 158 159 161 164 165 166 167 181  } 
   ownedprovinces         = {  226 222 235 233 223 224 234 230 232 221 243 237 236 228 254 229 252 225 227 231 250 246 239 168 185 183 155 158 159 161 164 165 166 167 181  } 
   controlledprovinces    = {  226 222 235 233 223 224 234 230 232 221 243 237 236 228 254 229 252 225 227 231 250 246 239 168 185 183 155 158 159 161 164 165 166 167 181  } 
	techapps = {
		# Industry
		5010 5020
		5030 5040
		5050 5060
		5070 5080
		5090 5110
		5120 5130
		5140 5150
		5160 5170
		5180 5190
		5210 5220
		5230 5240
		5250 5260
		5270 5280
		5290 # Army Equip
		2200 2210
		2220 2230
		2300 2310
		2320 2330
		2400 2410
		2420 2430
		2500 2510
		2520 2530
		2600 2610
		2620 2630
		2700 2710
		2720 2730
		2800 2810
		2820 2830
		2000 2010
		2050 2060
		2070 # Army Org
		1990 1260
		1270 1900
		1910 1920
		1000 1010
		1050 1060
		1070 1500
		1510 1520
		1200 1210
		1220 1300
		1310 1320
		1400 1410
		1420 1800
		1810 1700
		1600 # Aircraft
		4800 4810
		4700 4710
		4750 4760
		4640 4000
		4010 4020
		4640 4650
		4500 4400
		4410 # Land Docs
		6930 6600
		6610 6010
		6020 6100
		6110 6120
		6140 6150
		6160 6170
		6200 6210
		6220 6240
		6250 6260
		6270 6130
		# Air Docs
		9040 9510
		9520 9530
		9540 9050
		9060 9070
		9090 9120
		9130 9140
		9150 9170
		9200 # Secret Weapons
		7010 7060
		7070 7330
		7310 # Navy Techs
		3000 3010
		3100 3700
		37700 3710
		3720 3590
		3850 3860
		3870 # Navy Doctrines
		8900 8910
		8950 8960
		8400 8410
		8000 8010
		8500 8510
		8100 8600
	}
	policy = {
		date = { year = 0 month = march day = 0 }
		democratic = 10
		political_left = 10
		free_market = 7
		freedom = 8
		professional_army = 5
		defense_lobby = 3
		interventionism = 6
	}
	# #####################################
	# ARMY
	# #####################################
	landunit = {
		id = { type = 18200 id = 1 }
		location = 235
		name = "2 Korpus Zmechanizowany"
		division = {
			id = { type = 18200 id = 2 }
			name = "2 Korpus Zmechanizowany"
			strength = 100
			type = hq
			model = 1
			extra = heavy_armor
			brigade_model = 2
		}
	}
        landunit = {
		id = { type = 18200 id = 3 }
		location = 232
		name = "1 Warszawska Dywizja Zmechanizowana"
		division = {
			id = { type = 18200 id = 4 }
			name = "1 Warszawska Brygada Pancerna"
			strength = 100
			type = light_armor
			model = 5
		}
                division = {
			id = { type = 18200 id = 5 }
			name = "3 Brygada Zmechanizowana Legionów"
			strength = 100
			type = cavalry
			model = 2
		}
		division = {
			id = { type = 18200 id = 6 }
			name = "21 Brygada Strzelców Podhalanskich"
			strength = 100
			type = bergsjaeger
			model = 13
		}
	}
        landunit = {
		id = { type = 18200 id = 7 }
		location = 159
		name = "11 Lubuska Dywizja Kawalerii Pancernej"
		division = {
			id = { type = 18200 id = 8 }
			name = "10 Brygada Kawalerii Pancernej"
			strength = 100
			type = light_armor
			model = 8
		}
            division = {
			id = { type = 18200 id = 9 }
			name = "15 Wielkopolska Brygada Kawalerii Pancernej"
			strength = 100
			type = light_armor
			model = 4
		}
		division = {
			id = { type = 18200 id = 10 }
			name = "34 Brygada Kawalerii Pancernej"
			strength = 100
			type = light_armor
			model = 5
		}
            division = {
			id = { type = 18200 id = 11 }
			name = "17 Wielkopolska Brygada Zmechanizowana"
			strength = 100
			type = cavalry
			model = 2
		}
	}
	landunit = {
		id = { type = 18200 id = 12 }
		location = 158
		name = "12 Szczecinska Dywizja Zmechanizowana"
            division = {
			id = { type = 18200 id = 13 }
			name = "6 Brygada Kawalerii Pancernej"
			strength = 100
			type = light_armor
			model = 4
		}
		division = {
			id = { type = 18200 id = 14 }
			name = "2 Brygada Zmechanizowana Legionów"
			strength = 100
			type = cavalry
			model = 2
		}
		division = {
			id = { type = 18200 id = 15 }
			name = "7 Pomorska Brygada Obrony Wybrzeza" # mixed coastal defense/mech and marine unit
			strength = 100
			type = cavalry
			model = 2
		}
		division = {
			id = { type = 18200 id = 16 }
			name = "12 Brygada Zmechanizowana"
			strength = 100
			type = cavalry
			model = 2
		}
            division = {
			id = { type = 18200 id = 17 }
			name = "36 Brygada Zmechanizowana"
			strength = 100
			type = cavalry
			model = 2
		}

	}
	landunit = {
		id = { type = 18200 id = 18 }
		location = 183
		name = "16 Pomorska Dywizja Zmechanizowana"
                division = {
			id = { type = 18200 id = 19 }
			name = "9 Brygada Kawalerii Pancernej"
			strength = 60
			type = light_armor
			model = 4
		}
		division = {
			id = { type = 18200 id = 20 }
			name = "15 Gizycka Brygada Zmechanizowana"
			strength = 60
			type = cavalry
			model = 2
		}
            division = {
			id = { type = 18200 id = 21 }
			name = "16 Pomorsko-Warminska Brygada Zmechanizowana"
			strength = 60
			type = cavalry
			model = 2
		}
		division = {
			id = { type = 18200 id = 22 }
			name = "20 Bartoszycka Brygada Zmechanizowana"
			strength = 60
			type = cavalry
			model = 2
		}
	}
	landunit = {
		id = { type = 18200 id = 23 }
		location = 235
		name = "6 Brygada Powietrznodesantowa"
		division = {
			id = { type = 18200 id = 24 }
			name = "6 Brygada Powietrznodesantowa"
			strength = 100
			type = paratrooper
			model = 15
		}
	}
	landunit = {
		id = { type = 18200 id = 25 }
		location = 234
		name = "25 Brygada Kawalerii Powietrznej"
		division = {
			id = { type = 18200 id = 26 }
			name = "25 Brygada Kawalerii Powietrznej"
			strength = 100
			type = militia
			model = 2
		}
	}
	# #####################################
	# NAVY
	# #####################################
	navalunit = {
		id = { type = 18200 id = 200 }
		location = 181
		base = 181
		name = "Marynarka Wojenna"
		division = {
			id = { type = 18200 id = 202 }
			name = "ORP General Kazimierz Pulaski"
			type = destroyer
			model = 2
		}
		division = {
			id = { type = 18200 id = 203 }
			name = "ORP General Tadeusz Kosciuszko"
			type = destroyer
			model = 2
		}
	}
	navalunit = {
		id = { type = 18200 id = 213 }
		location = 181
		base = 181
		name = "45th Auxiliary Vessel Squadron"
		division = {
			id = { type = 18200 id = 214 }
			name = "1st Transport Flottila"
			type = transport
			model = 3
		}
	}
	navalunit = {
		id = { type = 18200 id = 217 }
		location = 181
		base = 181
		name = "Submarine Squadron"
		division = {
			id = { type = 18200 id = 218 }
			name = "ORP Orzel"
			type = submarine
			model = 4
		}
		division = {
			id = { type = 18200 id = 219 }
			name = "ORP Dzik"
			type = submarine
			model = 0
		}
		division = {
			id = { type = 18200 id = 220 }
			name = "ORP Wilk"
			type = submarine
			model = 0
		}
		division = {
			id = { type = 18200 id = 221 }
			name = "ORP Sokól"
			type = submarine
			model = 0
		}
		division = {
			id = { type = 18200 id = 222 }
			name = "ORP Sep"
			type = submarine
			model = 0
		}
                division = {
			id = { type = 18200 id = 224 }
			name = "ORP Bielik"
			type = submarine
			model = 0
		}
		division = {
			id = { type = 18200 id = 223 }
			name = "ORP Kondor"
			type = submarine
			model = 0
		}
	}
	# #####################################
	# AIR FORCE
	# #####################################
	airunit = {
		id = { type = 18200 id = 100 }
		location = 226
		base = 226
		name = "1 Skrzydlo Lotnictwa Taktycznego"
		division = {
			id = { type = 18200 id = 101 }
			name = "1 Skrzydlo Lotnictwa Taktycznego"
			type = tactical_bomber
			strength = 100
			model = 1
		}
	}
	airunit = {
		id = { type = 18200 id = 102 }
		location = 224
		base = 224
		name = "2 Skrzydlo Lotnictwa Taktycznego"
		division = {
			id = { type = 18200 id = 103 }
			name = "2 Skrzydlo Lotnictwa Taktycznego"
			type = interceptor
			strength = 100
			model = 2
		}
	}
	airunit = {
		id = { type = 18200 id = 104 }
		location = 228
		base = 228
		name = "3 Skrzydlo Lotnictwa Transportowego"
		division = {
			id = { type = 18200 id = 105 }
			name = "3 Skrzydlo Lotnictwa Transportowego"
			type = transport_plane
			strength = 100
			model = 1
		}
	}
}
