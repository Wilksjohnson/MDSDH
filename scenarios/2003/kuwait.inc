

country = {
	tag = U91
	puppet = USA
	#control = USA
	# Resource Reserves
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 5000
	supplies = 500
	money = 1200
	manpower = 22
	capital = 1041
	transports = 39
	escorts = 0
	diplomacy = { }
	nationalprovinces = { 1041 }
	ownedprovinces = { 1041 }
	controlledprovinces = { 1041 }
	techapps = {
		# Industry:
		5010 5110
		5210 5020
		5120 5220
		5030 5130
		5230 5040
		5140 5240
		5050 5150
		5250 5060
		5160 5260
		5070 5170
		5270 5080
		5180 5280
		5090 5190
		5290 
		# Army Equipment
		2000 2050
		2110 2010
		2060 2120
		2300 2310
		2320 2330
		2400 2410
		2420 2430
		2200 2210
		2220 2230
		2500 2510
		2520 2530
		2600 2610
		2620 2630
		2700 2710
		2720 2730
		2800 2810
		2820 2830
		# Army Organisation
		1000 1050
		1110 1010
		1060 1120
		1500 1510
		1520 1530
		1300 1310
		1320 1330
		1700 1710
		1720 1900
		1910 1920
		1930 1260
		1270 1970
		# Army Doctrines
		6100 6200
		6300 6110
		6210 6310
		6120 6220
		6320 6150
		6250 6160
		6260 6170
		6270 6370
		6010 6020
		6910 6600
		6610
		# Air Force
		4700 4710
		4720 4750
		4760 4770
		4640 4650
		4660 4670
		4000 4010
		4020 4030
		4570 4400
		4410 
		# Air Force Docs
		9510 9520
		9020 9120
		9050 9130
		9060 9140
		9070 9150
		# Secret Techs
		7330 7310
	}
	policy = {
		date = { year = 0 month = march day = 0 }
		democratic = 3
		political_left = 4
		free_market = 7
		freedom = 4
		professional_army = 5
		defense_lobby = 2
		interventionism = 8
	}
	# #####################################
	# ARMY
	# #####################################
	 landunit = {
		id = { type = 12287 id = 333 }
		location = 1041
		name = "Headquarters"
		division = {
			id = { type = 12287 id = 334 }
			name = "Royal Kuwaiti Army"
			strength = 100
			type = hq
			model = 2
			}  
		}
	landunit = {
		id = { type = 12287 id = 1 }
		location = 1041
		name = "1st Royal Kuwaiti Corps"
		division = {
			id = { type = 12287 id = 2 }
			name = "6th (AlTahreer) Mechanized Brigade "
			strength = 100
			type = cavalry
			model = 2
		}
		division = {
			id = { type = 12287 id = 3 }
			name = "15th (Mubark) Armoured Brigade "
			strength = 100
			type = light_armor
			model = 4
		}
	}
	landunit = {
		id = { type = 12287 id = 4 }
		location = 1041
		name = "2nd Royal Kuwaiti Corps"
		division = {
			id = { type = 12287 id = 5 }
			name = "26th (AlSoor) Mechanized Brigade "
			strength = 100
			type = cavalry
			model = 2
		}
		division = {
			id = { type = 12287 id = 6 }
			name = "35th (AlShaheed) Armoured Brigade "
			strength = 100
			type = light_armor
			model = 4
		}
		division = {
			id = { type = 12287 id = 7 }
			name = "94th (AlYarmouk) Mechanized Brigade "
			strength = 100
			type = cavalry
			model = 2
		}
	}
	landunit = {
		id = { type = 12287 id = 8 }
		location = 1032
		name = "Kuwaiti Royal Guard"
		division = {
			experience = 10
			id = { type = 12287 id = 9 }
			name = "Royal Guard Brigade"
			strength = 100
			type = bergsjaeger
			model = 14
			extra = engineer
			brigade_model = 4
		}
	}
	# #####################################
	# AIR FORCE
	# #####################################
	airunit = {
		id = { type = 12287 id = 100 }
		location = 1041
		base = 1041
		name = "Kuwait Air Force"
		division = {
			id = { type = 12287 id = 101 }
			name = "9th Fighter Squadron"
			type = interceptor
			strength = 100
			model = 2
		}
		division = {
			id = { type = 12287 id = 102 }
			name = "25th Fighter Squadron"
			type = interceptor
			strength = 100
			model = 2
		}
	}
}
