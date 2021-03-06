# #############################
# Country definition for KAZ #
# #############################

country = {
	tag = KAZ
	regular_id = RUS
	# Resource Reserves
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 80
	manpower = 30
	capital = 502
	diplomacy = {
		relation = {
			tag = RUS
			value = 150
			access = yes
			guaranteed = { day = 22 month = march year = 1003 }
		}
		relation = {
			tag = CHC
			value = 150
			access = yes
			guaranteed = { day = 22 month = march year = 1003 }
		}
		relation = {
			tag = UZB
			value = 150
			access = yes
			guaranteed = { day = 22 month = march year = 1003 }
		}
		relation = {
			tag = KYG
			value = 150
			access = yes
			guaranteed = { day = 22 month = march year = 1003 }
		}
	}
	SpyInfo                = {  country = "KAZ" NumberOfSpies = 3  } 
   nationalprovinces      = {  498 499 500 501 502 503 504 505 506 507 1108 1109 1110 1111 1112 1113 1114 1115 1116 1117 1118   } 
   ownedprovinces         = {  498 499 500 501 502 503 504 505 506 507 1108 1109 1110 1111 1112 1113 1114 1115 1116 1117 1118   } 
   controlledprovinces    = {  498 499 500 501 502 503 504 505 506 507 1108 1109 1110 1111 1112 1113 1114 1115 1116 1117 1118   }
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
		# Army Equipment
		2000 2050
		2010 2060
		2300 2310
		2320 2400
		2410 2420
		2200 2210
		2220 2500
		2510 2520
		2600 2610
		2620 2700
		2710 2720
		2800 2810
		2820 # Army Equipment
		1000 1050
		1010 1060
		1500 1510
		1520 1200
		1210 1220
		1300 1310
		1320 1400
		1410 1420
		1900 1910
		1920 1260
		1270 1970
		# Land Docs
		6600 6610
		6010 6020
		6910 6100
		6110 6120
		6160 6170
		6200 6210
		6220 6260
		6270 # Air Docs
		9010 9510
		9050 9060
		9070 9150
		9160 9170
		# Secret Weapons
		7010 7060
		7070 7100
		7110 7180
		7190 7200
		7330 7310
		# Air Force
		4400 4410
		4100 4110
		4120 4550
		4500 4510
		4640 4650
		4700 4710
		4750 4760
	}
	policy = {
		date = { year = 0 month = march day = 0 }
		democratic = 3
		political_left = 5
		free_market = 7
		freedom = 3
		professional_army = 2
		defense_lobby = 2
		interventionism = 5
	}
	# #####################################
	# ARMY
	# #####################################
	landunit = {
		id = { type = 13400 id = 1 }
		location = 503
		name = "Regional Command 'Astana'"
		division = {
			id = { type = 13400 id = 2 }
			name = "7 Motostrelkovaya Brygada"
			strength = 100
			type = cavalry
			model = 1
		}
	}
	landunit = {
		id = { type = 13400 id = 3 }
		location = 498
		name = "Regional Command 'East'"
		division = {
			id = { type = 13400 id = 4 }
			name = "78 Tankovaya Diviziya"
			strength = 100
			type = armor
			model = 12
		}
                division = {
			id = { type = 13400 id = 5 }
			name = "3 Motostrelkovaya Brygada"
			strength = 100
			type = cavalry
			model = 1
		}
                division = {
			id = { type = 13400 id = 6 }
			name = "4 Motostrelkovaya Brygada"
			strength = 100
			type = cavalry
			model = 1
		}
	}
	landunit = {
		id = { type = 13400 id = 7 }
		location = 1114
		name = "Regional Command 'West'"
		division = {
			id = { type = 13400 id = 8 }
			name = "4 Motostrelkovaya Brygada"
			strength = 100
			type = cavalry
			model = 1
		}
	}
	landunit = {
		id = { type = 13400 id = 9 }
		location = 1108
		name = "Regional Command 'South'"
		division = {
			id = { type = 13400 id = 10 }
			name = "4 Motostrelkovaya Diviziya"
			strength = 100
			type = infantry
			model = 1
		}
                division = {
			id = { type = 13400 id = 11 }
			name = "5 Motostrelkovaya Brygada"
			strength = 100
			type = cavalry
			model = 1
		}
                division = {
			id = { type = 13400 id = 12 }
			name = "6 Motostrelkovaya Brygada"
			strength = 100
			type = cavalry
			model = 1
		}
	}
        landunit = {
		id = { type = 13400 id = 13 }
		location = 502
		name = "The Air Mobile Force"
                division = {
			experience = 5
			id = { type = 13400 id = 14 }
			name = "35 Vozdushno-Shturmovaya Brygada"
			strength = 100
			type = militia
			model = 2
		}
                division = {
			experience = 5
			id = { type = 13400 id = 15 }
			name = "36 Vozdushno-Shturmovaya Brygada"
			strength = 100
			type = militia
			model = 1
		}
                division = {
			experience = 5
			id = { type = 13400 id = 16 }
			name = "37 Vozdushno-Shturmovaya Brygada"
			strength = 100
			type = militia
			model = 1
		}
	}
	# #####################################
	# AIR FORCE
	# #####################################
	airunit = {
		id = { type = 13400 id = 100 }
		location = 1110
		base = 1110
		name = "Kazakhstani Air Force"
		division = {
			id = { type = 13400 id = 101 }
			name = "600 Aviatsiyna Brygada"
			type = interceptor
			strength = 100
			model = 2
		}
		division = {
			id = { type = 13400 id = 102 }
			name = "602 Aviatsiyna Brygada"
			type = cas
			strength = 100
			model = 0
		}
		division = {
			id = { type = 13400 id = 103 }
			name = "604 Aviatsiyna Brygada"
			type = multi_role
			strength = 100
			model = 2
		}
                division = {
			id = { type = 13400 id = 104 }
			name = "610 Aviatsiyna Brygada"
			type = multi_role                 # mig 31
			strength = 50
			model = 2
		}
	}
}
