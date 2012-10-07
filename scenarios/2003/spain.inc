# #############################
# Country definition for SPA #
# #############################

country = {
	tag = SPA
	regular_id = U72
	manpower = 65
	transports = 120
	escorts = 0
	# Resource Reserves
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 20
	capital = 460
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
		relation = { tag = POR value = 200 access = yes }
		relation = { tag = ROM value = 200 access = yes }
		relation = { tag = SLO value = 200 access = yes }
		relation = { tag = SLV value = 200 access = yes }
		relation = { tag = USA value = 200 access = yes }
		relation = { tag = TUR value = 200 access = yes }
		relation = { tag = ENG value = 200 access = yes }
	}
	SpyInfo                = {  country = "SPA" NumberOfSpies = 7  } 
 
   nationalprovinces      = {  444 451 441 453 466 456 460 457 458 472 474 471 470 467 463 468 464 461  
                              348 440 438 436 442 443 475 437 439 452 447 990 991 469 
            455 448 449  446 462 445 459 473 465 454     450                         } 
   ownedprovinces         = {  444 451 441 453 466 456 460 457 458 472 474 471 470 467 463 468 464 461  
                               440 438 436 442 443 475 437 439 452 447 990 991 469 
            455 448 449  446 462 445 459 473 465 454     450 
                             } 

   controlledprovinces    = {  444 451 441 453 466 456 460 457 458 472 474 471 470 467 463 468 464 461  
                              440 438 436 442 443 475 437 439 452 447 990 991 469 
            455 448 449  446 462 445 459 473 465 454     450 
                             }
	techapps = {
		# Industry
		5010 5020 5030
		5040 5050 5060
		5070 5080 5090
		5110 5120 5130
		5140 5150 5160
		5170 5180 5190
		5210 5220 5230
		5240 5250 5260
		5270 5280 5290
		# Army Equip
		2200 2210 2220
		2800 2810 2820
		2600 2610 2620
		2700 2710 2720
		2400 2410 2420
		2300 2310 2320
		2000 2050 2110
		2010 2060 2120
		2070 2500 2510
		2520 # Army Org
		1260 1270 1900
		1910 1920 1500
		1510 1520 1400
		1410 1420 1300
		1310 1320 1200
		1210 1220 1000
		1050 1110 1010
		1060 1120 1070
		1800 1810 1700
		1600 1650 # Aircraft
		4800 4810 4820
		4700 4710 4720
		4750 4760 4770
		4900 4910 4000
		4010 4020 4100
		4110 4120 4130
		4400 4410 4420
		4640 4650 # Land Docs
		6010 6030 6040
		6930 6600 6610
		6100 6110 6120
		6130 6140 6150
		6160 6170 6200
		6210 6220 6230
		6240 6250 6260
		6270 # Air Docs
		9040 9510 9520
		9530 9540 9050
		9060 9070 9090
		9110 9120 9130
		9140 9150 9170
		9190 9200 9450
		9460 # Secret Weapons
		7010 7060 7070
		7080 7180 7330
		7310 7320 # Navy Techs
		3000 3010 3020
		3100 3110 3120
		3130 3400 3410
		3700 3710 37710
		3720 3590 3850
		3860 3870 3880
		# Navy Doctrines
		8900 8910 8920
		8950 8960 8970
		8400 8410 8420
		8000 8010 8020
		8500 8510 8520
		8100 8110 8120
		8600 8610 8620
		8300 8310 8320
		8800 8810 8820
	}
	policy = {
		date = { year = 0 month = march day = 0 }
		democratic = 10
		political_left = 5
		free_market = 7
		freedom = 9
		professional_army = 10
		defense_lobby = 2
		interventionism = 7
	}
	# #####################################
	# ARMY
	# #####################################
	landunit = {
		id = { type = 20100 id = 1 }
		location = 460
		name = "Fuerzas de Acción Rápida"
                division = {
			id = { type = 20100 id = 2 }
			name = "2a Brigada de la Legión 'Alfonso XIII'" 
			strength = 100
			type = mechanized
			model = 3
		}
                division = {
			id = { type = 20100 id = 3 }
			name = "5a Brigada Ligera 'San Marcial'"
			strength = 100
			type = mechanized
			model = 1
		}
		division = {
			id = { type = 20100 id = 4 }
			name = "6a Brigada Paracaidista 'Almogávares'"
			strength = 100
			type = paratrooper
			model = 14
		}
		division = {
			id = { type = 20100 id = 5 }
			name = "7a Brigada Aerotransportable 'Galicia'"
			strength = 100
			type = militia
			model = 2
		}
	}
	landunit = {
		id = { type = 20100 id = 6 }
		location = 451
		name = "1a División Mecanizada 'Brunete'" # eurocorps spain
		division = {
			id = { type = 20100 id = 7 }
			name = "10a Brigada Mecanizada 'Guzmán el Bueno'"
			strength = 100
			type = cavalry
			model = 2
		}
                division = {
			id = { type = 20100 id = 8 }
			name = "11a Brigada Mecanizada 'Extremadura'"
			strength = 100
			type = cavalry
			model = 2
		}
                division = {
			id = { type = 20100 id = 9 }
			name = "12a Brigada Acorazada 'Guadarrama'"
			strength = 100
			type = light_armor
			model = 7
		}
                division = {
			id = { type = 20100 id = 10 }
			name = "2a Brigada de Caballería 'Castillejos"
			strength = 100
			type = motorized
			model = 3
		}
	}
	landunit = {
		id = { type = 20100 id = 11 }
		location = 443
		name = "Jefatura de Tropas de Montaña 'Aragón'"
		division = {
			id = { type = 20100 id = 12 }
			name = "Tropas de Montaña"
			strength = 100
			type = bergsjaeger
			model = 13
		}
	}
	landunit = {
		id = { type = 20100 id = 13 }
		location = 473
		name = "Tercio de Armada"
		division = {
			id = { type = 20100 id = 14 }
			name = "Brigada de Marina"
			strength = 100
			type = marine
			model = 14
		}
	}
	landunit = {
		id = { type = 20100 id = 15 }
		location = 991
		name = "Mando de Canarias"
		division = {
			id = { type = 20100 id = 16 }
			name = "16a Brigada Ligera 'Canarias'"
			strength = 80
			type = garrison
			model = 8
		}
	}
	# #####################################
	# NAVY
	# #####################################
	navalunit = {
		id = { type = 20100 id = 200 }
		location = 444
		base = 444
		name = "1st Fleet"
		division = {
			id = { type = 20100 id = 201 }
			name = "Príncipe de Asturias"
			type = escort_carrier
			model = 1
		}
		division = {
			id = { type = 20100 id = 202 }
			name = "Santa María"
			type = destroyer
			model = 2
		}
		division = {
			id = { type = 20100 id = 203 }
			name = "Victoria"
			type = destroyer
			model = 2
		}
		division = {
			id = { type = 20100 id = 204 }
			name = "Numancia"
			type = destroyer
			model = 2
		}
		division = {
			id = { type = 20100 id = 205 }
			name = "Reina Sofía"
			type = destroyer
			model = 2
		}
		division = {
			id = { type = 20100 id = 206 }
			name = "Navarra"
			type = destroyer
			model = 2
		}
		division = {
			id = { type = 20100 id = 207 }
			name = "Canarias"
			type = destroyer
			model = 2
		}
	}
	navalunit = {
		id = { type = 20100 id = 208 }
		location = 440
		base = 440
		name = "2nd Fleet"
		division = {
			id = { type = 20100 id = 209 }
			name = "Álvaro de Bazán"
			type = light_cruiser
			model = 5
		}
		division = {
			id = { type = 20100 id = 210 }
			name = "Baleares"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 20100 id = 211 }
			name = "Andalucía"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 20100 id = 212 }
			name = "Cataluña"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 20100 id = 213 }
			name = "Asturias"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 20100 id = 214 }
			name = "Extremadura"
			type = destroyer
			model = 1
		}
	}
	navalunit = {
		id = { type = 20100 id = 230 }
		location = 440
		base = 440
		name = "1st Amphibious Fleet"
		division = {
			id = { type = 20100 id = 231 }
			name = "1st Transport Fleet"
			type = transport
			model = 3
		}
		division = {
			id = { type = 20100 id = 232 }
			name = "2nd Transport Fleet"
			type = transport
			model = 3
		}
		division = {
			id = { type = 20100 id = 233 }
			name = "3rd Transport Fleet"
			type = transport
			model = 3
		}
	}
	navalunit = {
		id = { type = 20100 id = 235 }
		location = 440
		base = 440
		name = "1st Submarine Fleet"
		division = {
			id = { type = 20100 id = 236 }
			name = "Galerna"
			type = submarine
			model = 5
		}
		division = {
			id = { type = 20100 id = 237 }
			name = "Siroco"
			type = submarine
			model = 5
		}
		division = {
			id = { type = 20100 id = 238 }
			name = "Mistral"
			type = submarine
			model = 5
		}
		division = {
			id = { type = 20100 id = 239 }
			name = "Tramontana"
			type = submarine
			model = 5
		}
		division = {
			id = { type = 20100 id = 240 }
			name = "Delfin"
			type = submarine
			model = 1
		}
		division = {
			id = { type = 20100 id = 241 }
			name = "Tonina"
			type = submarine
			model = 1
		}
		division = {
			id = { type = 20100 id = 242 }
			name = "Marsopa"
			type = submarine
			model = 1
		}
		division = {
			id = { type = 20100 id = 243 }
			name = "Narval"
			type = submarine
			model = 1
		}
	}
	# #####################################
	# AIR FORCE
	# #####################################
	airunit = {
		id = { type = 20100 id = 100 }
		location = 460
		base = 460
		name = "Mando Aéreo del Centro"
		division = {
			id = { type = 20100 id = 101 }
			name = "Ala 12"
			type = interceptor
			strength = 50
			model = 2
		}
                division = {
			id = { type = 20100 id = 109 }
			name = "Ala 35"
			type = transport_plane
			strength = 100
			model = 1
		}
	}
	airunit = {
		id = { type = 20100 id = 102 }
		location = 474
		base = 474
		name = "Mando Aéreo del Estrecho"
                division = {
			id = { type = 20100 id = 103 }
			name = "Ala 11"
			type = multi_role
			strength = 100
			model = 1
		}
		division = {
			id = { type = 20100 id = 104 }
			name = "Ala 14"
			type = interceptor
			strength = 100
			model = 1
		}
                division = {
			id = { type = 20100 id = 105 }
			name = "Ala 22"
			type = naval_bomber
			strength = 20
			model = 1
		}
		division = {
			id = { type = 20100 id = 106 }
			name = "Ala 23"
			type = interceptor
			strength = 100
			model = 1
		}
	}
        airunit = {
		id = { type = 20100 id = 107 }
		location = 436
		base = 436
		name = "Mando Aéreo de Levante"
		division = {
			id = { type = 20100 id = 108 }
			name = "Ala 15"
			type = interceptor
			strength = 100
			model = 2
		}
	}
        airunit = {
		id = { type = 20100 id = 110 }
		location = 990
		base = 990
		name = "Mando Aéreo de Canarias"
		division = {
			id = { type = 20100 id = 111 }
			name = "Ala 46"
			type = interceptor
			strength = 10
			model = 2
		}
	}
	# ###################################
	# Under Development
	# ###################################
	division_development = {
		id = { type = 20100 id = 300 }
		name = "Almirante Juan de Borbón"
		type = light_cruiser
		model = 3
		cost = 5
		date = { day = 2 month = november year = 2003 }
	}
	division_development = {
		id = { type = 20100 id = 301 }
		name = "Blas de Lezo"
		type = light_cruiser
		model = 3
		cost = 5
		date = { day = 20 month = september year = 2004 }
	}
	division_development = {
		id = { type = 20100 id = 302 }
		name = "Méndez Núñez"
		type = light_cruiser
		model = 3
		cost = 5
		date = { day = 11 month = july year = 2005 }
	}
	division_development = {
		id = { type = 20100 id = 303 }
		name = "SPS S-81"
		type = submarine
		model = 4
		cost = 7
		date = { day = 27 month = august year = 2005 }
	}
}
