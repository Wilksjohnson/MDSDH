# #############################
# Country definition for U66 #
# #############################

country = {
	tag = U66
	regular_id = SOM
	# Resource Reserves
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 10
	capital = 832
	manpower = 12
	transports = 20
	escorts = 0
	diplomacy = { }
	nationalprovinces = { 832 }
	ownedprovinces = { 832 }
	controlledprovinces = { 832 }
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
		democratic = 10
		political_left = 7
		free_market = 5
		freedom = 7
		professional_army = 3
		defense_lobby = 8
		interventionism = 8
	}
	# #####################################
	# ARMY
	# #####################################
	landunit = {
		id = { type = 12282 id = 1 }
		location = 832
		name = "I. Corps al-Somaliland"
		division = {
			id = { type = 12282 id = 2 }
			name = "1st mechanized Brigade"
			strength = 100
			type = cavalry
			model = 5
		}
		division = {
			id = { type = 12282 id = 3 }
			name = "2nd Infantry Division"
			strength = 100
			type = motorized
			model = 1
		}
		division = {
			id = { type = 12282 id = 4 }
			name = "2nd Infantry Division"
			strength = 100
			type = motorized
			model = 1
		}
		division = {
			id = { type = 12282 id = 5 }
			name = "2nd Infantry Division"
			strength = 100
			type = motorized
			model = 1
		}
	}
}
