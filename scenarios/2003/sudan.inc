# #############################
# Country definition for SUD #
# #############################

country = {
	tag = SUD
	# Resource Reserves
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 10
	manpower = 120
	capital = 810
	transports = 2
	escorts = 0
	diplomacy = {
		relation = { tag = CHC value = 150 }
		relation = { tag = PER value = 150 }
	}
	
	SpyInfo                = {  country = "SUD" NumberOfSpies = 3  } 
   nationalprovinces      = {  803 804 805 806 808 810 811 813 814 807 809 812 } 
   ownedprovinces         = {  803 804 805 806 808 810 811 813 814 807 809 812 } 
   controlledprovinces    = {  803 804 805 806 808 810 811 813 814 807 809 812 }
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
		# Army Equip
		2200 2210
		2600 2610
		2800 2810
		2700 2710
		2000 2010
		2500 2510
		2300 2310
		2400 2410
		# Army Org
		1970 1980
		1260 1900
		1910 1800
		1700 1000
		1010 1500
		1510 1400
		1410 1300
		1310 1200
		1210 # Aircraft
		4700 4710
		4750 4760
		4800 4900
		4000 4010
		4020 4640
		4650 # Land Docs
		6910 6600
		6610 6010
		6020 6100
		6110 6120
		6140 6150
		6160 6170
	}
	policy = {
		date = { year = 0 month = march day = 0 }
		democratic = 3
		political_left = 3
		free_market = 5
		freedom = 4
		professional_army = 3
		defense_lobby = 4
		interventionism = 3
	}
	# #####################################
	# ARMY
	# #####################################
	landunit = {
		id = { type = 20400 id = 1 }
		location = 808
		name = "Central Command"
		division = {
			id = { type = 20400 id = 2 }
			name = "5th Division"
			strength = 100
			type = motorized
			model = 1
		}
	}
	landunit = {
		id = { type = 20400 id = 3 }
		location = 814
		name = "Eastern Command"
		division = {
			id = { type = 20400 id = 4 }
			name = "2nd Division"
			strength = 100
			type = motorized
			model = 1
		}
	}
	landunit = {
		id = { type = 20400 id = 5 }
		location = 804
		name = "Western Command"
		division = {
			id = { type = 20400 id = 6 }
			name = "6th Division"
			strength = 100
			type = motorized
			model = 1
		}
	}
	landunit = {
		id = { type = 20400 id = 7 }
		location = 813
		name = "Southern Command"
		division = {
			id = { type = 20400 id = 8 }
			name = "1st Division"
			strength = 100
			type = infantry
			model = 10
		}
		division = {
			id = { type = 20400 id = 9 }
			name = "12th Division"
			strength = 100
			type = infantry
			model = 9
		}
	}
	landunit = {
		id = { type = 20400 id = 10 }
		location = 810
		name = "Khartoum Command"
		division = {
			id = { type = 20400 id = 11 }
			name = "1st Air Assault brigade"
			strength = 100
			type = militia
			model = 6
		}
		division = {
			id = { type = 20400 id = 12 }
			name = "1st Airborne Brigade"
			strength = 100
			type = paratrooper
			model = 0
		}
		division = {
			id = { type = 20400 id = 13 }
			name = "7th Armored Division"
			strength = 100
			type = armor
			model = 0
		}
	}
	landunit = {
		id = { type = 20400 id = 14 }
		location = 810
		name = "North Command"
		division = {
			id = { type = 20400 id = 15 }
			name = "3rd Division"
			strength = 100
			type = infantry
			model = 5
		}
		division = {
			id = { type = 20400 id = 16 }
			name = "15th Division"
			strength = 100
			type = infantry
			model = 5
		}
	}
	# ####################################
	# AIR FORCE
	# ####################################
	airunit = {
		id = { type = 20400 id = 200 }
		location = 810
		base = 810
		name = "Sudanese Air Force"
		division = {
			id = { type = 20400 id = 201 }
			name = "1st Squadron"
			type = interceptor
			strength = 50
			model = 6
		}
		division = {
			id = { type = 20400 id = 202 }
			name = "7th Squadron"
			type = interceptor
			strength = 100
			model = 7
		}
		division = {
			id = { type = 20400 id = 203 }
			name = "4th Squadron"
			type = interceptor
			strength = 50
			model = 8
		}
	}
	airunit = {
		id = { type = 20400 id = 204 }
		location = 810
		base = 810
		name = "Transport Command"
		division = {
			id = { type = 20400 id = 205 }
			name = "1st Transport Squadron"
			type = transport_plane
			strength = 100
			model = 1
		}
	}
}
