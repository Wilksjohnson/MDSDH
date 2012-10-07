# #############################
# Country definition for U94 #
# #############################

country = {
	tag = U94
	# Resource Reserves
	energy = 1000
	metal = 500
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 10
	manpower = 40
	capital = 944
	diplomacy = { }
	SpyInfo                = {  country = "U94" NumberOfSpies = 3  } 
   nationalprovinces      = {  942 943 944 946 947  } 
   ownedprovinces         = {  942 943 944 946 947  } 
   controlledprovinces    = {  942 943 944 946 947  }
	techapps = {
		# Industry:
		5010
		5020
		5030
		5040
		5050
		5070
		5090
		# Army Equip:
		2400
		2200
		2500
		2600
		2800
		# Army Org:
		1300
		1900
		1260
		1970
		# Army Doc:
		6100
		6110
		6160
		6010
		6020
		6600
		6610
		6910
		# Secret Tech:
		7330
	}
	policy = {
		date = { year = 0 month = march day = 0 }
		democratic = 7
		political_left = 5
		free_market = 5
		freedom = 3
		professional_army = 1
		defense_lobby = 2
		interventionism = 4
	}
	# #####################################
	# ARMY
	# #####################################
	landunit = {
		id = { type = 12208 id = 1 }
		location = 944
		name = "Niger Army Corps"
		division = {
			id = { type = 12208 id = 2 }
			name = "1st Infantry Division"
			strength = 100
			type = motorized
			model = 1
		}
		division = {
			id = { type = 12208 id = 3 }
			name = "2nd Infantry Division"
			strength = 100
			type = motorized
			model = 1
		}
	}
}
