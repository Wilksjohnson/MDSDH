# #############################
# Country definition for VEN #
# #############################

country = {
	tag = VEN
	# Resource Reserves
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 20
	capital = 1993
	manpower = 49
	transports = 65
	escorts = 0
	diplomacy = {
		relation = { tag = PER value = 150 }
		relation = { tag = CHC value = 150 }
		relation = { tag = CUB value = 200 }
	}
	nationalprovinces      = {  1988 1989 1995 1996 1992 1993 1998  } 
   ownedprovinces         = {  1988 1989 1995 1996 1992 1993  } 
   controlledprovinces    = {  1988 1989 1995 1996 1992 1993  }
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
		2070 2300
		2310 2320
		2400 2410
		2420 2200
		2210 2220
		2500 2510
		2520 2600
		2610 2620
		2700 2710
		2720 2800
		2810 2820
		# Army Equipment
		1000 1050
		1010 1060
		1070 1500
		1510 1520
		1200 1210
		1220 1300
		1310 1320
		1400 1410
		1420 1900
		1910 1920
		1260 1270
		1980 # Land Docs
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
		7330 7310
		# Air Force
		4400 4410
		4000 4010
		4570 4100
		4110 4640
		4650 4700
		4710 4750
		4760 # Navy Techs
		3000 3010
		3700 3710
		3590 3850
		3860 # Navy Doctrines
		8900 8910
		8950 8960
		8400 8410
		8000 8010
		8500 8510
	}
	policy = {
		date = { year = 0 month = march day = 0 }
		democratic = 8
		political_left = 10
		free_market = 4
		freedom = 4
		professional_army = 3
		defense_lobby = 3
		interventionism = 6
	}
	# #####################################
	# ARMY
	# #####################################
	landunit = {
		id = { type = 22800 id = 1 }
		location = 1988
		name = "I División de Infantería"
		division = {
			id = { type = 22800 id = 2 }
			name = "I División de Infantería"
			strength = 100
			type = motorized
			model = 2
		}
	}
        landunit = {
		id = { type = 22800 id = 3 }
		location = 1989
		name = "II División de Infantería"
		division = {
			id = { type = 22800 id = 4 }
			name = "II División de Infantería"
			strength = 100
			type = motorized
			model = 2
		}
	}
	landunit = {
		id = { type = 22800 id = 5 }
		location = 1993
		name = "III División de Infantería"
		division = {
			id = { type = 22800 id = 6 }
			name = "III División de Infantería"
			strength = 100
			type = motorized
			model = 2
		}
	}
        landunit = {
		id = { type = 22800 id = 7 }
		location = 1993
		name = "IV División Blindada"
		division = {
			id = { type = 22800 id = 8 }
			name = "IV División Blindada"
			strength = 100
			type = armor
			model = 12
		}
	}
        landunit = {
		id = { type = 22800 id = 9 }
		location = 1992
		name = "V División de Infantería de Selva"
		division = {
			id = { type = 22800 id = 10 }
			name = "51a Brigada de Selva"
			strength = 100
			type = bergsjaeger
			model = 13
		}
                division = {
			id = { type = 22800 id = 11 }
			name = "52a Brigada de Selva"
			strength = 100
			type = bergsjaeger
			model = 13
		}
                division = {
			id = { type = 22800 id = 12 }
			name = "53a Brigada de Selva"
			strength = 100
			type = bergsjaeger
			model = 13
		}
	}
        landunit = {
		id = { type = 22800 id = 13 }
		location = 1996
		name = "IX División de Caballería Motorizada e Hipomóvil"
		division = {
			id = { type = 22800 id = 14 }
			name = "IX División de Caballería Motorizada e Hipomóvil"
			strength = 100
			type = motorized
			model = 2
		}
	}
        landunit = {
		id = { type = 22800 id = 15 }
		location = 1993
		name = "Infantería de Marina Bolivariana"
		division = {
			id = { type = 22800 id = 16 }
			name = "División de Infantería de Marina 'General Simón Bolívar'"
			strength = 100
			type = marine
			model = 15
		}
	}
	# ###################################
	# NAVY
	# ###################################
	navalunit = {
		id = { type = 22800 id = 300 }
		location = 1993
		base = 1993
		name = "Armada Nacional de Venezuela"
		division = {
			id = { type = 22800 id = 301 }
			name = "ARV Mariscal Sucre"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 22800 id = 302 }
			name = "ARV Almirante Brión"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 22800 id = 303 }
			name = "ARV General Urdaneta"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 22800 id = 304 }
			name = "ARV General Soublette"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 22800 id = 305 }
			name = "ARV General Salóm"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 22800 id = 306 }
			name = "ARV Almirante Garcia"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 22800 id = 307 }
			name = "1a Escuadrilla de Transporte"
			type = transport
			model = 0
		}
		division = {
			id = { type = 22800 id = 308 }
			name = "2a Escuadrilla de Transporte"
			type = transport
			model = 0
		}
	}
	navalunit = {
		id = { type = 22800 id = 309 }
		location = 1993
		base = 1993
		name = "Submarine Fleet"
		division = {
			id = { type = 22800 id = 310 }
			name = "ARV Sábalo"
			type = submarine
			model = 2
		}
		division = {
			id = { type = 22800 id = 311 }
			name = "ARV Caribe"
			type = submarine
			model = 2
		}
	}
	# ####################################
	# AIR FORCE
	# ####################################
	airunit = {
		id = { type = 22800 id = 200 }
		location = 1993
		base = 1993
		name = "Fuerza Aérea Venezolana"
		division = {
			id = { type = 22800 id = 201 }
			name = "Grupo Aéreo 4"
			type = tactical_bomber
			strength = 65
			model = 0
		}
                division = {
			id = { type = 22800 id = 202 }
			name = "Grupo Aéreo 11"
			type = multi_role
			strength = 65
			model = 2
		}
                division = {
			id = { type = 22800 id = 203 }
			name = "Grupo Aéreo 13"
			type = interceptor
			strength = 50
			model = 2
		}
                division = {
			id = { type = 22800 id = 204 }
			name = "Grupo Aéreo 16"
			type = interceptor
			strength = 50
			model = 2
		}
	}
}
