# #############################
# Country definition for MOZ #
# #############################

country = {
	tag = MOZ
	# Resource Reserves
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 10
	manpower = 50
	capital = 855
	diplomacy = { }
	nationalprovinces = {
		853 854 855 856 857 858
	}
	ownedprovinces = {
		853 854 855 856 857 858
	}
	controlledprovinces = {
		853 854 855 856 857 858
	}
	techapps = {
		# Industry
		5010
		5020
		5030
		5040
		5050
		5060
		5070
		5080
		5090
		# Army Equip:
		2000
		2010
		2300
		2400
		2200
		2210
		2500
		2600
		2700
		2800
		2810
		# Land Docs
		6010
		6020
		6910
		6100
		6110
		6120
		6160
		6600
		6610
		# Army Org
		1000
		1010
		1500
		1300
		1260
		1980
		1900
		# Secret Tech:
		7330
	}
	policy = {
		date = { year = 0 month = march day = 0 }
		democratic = 8
		political_left = 10
		free_market = 6
		freedom = 3
		professional_army = 1
		defense_lobby = 2
		interventionism = 3
	}
	# #####################################
	# ARMY
	# #####################################
	landunit = {
		id = { type = 12204 id = 1 }
		location = 857
		name = "Army of Mozambique"
		division = {
			id = { type = 12204 id = 2 }
			name = "1st Motorized Division"
			strength = 100
			type = motorized
			model = 1
		}
		division = {
			id = { type = 12204 id = 3 }
			name = "2nd Infantry Division"
			strength = 100
			type = motorized
			model = 1
		}
	}
}
