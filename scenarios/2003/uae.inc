# #############################
# Country definition for U52 #
# #############################

country = {
	tag = U52
	# Resource Reserves
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 1000
	supplies = 500
	money = 300
	manpower = 10
	capital = 1039
	transports = 56
	escorts = 0
	diplomacy = { }
	nationalprovinces = { 1039 }
	ownedprovinces = { 1039 }
	controlledprovinces = { 1039 }
	techapps = {
		# Navy Techs
		3000
		3010
		3590
		3850
		3860
		# Navy Doctrines
		8900
		8910
		8950
		8960
		8000
		8010
		8500
		8510
	}
	policy = {
		date = { year = 0 month = march day = 0 }
		democratic = 2
		political_left = 4
		free_market = 8
		freedom = 3
		professional_army = 10
		defense_lobby = 4
		interventionism = 5
	}
	# ####################################
	# ARMY
	# ####################################
	landunit = {
		id = { type = 22200 id = 1 }
		location = 1039
		name = "United Arab Emirates Army"
		division = {
			id = { type = 22200 id = 2 }
			name = "1st Mechanized Brigade"
			strength = 100
			type = cavalry
			model = 10
		}
		division = {
			id = { type = 22200 id = 3 }
			name = "2nd Mechanized Brigade"
			strength = 100
			type = cavalry
			model = 10
		}
		division = {
			id = { type = 22200 id = 4 }
			name = "1st Infantry Brigade"
			strength = 100
			type = mechanized
			model = 0
		}
		division = {
			id = { type = 22200 id = 5 }
			name = "2nd Infantry Brigade"
			strength = 100
			type = mechanized
			model = 0
		}
		division = {
			id = { type = 22200 id = 6 }
			name = "3rd Mechanized Brigade"
			strength = 100
			type = cavalry
			model = 10
		}
		division = {
			experience = 10
			id = { type = 22200 id = 7 }
			name = "Royal Guard Brigade"
			strength = 100
			type = bergsjaeger
			model = 0
			extra = engineer
			brigade_model = 4
		}
		division = {
			id = { type = 22200 id = 8 }
			name = "1st Armored Brigade"
			strength = 100
			type = light_armor
			model = 0
		}
		division = {
			id = { type = 22200 id = 9 }
			name = "2nd Armored Brigade"
			strength = 100
			type = light_armor
			model = 0
		}
	}
	landunit = {
		id = { type = 22200 id = 10 }
		location = 1039
		name = "Dubai Corps"
		division = {
			id = { type = 22200 id = 11 }
			name = "1st Dubai Brigade"
			strength = 100
			type = cavalry
			model = 10
		}
		division = {
			id = { type = 22200 id = 12 }
			name = "2nd Dubai Brigade"
			strength = 100
			type = cavalry
			model = 10
		}
	}
	# ####################################
	# NAVY
	# ####################################
	navalunit = {
		id = { type = 22200 id = 200 }
		location = 1039
		base = 1039
		name = "1st Fleet"
		division = {
			id = { type = 22200 id = 201 }
			name = "Abu Dhabi"
			type = destroyer
			model = 4
		}
		division = {
			id = { type = 22200 id = 202 }
			name = "Al Amarat"
			type = destroyer
			model = 4
		}
	}
	# ####################################
	# AIR FORCE
	# ####################################
	airunit = {
		id = { type = 22200 id = 100 }
		location = 1039
		base = 1039
		name = "1st Wing"
		division = {
			id = { type = 22200 id = 101 }
			name = "1st Squadron"
			type = interceptor
			strength = 100
			model = 9
		}
		division = {
			id = { type = 22200 id = 102 }
			name = "2nd Squadron"
			type = interceptor
			strength = 100
			model = 9
		}
		division = {
			id = { type = 22200 id = 103 }
			name = "3rd Squadron"
			type = interceptor
			strength = 100
			model = 9
		}
	}
	airunit = {
		id = { type = 22200 id = 104 }
		location = 1039
		base = 1039
		name = "2nd Wing"
		division = {
			id = { type = 22200 id = 105 }
			name = "71st Squadron"
			type = multi_role
			strength = 100
			model = 7
		}
		division = {
			id = { type = 22200 id = 106 }
			name = "76th Squadron"
			type = multi_role
			strength = 100
			model = 7
		}
		division = {
			id = { type = 22200 id = 107 }
			name = "86th Squadron"
			type = multi_role
			strength = 100
			model = 7
		}
	}
}
