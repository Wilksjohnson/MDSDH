# #############################
# Country definition for NOR #
# #############################

country = {
	tag = NOR
	regular_id = U06
	energy = 1000
	metal = 500
	rare_materials = 500
	oil = 1500
	supplies = 500
	money = 500
	manpower = 10
	transports = 100
	escorts = 10
	capital = 483
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
		relation = { tag = USA value = 150 access = yes }
		relation = { tag = POL value = 200 access = yes }
		relation = { tag = POR value = 200 access = yes }
		relation = { tag = ROM value = 200 access = yes }
		relation = { tag = SLO value = 200 access = yes }
		relation = { tag = SLV value = 200 access = yes }
		relation = { tag = SPA value = 200 access = yes }
		relation = { tag = TUR value = 200 access = yes }
		relation = { tag = ENG value = 200 access = yes }
	}
	SpyInfo                = {  country = "NOR" NumberOfSpies = 5  } 
   nationalprovinces      = {  496 488 484 483 485 487 491 489 486 492 490 493 494 497 495  } 
   ownedprovinces         = {  483 485 487 491 489 492 490 493 494 497 496 488 486 484 495  } 
   controlledprovinces    = {  483 485 487 491 489 492 490 493 494 497 496 488 486 484 495  }
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
		2000 2050
		2110 2010
		2060 2120
		2070 2300
		2310 2320
		2400 2410
		2420 2500
		2510 2520
		2700 2710
		2720 2200
		2210 2220
		2600 2610
		2620 2800
		2810 2820
		# Army Org
		1260 1270
		1300 1310
		1320 1500
		1510 1520
		1800 1810
		1900 1910
		1920 1990
		# Aircraft
		4800 4810
		4700 4710
		4750 4760
		4000 4010
		4020 4640
		4400 # Land Docs
		6930 6010
		6020 6600
		6610 6100
		6110 6120
		6160 6200
		6210 6220
		6260 # Air Docs
		9040 9510
		9520 9530
		9540 9050
		9060 9070
		9110 9120
		9130 9140
		9150 9190
		9200 # Secret Weapons
		7180 7330
		7310 7320
		# Navy Techs
		3000 3010
		3020 3030
		3700 37700
		3710 3720
		3590 3850
		3860 3870
		3880 # Navy Doctrines
		8900 8910
		8920 8950
		8960 8970
		8400 8410
		8420 8000
		8010 8020
		8500 8510
		8520
	}
	policy = {
		date = { year = 0 month = march day = 0 }
		democratic = 10
		political_left = 5
		free_market = 7
		freedom = 9
		professional_army = 3
		defense_lobby = 3
		interventionism = 7
	}
	# ####################################
	# ARMY
	# ####################################
	landunit = {
		id = { type = 17100 id = 1 }
		location = 497
		name = "Hæren"
		division = {
			id = { type = 17100 id = 2 }
			name = "6. Divisjonskommando"
			strength = 100
			type = hq
			model = 2
		}
		division = {
			id = { type = 17100 id = 3 }
			name = "Brigade Nord"
			strength = 100
			type = cavalry
			model = 3
		}
	}
	# ####################################
	# NAVY
	# ####################################
	navalunit = {
		id = { type = 17100 id = 200 }
		location = 488
		base = 488
		name = "Fregattvåpenet"
		division = {
			id = { type = 17100 id = 201 }
			name = "KNM Bergen"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 17100 id = 202 }
			name = "KNM Narvik"
			type = destroyer
			model = 0
		}
		division = {
			id = { type = 17100 id = 203 }
			name = "KNM Trondheim"
			type = destroyer
			model = 0
		}
	}
	navalunit = {
		id = { type = 17100 id = 204 }
		location = 488
		base = 488
		name = "Ubåtvåpenet"
		division = {
			id = { type = 17100 id = 205 }
			name = "KNM Ula"
			type = submarine
			model = 7
		}
		division = {
			id = { type = 17100 id = 206 }
			name = "KNM Utsira"
			type = submarine
			model = 7
		}
		division = {
			id = { type = 17100 id = 207 }
			name = "KNM Utstein"
			type = submarine
			model = 7
		}
		division = {
			id = { type = 17100 id = 208 }
			name = "KNM Utvcr"
			type = submarine
			model = 7
		}
		division = {
			id = { type = 17100 id = 209 }
			name = "KNM Uthaug"
			type = submarine
			model = 7
		}
		division = {
			id = { type = 17100 id = 210 }
			name = "KNM Uredd"
			type = submarine
			model = 7
		}
	}
	# ####################################
	# AIR FORCE
	# ####################################
	airunit = {
		id = { type = 17100 id = 100 }
		location = 494
		base = 494
		name = "Luftforsvaret"
		division = {
			id = { type = 17100 id = 101 }
			name = "132 Luftving"
			type = interceptor
			strength = 80
			model = 2
		}
		division = {
			id = { type = 17100 id = 103 }
			name = "138 Luftving"
			type = interceptor
			strength = 20
			model = 2
		}
		division = {
			id = { type = 17100 id = 104 }
			name = "133 Luftving"
			type = naval_bomber
			strength = 20
			model = 3
		}
	}
	# ###################################
	# Under Development
	# ###################################
	division_development = {
		id = { type = 17100 id = 300 }
		name = "KNM Fridtjof Nansen"
		type = destroyer
		model = 3
		cost = 4
		date = { day = 12 month = august year = 2005 }
	}
	division_development = {
		id = { type = 17100 id = 301 }
		name = "KNM Roald Amundsen"
		type = destroyer
		model = 3
		cost = 4
		date = { day = 12 month = august year = 2006 }
	}
	division_development = {
		id = { type = 17100 id = 302 }
		name = "KNM Otto Sverdrup"
		type = destroyer
		model = 3
		cost = 4
		date = { day = 12 month = august year = 2007 }
	}
	division_development = {
		id = { type = 17100 id = 303 }
		name = "KNM Helge Ingstad"
		type = destroyer
		model = 3
		cost = 4
		date = { day = 12 month = august year = 2008 }
	}
	division_development = {
		id = { type = 17100 id = 304 }
		name = "KNM Thor Heyerdahl"
		type = destroyer
		model = 3
		cost = 4
		date = { day = 12 month = august year = 2009 }
	}
}
