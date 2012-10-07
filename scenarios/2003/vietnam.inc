# #############################
# Country definition for VIE #
# #############################

country = {
	tag = VIE
	# Resource Reserves
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 50
	manpower = 160
	capital = 1395
	transports = 94
	escorts = 0
	diplomacy = {
		relation = { tag = LAO value = 200 access = yes }
		relation = { tag = CMB value = 200 access = yes }
	}
	SpyInfo                = {  country = "VIE"  NumberOfSpies = 3  } 
   nationalprovinces      = {  1392 1393 1395 1396 1397 1399 1403  } 
   ownedprovinces         = {  1392 1393 1395 1396 1397 1399 1403  } 
   controlledprovinces    = {  1392 1393 1395 1396 1397 1399 1403  } 
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
		# Army equip
		2000 2050
		2010 2300
		2400 2410
		2200 2210
		2500 2510
		2600 2610
		2700 2710
		2800 2810
		# Army Org
		1980 1260
		1000 1050
		1500 1200
		1300 1310
		1400 1410
		1700 1900
		1910 # Aircraft
		4800 4700
		4710 4750
		4760 4000
		4010 4100
		4110 4120
		4640 4650
		4500 4400
		# Land Docs
		6910 6010
		6020 6130
		6600 6610
		6100 6110
		6120 6140
		6150 6160
		6170 # Air Docs
		9010 9510
		9050 9060
		9070 # Navy Techs
		3000 3010
		3590 3850
		3860 # Navy Doctrines
		8900 8910
		8950 8960
		8000 8010
		8500 8510
		# Secret Tech
		7330
	}
	policy = {
		date = { year = 0 month = march day = 0 }
		democratic = 3
		political_left = 7
		free_market = 6
		freedom = 2
		professional_army = 2
		defense_lobby = 4
		interventionism = 6
	}
	# ####################################
	# ARMY
	# ####################################
	landunit = {
		id = { type = 22900 id = 1 }
		location = 1395
		name = "1st Corps"
		division = {
			id = { type = 22900 id = 2 }
			name = "308th Division"
			strength = 100
			type = infantry
			model = 2
		}
		division = {
			id = { type = 22900 id = 3 }
			name = "312th Division"
			strength = 100
			type = motorized
			model = 2
		}
            division = {
			id = { type = 22900 id = 4 }
			name = "390th Division"
			strength = 100
			type = motorized
			model = 2
		}
		division = {
			id = { type = 22900 id = 5 }
			name = "202nd Tank Brigade"
			strength = 100
			type = light_armor
			model = 1
		}
	}
	landunit = {
		id = { type = 22900 id = 6 }
		location = 1392
		name = "2nd Corps"
		division = {
			id = { type = 22900 id = 7 }
			name = "304th Division"
			strength = 100
			type = infantry
			model = 2
		}
		division = {
			id = { type = 22900 id = 8 }
			name = "306th Division"
			strength = 100
			type = motorized
			model = 2
		}
		division = {
			id = { type = 22900 id = 9 }
			name = "325th Division"
			strength = 100
			type = motorized
			model = 2
		}
		division = {
			id = { type = 22900 id = 10 }
			name = "203rd Tank Brigade"
			strength = 100
			type = light_armor
			model = 1
            }
	}
	landunit = {
		id = { type = 22900 id = 11 }
		location = 1399
		name = "3rd Corps"
		division = {
			id = { type = 22900 id = 12 }
			name = "10th Division"
			strength = 100
			type = motorized
			model = 2
		}
		division = {
			id = { type = 22900 id = 13 }
			name = "31st Division"
			strength = 100
			type = motorized
			model = 2
		}
            division = {
			id = { type = 22900 id = 14 }
			name = "320th Division"
			strength = 100
			type = motorized
			model = 2
		}
	}
	landunit = {
		id = { type = 22900 id = 15 }
		location = 1395
		name = "4th Corps"
		division = {
			id = { type = 22900 id = 16 }
			name = "7th Division"
			strength = 100
			type = motorized
			model = 2
		}
		division = {
			id = { type = 22900 id = 17 }
			name = "9th Division"
			strength = 100
			type = motorized
			model = 2
		}
		division = {
			id = { type = 22900 id = 18 }
			name = "324th Division"
			strength = 100
			type = motorized
			model = 2
		}
	}
	landunit = {
		id = { type = 22900 id = 19 }
		location = 1395
		name = "1st Military Region"
		division = {
			id = { type = 22900 id = 20 }
			name = "3rd Division"
			strength = 10
			type = motorized
			model = 1
		}
		division = {
			id = { type = 22900 id = 21 }
			name = "346th Division"
			strength = 10
			type = motorized
			model = 1
		}
	}
	landunit = {
		id = { type = 22900 id = 22 }
		location = 1395
		name = "2nd Military Region"
		division = {
			id = { type = 22900 id = 23 }
			name = "316th Division"
			strength = 10
			type = infantry
			model = 1
		}
		division = {
			id = { type = 22900 id = 24 }
			name = "355th Division"
			strength = 10
			type = motorized
			model = 1
		}
	}
	landunit = {
		id = { type = 22900 id = 25 }
		location = 1395
		name = "3rd Military Region"
		division = {
			id = { type = 22900 id = 26 }
			name = "350th Division"
			strength = 10
			type = motorized
			model = 1
		}
		division = {
			id = { type = 22900 id = 27 }
			name = "395th Division"
			strength = 10
			type = motorized
			model = 1
		}
	}
      landunit = {
		id = { type = 22900 id = 28 }
		location = 1395
		name = "4th Military Region"
		division = {
			id = { type = 22900 id = 29 }
			name = "341st Division"
			strength = 10
			type = motorized
			model = 1
		}
		division = {
			id = { type = 22900 id = 30 }
			name = "968th Division"
			strength = 10
			type = motorized
			model = 1
		}
	}
      landunit = {
		id = { type = 22900 id = 31 }
		location = 1395
		name = "5th Military Region"
		division = {
			id = { type = 22900 id = 32 }
			name = "2nd Division"
			strength = 10
			type = motorized
			model = 1
		}
		division = {
			id = { type = 22900 id = 33 }
			name = "305th Division"
			strength = 10
			type = motorized
			model = 1
		}
            division = {
			id = { type = 22900 id = 34 }
			name = "315th Division"
			strength = 10
			type = motorized
			model = 1
		}
	}
      landunit = {
		id = { type = 22900 id = 35 }
		location = 1395
		name = "7th Military Region"
		division = {
			id = { type = 22900 id = 36 }
			name = "5th Division"
			strength = 10
			type = motorized
			model = 1
		}
		division = {
			id = { type = 22900 id = 37 }
			name = "6th Division"
			strength = 10
			type = motorized
			model = 1
		}
            division = {
			id = { type = 22900 id = 38 }
			name = "302nd Division"
			strength = 10
			type = motorized
			model = 1
		}
            division = {
			id = { type = 22900 id = 39 }
			name = "317th Division"
			strength = 10
			type = motorized
			model = 1
		}

	}
      landunit = {
		id = { type = 22900 id = 40 }
		location = 1395
		name = "9th Military Region"
		division = {
			id = { type = 22900 id = 41 }
			name = "4th Division"
			strength = 10
			type = motorized
			model = 1
		}
		division = {
			id = { type = 22900 id = 42 }
			name = "8th Division"
			strength = 10
			type = motorized
			model = 1
		}
            division = {
			id = { type = 22900 id = 43 }
			name = "330th Division"
			strength = 10
			type = motorized
			model = 1
		}
            division = {
			id = { type = 22900 id = 44 }
			name = "339th Division"
			strength = 10
			type = motorized
			model = 1
		}
	}
      landunit = {
		id = { type = 22900 id = 45 }
		location = 1395
		name = "High Command of Capital Hanoi"
		division = {
			id = { type = 22900 id = 46 }
			name = "301st Division"
			strength = 100
			type = motorized
			model = 1
		}
	}
	# ####################################
	# NAVY
	# ####################################
	navalunit = {
		id = { type = 22900 id = 200 }
		location = 1399
		base = 1399
		name = "1st Fleet"
		division = {
			id = { type = 22900 id = 201 }
			name = "HQ Pham Ngu Lao"
			type = destroyer
			model = 3
		}
		division = {
			id = { type = 22900 id = 202 }
			name = "HQ FF-002"
			type = destroyer
			model = 3
		}
		division = {
			id = { type = 22900 id = 203 }
			name = "HQ FF-003"
			type = destroyer
			model = 3
		}
		division = {
			id = { type = 22900 id = 204 }
			name = "HQ FF-004"
			type = destroyer
			model = 3
		}
		division = {
			id = { type = 22900 id = 205 }
			name = "HQ FF-005"
			type = destroyer
			model = 3
		}
		division = {
			id = { type = 22900 id = 206 }
			name = "HQ FF-006"
			type = destroyer
			model = 4
		}
	}
	# ####################################
	# AIR FORCE
	# ####################################
	airunit = {
		id = { type = 22900 id = 100 }
		location = 1395
		base = 1395
		name = "371st Air Force Division"
		division = {
			id = { type = 22900 id = 101 }
			name = "921st Fighter Regiment"
			type = tactical_bomber
			strength = 50
			model = 1
		}
		division = {
			id = { type = 22900 id = 102 }
			name = "923rd Fighter-bomber Regiment"
			type = multi_role
			strength = 65
			model = 2
		}
		division = {
			id = { type = 22900 id = 103 }
			name = "927th Fighter Regiment"
			type = interceptor
			strength = 65
			model = 1
		}
		division = {
			id = { type = 22900 id = 104 }
			name = "931st Fighter Regiment"
			type = tactical_bomber
			strength = 65
			model = 1
		}
            division = {
			id = { type = 22900 id = 105 }
			name = "918th Air Transport Regiment"
			type = transport_plane
			strength = 100
			model = 1
		}
	}
	airunit = {
		id = { type = 22900 id = 106 }
		location = 1399
		base = 1399
		name = "372nd Air Force Division"
		division = {
			id = { type = 22900 id = 107 }
			name = "929th Fighter-Bomber Regiment"
			type = interceptor
			strength = 100
			model = 1
		}
		division = {
			id = { type = 22900 id = 108 }
			name = "940th Fighter Regiment"
			type = multi_role
			strength = 100
			model = 2
		}
	}
	airunit = {
		id = { type = 22900 id = 109 }
		location = 1395
		base = 1395
		name = "370th Air Force Division"
		division = {
			id = { type = 22900 id = 110 }
			name = "937th Fighter-Bomber Regiment"
			type = tactical_bomber
			strength = 100
			model = 1
		}
		division = {
			id = { type = 22900 id = 111 }
			name = "935th Fighter Regiment"
			type = multi_role
			strength = 100
			model = 2
		}
	}
}
