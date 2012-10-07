# #############################
# Country definition for POR #
# #############################

country = {
	tag = POR
	regular_id = U72
	# Resource Reserves
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 50
	manpower = 19
	transports = 70
	escorts = 0
	capital = 476
	# NATO
	diplomacy = {
		relation = { tag = BEL value = 200 access = yes }
		relation = { tag = BUL value = 200 access = yes }
		relation = { tag = CAN value = 200 access = yes }
		relation = { tag = CZE value = 200 access = yes }
		relation = { tag = DEN value = 200 access = yes }
		relation = { tag = EST value = 200 access = yes }
		relation = { tag = FRA value = 200 access = yes }
		relation = { tag = GER value = 200 access = yes }
		relation = { tag = GRE value = 200 access = yes }
		relation = { tag = HUN value = 200 access = yes }
		relation = { tag = ICL value = 200 access = yes }
		relation = { tag = ITA value = 200 access = yes }
		relation = { tag = LAT value = 200 access = yes }
		relation = { tag = LIT value = 200 access = yes }
		relation = { tag = LUX value = 200 access = yes }
		relation = { tag = HOL value = 200 access = yes }
		relation = { tag = NOR value = 200 access = yes }
		relation = { tag = POL value = 200 access = yes }
		relation = { tag = USA value = 150 access = yes }
		relation = { tag = ROM value = 200 access = yes }
		relation = { tag = SLO value = 200 access = yes }
		relation = { tag = SLV value = 200 access = yes }
		relation = { tag = SPA value = 200 access = yes }
		relation = { tag = TUR value = 200 access = yes }
		relation = { tag = ENG value = 200 access = yes }
	}
	SpyInfo                = {  country = "POR" NumberOfSpies = 5  } 
   # Cabinda 
   nationalprovinces      = {  481 476 479 477 478 482 480  } 
   ownedprovinces         = {  481 476 479 477 478 482 480 995 994  } 
   controlledprovinces    = {  481 476 479 477 478 482 480 995 994  } 
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
		2010 2060
		2300 2310
		2400 2410
		2200 2210
		2500 2510
		2600 2610
		2700 2710
		2800 2810
		# Army Org
		1900 
		1260 
		1910 1960
		1980 1600
		1300 1310
		1500 1510
		1000 1050
		1010 1060
		# Aircraft
		4800 4810
		4700 4710
		4750 4760
		4000 4010
		4020 4550
		4400 4640
		4650 # Land Docs
		6930 6010
		6020 6600
		6610 6100
		6110 6120
		6130 6140
		6150 6160
		6170 6200
		6210 6220
		6230 6240
		6250 6260
		6270 # Air Docs
		9040 9510
		9520 9530
		9540 9050
		9060 9070
		9110 9120
		9130 9140
		9150 9190
		9200 # Navy Techs
		3000 3010
		3020 3700
		3590 3850
		3860 3870
		# Navy Doctrines
		8900 8910
		8920 8950
		8960 8970
		8400 8410
		8000 8010
		8020 8500
		8510 8520
	}
	policy = {
		date = { year = 0 month = march day = 0 }
		democratic = 10
		political_left = 10
		free_market = 9
		freedom = 9
		professional_army = 9
		defense_lobby = 3
		interventionism = 6
	}
	# #####################################
	# ARMY
	# #####################################
	landunit = {
		id = { type = 18300 id = 1 }
		location = 481
		name = "Brigada Mecanizada"
		division = {
			id = { type = 18300 id = 2 }
			name = "Brigada Mecanizada"
			strength = 100
			type = cavalry
			model = 2
		}
	}
	landunit = {
		id = { type = 18300 id = 3 }
		location = 476
		name = "Brigada de Intervenção Ligeira"
		division = {
			id = { type = 18300 id = 4 }
			name = "Brigada de Intervenção Ligeira"
			strength = 100
			type = mechanized
			model = 2
		}
	}
      landunit = {
		id = { type = 18300 id = 5 }
		location = 476
		name = "Brigada Aerotransportada"
		division = {
			id = { type = 18300 id = 6 }
			name = "Brigada Aerotransportada"
			strength = 100
			type = paratrooper
			model = 14
		}
	}
	landunit = {
		id = { type = 18300 id = 7 }
		location = 995
		name = "Zona Militar dos Açores"
		division = {
			id = { type = 18300 id = 8 }
			name = "Zona Militar dos Açores"
			strength = 100
			type = garrison
			model = 8
		}
	}
	landunit = {
		id = { type = 18300 id = 9 }
		location = 476
		name = "Zona Militar da Madeira"
		division = {
			id = { type = 18300 id = 10 }
			name = "Zona Militar da Madeira"
			strength = 100
			type = garrison
			model = 8
		}
	}
	# ###################################
	# NAVY
	# ###################################
	navalunit = {
		id = { type = 18300 id = 300 }
		location = 481
		base = 481
		name = "Marinha Portuguesa"
		division = {
			id = { type = 18300 id = 301 }
			name = "NRP Vasco da Gama"
			type = destroyer
			model = 2
		}
		division = {
			id = { type = 18300 id = 302 }
			name = "NRP Álvares Cabral"
			type = destroyer
			model = 2
		}
		division = {
			id = { type = 18300 id = 303 }
			name = "NRP Corte-Real"
			type = destroyer
			model = 2
		}
		division = {
			id = { type = 18300 id = 304 }
			name = "NRP Comandante João Belo"
			type = destroyer
			model = 0
		}
		division = {
			id = { type = 18300 id = 305 }
			name = "NRP Comandante Hermenegildo Capelo"
			type = destroyer
			model = 0
		}
		division = {
			id = { type = 18300 id = 306 }
			name = "NRP Comandante Sacadura Cabral"
			type = destroyer
			model = 0
		}
		division = {
			id = { type = 18300 id = 314 }
			name = "NRP Barracuda"
			type = submarine
			model = 1
		}
		division = {
			id = { type = 18300 id = 315 }
			name = "NRP Delfim"
			type = submarine
			model = 1
		}
	}
	# ####################################
	# AIR FORCE
	# ####################################
	airunit = {
		id = { type = 18300 id = 200 }
		location = 476
		base = 476
		name = "Força Aérea Portuguesa"
		division = {
			id = { type = 18300 id = 201 }
			name = "201st Squadron"
			type = interceptor
			strength = 100
			model = 8
		}
		division = {
			id = { type = 18300 id = 202 }
			name = "202nd Squadron"
			type = interceptor
			strength = 100
			model = 8
		}
	}
}
