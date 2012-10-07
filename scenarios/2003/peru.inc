# #############################
# Country definition for PRU #
# #############################

country = {
	tag = PRU
	# Resource Reserves
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 10
	capital = 2016
	manpower = 49
	transports = 4
	escorts = 0
	diplomacy = { }
	nationalprovinces      = {  2017 2015 2016 2011 2014 2012 2013 2018 2008 2010 2033  } 
   ownedprovinces         = {  2017 2015 2016 2011 2014 2018 2013 2012 2008 2010 2033  } 
   controlledprovinces    = {  2017 2015 2016 2011 2014 2018 2013 2012 2008 2010 2033  } 
	techapps = {
		
		# Industry
		5010
		5110
		5020
		5120
		5030
		5130
		5040
		5140
		5050
		5150
		5060
		5160
		5070
		5170
		5080
		5180
		5090
		5190
		# Army Equip
		2000
		2050
		2010
		2060
		2070
		2300
		2310
		2320
		2400
		2410
		2420
		2200
		2210
		2220
		2500
		2510
		2520
		2600
		2610
		2620
		2700
		2710
		2720
		2800
		2810
		2820
		# Army Org
		1000
		1050
		1010
		1060
		1070
		1500
		1510
		1520
		1300
		1310
		1320
		1900
		1910
		1920
		1260
		1270
		1960
		1980
		# Land Docs
		6100
		6200
		6110
		6210
		6120
		6220
		6160
		6260
		6170
		6270
		6010
		6020
		6930
		6600
		6610
		# Air Force
		4100
		4110
		4120
		4200
		4210
		4570
		4400
		4410
		4640
		4650
		4700
		4710
		4750
		4760
		4800
		4810
		4900
		4910
		# Air Docs
		9050
		9130
		9060
		9070
		9510
		9520
		9020
		# Secret techs
		7330
		7310
		# Navy Techs
		3000
		3010
		3200
		3700
		3710
		37710
		3590
		3850
		3860
		# Navy Doctrines
		8900
		8910
		8950
		8960
		8400
		8410
		8000
		8010
		8500
		8510
		8200
		8210
		8700
		8710
	}
	policy = {
		date = { year = 0 month = march day = 0 }
		democratic = 9
		political_left = 5
		free_market = 7
		freedom = 7
		professional_army = 3
		defense_lobby = 2
		interventionism = 5
	}
	# #####################################
	# ARMY
	# #####################################
	landunit = {
		id = { type = 18000 id = 1 }
		location = 2018
		name = "1st Military Region"
		division = {
			id = { type = 18000 id = 2 }
			name = "3rd Motorized Division"
			strength = 100
			type = motorized
			model = 2
		}
	}
	landunit = {
		id = { type = 18000 id = 3 }
		location = 2016
		name = "2nd Military Region"
		division = {
			id = { type = 18000 id = 4 }
			name = "4th Motorized Division"
			strength = 100
			type = motorized
			model = 2
		}
		division = {
			id = { type = 18000 id = 5 }
			name = "1st Armored Brigade"
			strength = 100
			type = light_armor
			model = 1
		}
		division = {
			id = { type = 18000 id = 6 }
			name = "1st Armored Cavalry Brigade"
			strength = 100
			type = light_armor
			model = 1
		}
	}
	landunit = {
		id = { type = 18000 id = 7 }
		location = 2017
		name = "3rd Military Region"
		division = {
			id = { type = 18000 id = 8 }
			name = "1st Motorized Division"
			strength = 100
			type = motorized
			model = 2
		}
		division = {
			id = { type = 18000 id = 9 }
			name = "2nd Motorized Division"
			strength = 100
			type = motorized
			model = 2
		}
	}
	landunit = {
		id = { type = 18000 id = 10 }
		location = 2008
		name = "5th Military Region"
		division = {
			experience = 5
			id = { type = 18000 id = 11 }
			name = "1st Special Forces Brigade"
			strength = 100
			type = bergsjaeger
			model = 0
		}
	}
	# ###################################
	# NAVY
	# ###################################
	navalunit = {
		id = { type = 18000 id = 300 }
		location = 2016
		base = 2016
		name = "Surface Fleet"
		division = {
			id = { type = 18000 id = 301 }
			name = "BAP Almirante Grau"
			type = battlecruiser
			model = 2
		}
		division = {
			id = { type = 18000 id = 302 }
			name = "BAP Meliton Carvajal"
			type = destroyer
			model = 4
		}
		division = {
			id = { type = 18000 id = 303 }
			name = "BAP Manuel Villavicencio"
			type = destroyer
			model = 4
		}
		division = {
			id = { type = 18000 id = 304 }
			name = "BAP Montero"
			type = destroyer
			model = 4
		}
		division = {
			id = { type = 18000 id = 305 }
			name = "BAP Mariategui"
			type = destroyer
			model = 4
		}
		division = {
			id = { type = 18000 id = 306 }
			name = "BAP Transport Flotilla"
			type = transport
			model = 3
		}
	}
	navalunit = {
		id = { type = 18000 id = 309 }
		location = 2016
		base = 2016
		name = "Submarine Fleet"
		division = {
			id = { type = 18000 id = 310 }
			name = "BAP Casma"
			type = submarine
			model = 4
		}
		division = {
			id = { type = 18000 id = 311 }
			name = "BAP Antofagasta"
			type = submarine
			model = 4
		}
		division = {
			id = { type = 18000 id = 312 }
			name = "BAP Pisagua"
			type = submarine
			model = 4
		}
		division = {
			id = { type = 18000 id = 313 }
			name = "BAP Chipana"
			type = submarine
			model = 4
		}
	}
	# ####################################
	# AIR FORCE
	# ####################################
	airunit = {
		id = { type = 18000 id = 200 }
		location = 2016
		base = 2016
		name = "1st Air Force"
		division = {
			id = { type = 18000 id = 201 }
			name = "4th Air Group"
			type = multi_role
			strength = 100
			model = 7
		}
		division = {
			id = { type = 18000 id = 202 }
			name = "9th Air Group"
			type = tactical_bomber
			strength = 100
			model = 5
		}
	}
	airunit = {
		id = { type = 18000 id = 203 }
		location = 2016
		base = 2016
		name = "2nd Air Force"
		division = {
			id = { type = 18000 id = 204 }
			name = "6th Air Group"
			type = multi_role
			strength = 100
			model = 7
		}
		division = {
			id = { type = 18000 id = 205 }
			name = "7th Air Group"
			type = cas
			strength = 100
			model = 1
		}
		division = {
			id = { type = 18000 id = 206 }
			name = "11th Air Group"
			type = tactical_bomber
			strength = 100
			model = 6
		}
	}
}
