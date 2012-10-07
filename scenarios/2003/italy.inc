# #############################
# Country definition for ITA #
# #############################

country = {
	tag = ITA
	regular_id = U72
	manpower = 70
	# Resource Reserves
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 150
	capital = 419
	transports = 180
	escorts = 0
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
		relation = { tag = USA value = 200 access = yes }
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
		relation = { tag = SPA value = 200 access = yes }
		relation = { tag = TUR value = 200 access = yes }
		relation = { tag = ENG value = 200 access = yes }
	}
	SpyInfo                = {  country = "ITA" NumberOfSpies = 9  }
       # Somaliland
       nationalprovinces      = {  430 431 425 422 424 421 420 416 423 415 414 419 410 412 411 393 408 396 398 407 401 400 434 403 406 402 413 417 435 432 405 404 394 399 395 418 426 427 428 433 }
       
       ownedprovinces         = {  430  431  425 422 424 421 420 416 423 415 414 419 410 412 411 393 408 396 398 407 401 400 434 394 395 418 426 427 428 433 402 413 417 435 432 405 404 399  }

       controlledprovinces    = {  430  431  425 422 424 421 420 416 423 415 414 419 410 412 411 393 408 396 398 407 401 400 434 394 395 418 426 427 428 433 402 413 417 435 432 405 404 399  }
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
		2000 2050 2110
		2010 2060 2070
		2300 2310 2320
		2330 2400 2410
		2420 2430 2200
		2210 2220 2230
		2500 2510 2520
		2530 2600 2610
		2620 2630 2700
		2710 2720 2730
		2800 2810 2820
		2830 # Army Org
		1000 1050 1110
		1010 1060 1070
		1960 1900 1910
		1920 1930 1260
		1270 1500 1510
		1520 1530 1200
		1210 1220 1230
		1300 1310 1320
		1330 1400 1410
		1420 1430 1800
		1810 1820 1700
		1710 1720 1600
		1610 1650 1660
		# Aircraft
		4640 4650 4660
		4670 4800 4810
		4820 4700 4710
		4720 4750 4760
		4770 4900 4910
		4920 4570 4400
		4410 4420 4000
		4010 4020 4100
		4110 4120 4130
		4500 4510 4520
		# Land Docs
		6020 6030 6040
		6930 6600 6610
		6700 6710 6100
		6110 6120 6130
		6140 6150 6160
		6170 6200 6210
		6220 6230 6240
		6250 6260 6270
		6300 6310 6320
		6330 6340 6350
		6360 6370 # Air Docs
		9040 9510 9520
		9530 9540 9450
		9460 9050 9060
		9070 9090 9110
		9120 9130 9140
		9150 9170 9190
		9200 9210 9220
		9230 9280 # Secret Weapons
		7010 7060 7070
		7180 7330 7310
		7320 # Navy Techs
		3000 3010 3100
		3110 3120 3400
		3410 3420 3590
		3600 3700 37700
		3710 37710 3850
		3860 3870 # Navy Doctrines
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
		political_left = 4
		free_market = 7
		freedom = 9
		professional_army = 4
		defense_lobby = 3
		interventionism = 6
	}
        headofstate            = {  type = 9 id = 7700  } # Carlo Azeglio Ciampi
        headofgovernment       = {  type = 9 id = 7701  } # Silvio Berlusconi
        foreignminister        = {  type = 9 id = 7702  } # Franco Frattini
        armamentminister       = {  type = 9 id = 582084  } # Giulio Tremonti
        ministerofsecurity     = {  type = 9 id = 7704  } # Giuseppe Pisanu
        ministerofintelligence = {  type = 9 id = 7705  } # Nicolò Pollari
        chiefofstaff           = {  type = 9 id = 7706  } # Rolando Mosca Moschini
        chiefofarmy            = {  type = 9 id = 7707  } 
        chiefofnavy            = {  type = 9 id = 7708  } # Marcello de Donno
        chiefofair             = {  type = 9 id = 7709  } # Sandro Ferracuti
	# #####################################
	# ARMY
	# #####################################
        landunit = {
		id = { type = 12900 id = 1 }
		location = 400
		name = "COMFOTER"                         # operational land forces command
		division = {
			id = { type = 12900 id = 2 }
			name = "COMFOTER HQ"
			strength = 100
			type = hq
			model = 2
			}
	}
	landunit = {
		id = { type = 12900 id = 3 }
		location = 404
		name = "Brigata Pozzuolo del Friuli"
		division = {
			id = { type = 12900 id = 4 }
			name = "Brigata di Cavalleria 'Pozzuolo del Friuli'"
			strength = 100
			type = mechanized   # mechanized cavalry
			model = 3
		}
	}
        landunit = {
		id = { type = 12900 id = 5 }
		location = 405
		name = "Brigata Ariete"
		division = {
			id = { type = 12900 id = 6 }
			name = "Brigata Corazzata 'Ariete'"
			strength = 100
			type = light_armor
			model = 7
		}
	}
        landunit = {
		id = { type = 12900 id = 7 }
		location = 411
		name = "Brigata Friuli"
		division = {
			id = { type = 12900 id = 8 }
			name = "Brigata Aeromobile 'Friuli'"
			strength = 50
			type = militia
			model = 2
		}
	}
        landunit = {
		id = { type = 12900 id = 9 }
		location = 413
		name = "Brigata Folgore"
		division = {
			id = { type = 12900 id = 10 }
			name = "Brigata Paracadutisti 'Folgore'"
			strength = 80
			type = paratrooper
			model = 16
		}
	}
	landunit = {
		id = { type = 12900 id = 11 }
		location = 426
		name = "Brigata Pinerolo"
		division = {
			id = { type = 12900 id = 12 }
			name = "Brigata Corazzata 'Pinerolo'"   
			strength = 100
			type = light_armor
			model = 5
		}
	}
        landunit = {
		id = { type = 12900 id = 13 }
		location = 421
		name = "Brigata Garibaldi"
		division = {
			id = { type = 12900 id = 14 }
			name = "Brigata Bersaglieri 'Garibaldi'"
			strength = 100
			type = cavalry
			model = 3
		}
	}
        landunit = {
		id = { type = 12900 id = 15 }
		location = 431
		name = "Brigata Aosta"
		division = {
			id = { type = 12900 id = 16 }
			name = "Brigata Meccanizzata 'Aosta'"
			strength = 100
			type = cavalry
			model = 2
		}
	}
        landunit = {
		id = { type = 12900 id = 17 }
		location = 419
		name = "Brigata Granatieri di Sardegna"
		division = {
			id = { type = 12900 id = 18 }
			name = "Brigata Meccanizzata 'Granatieri di Sardegna'"
			strength = 30
			type = cavalry
			model = 2
		}
	}
        landunit = {
		id = { type = 12900 id = 19 }
		location = 435
		name = "Brigata Sassari"
		division = {
			id = { type = 12900 id = 20 }
			name = "Brigata Meccanizzata 'Sassari'"
			strength = 50
			type = cavalry
			model = 2
		}
	}
	landunit = {
		id = { type = 12900 id = 21 }
		location = 398
		name = "Brigata Taurinense"
		division = {
			id = { type = 12900 id = 22 }
			name = "Brigata Alpina 'Taurinense'"
			strength = 80
			type = bergsjaeger
			model = 14
			}
	}
        landunit = {
		id = { type = 12900 id = 23 }
		location = 405
		name = "Brigata Julia"
		division = {
			id = { type = 12900 id = 24 }
			name = "Brigata Alpina 'Julia'"
			strength = 70
			type = bergsjaeger
			model = 13
       		}
	}
        # ###################################
	# GENDARMERIE
	# ###################################
        landunit = {
		id = { type = 12900 id = 25 }
		location = 413
		name = "Multinational Specialized Unit"
		division = {
			id = { type = 12900 id = 26 }
			name = "2a Brigata Mobile Carabinieri"  # elite military police for pacekeeping and war missions, 2 mot rgts 1 elite para rgt and 1 fs group
			strength = 40                             
			type = mechanized
			model = 3
		}
	}
        landunit = {
		id = { type = 12900 id = 27 }
		location = 419 # command in rome but spread around italy
		name = "Divisione Unità Mobili CC"
		division = {
			id = { type = 12900 id = 28 }
			name = "1a Brigata Mobile Carabinieri"  # military police used for riots control and internal defence  1 rgt for capital defence and 11 separate battallions
			strength = 100                           
			type = garrison
			model = 8
		}
	}
	# ###################################
	# NAVY
	# ###################################
	navalunit = {
		id = { type = 12900 id = 300 }
		location = 422
		base = 422
		name = "COMFORAL"
		division = {
			id = { type = 12900 id = 301 }
			name = "Giuseppe Garibaldi"
			type = escort_carrier
			model = 1
		}
                division = {
			id = { type = 12900 id = 302 }
			name = "Vittorio Veneto"             # dismissed in november
			type = battlecruiser
			model = 0
		}
		division = {
			id = { type = 12900 id = 303 }
			name = "Luigi Durand de la Penne"
			type = light_cruiser
			model = 2
		}
		division = {
			id = { type = 12900 id = 304 }
			name = "Francesco Mimbelli"
			type = light_cruiser
			model = 2
		}
		division = {
			id = { type = 12900 id = 332 }
			name = "San Giorgio"
			type = transport
			model = 3
		}
		division = {
			id = { type = 12900 id = 333 }
			name = "San Marco"
			type = transport
			model = 3
		}
		division = {
			id = { type = 12900 id = 334 }
			name = "San Giusto"
			type = transport
			model = 3
		}
	}
	navalunit = {
		id = { type = 12900 id = 311 }
		location = 422
		base = 422
		name = "COMSQUAFR 1"
                division = {
			id = { type = 12900 id = 319 }
			name = "Aliseo"
			type = destroyer
			model = 2
		}
		division = {
			id = { type = 12900 id = 320 }
			name = "Euro"
			type = destroyer
			model = 2
		}
                division = {
			id = { type = 12900 id = 308 }
			name = "Espero"
			type = destroyer
			model = 2
		}
                division = {
			id = { type = 12900 id = 321 }
			name = "Zeffiro"
			type = destroyer
			model = 2
		}
                division = {
			id = { type = 12900 id = 314 }
			name = "Artigliere"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 12900 id = 315 }
			name = "Aviere"
			type = destroyer
			model = 1
		}
                division = {
			id = { type = 12900 id = 317 }
			name = "Granatiere"
			type = destroyer
			model = 1
		}
	}
	navalunit = {
		id = { type = 12900 id = 331 }
		location = 396
		base = 396
		name = "COMSQUAFR 2"
		division = {
			id = { type = 12900 id = 312 }
			name = "Audace"
			type = light_cruiser
			model = 1
		}
		division = {
			id = { type = 12900 id = 313 }
			name = "Ardito"
			type = light_cruiser
			model = 1
		}
                division = {
			id = { type = 12900 id = 305 }
			name = "Maestrale"
			type = destroyer
			model = 2
		}
		division = {
			id = { type = 12900 id = 306 }
			name = "Grecale"
			type = destroyer
			model = 2
		}
		division = {
			id = { type = 12900 id = 307 }
			name = "Libeccio"
			type = destroyer
			model = 2
		}
                division = {
			id = { type = 12900 id = 318 }
			name = "Scirocco"
			type = destroyer
			model = 2
		}
                division = {
			id = { type = 12900 id = 316 }
			name = "Bersagliere"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 12900 id = 309 }
			name = "Sagittario"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 12900 id = 310 }
			name = "Perseo"
			type = destroyer
			model = 1
		}
	}
	navalunit = {
		id = { type = 12900 id = 335 }
		location = 422
		base = 422
		name = "COMGRUPSOM"
		division = {
			id = { type = 12900 id = 336 }
			name = "Primo Longobardo"
			type = submarine
			model = 5
		}
		division = {
			id = { type = 12900 id = 337 }
			name = "Gianfranco Gazzana Priaroggia"
			type = submarine
			model = 5
		}
		division = {
			id = { type = 12900 id = 338 }
			name = "Salvatore Pelosi"
			type = submarine
			model = 4
		}
		division = {
			id = { type = 12900 id = 339 }
			name = "Giuliano Prini"
			type = submarine
			model = 4
		}
                division = {
			id = { type = 12900 id = 341 }
			name = "Leonardo da Vinci"
			type = submarine
			model = 3
		}
                division = {
			id = { type = 12900 id = 342 }
			name = "Guglielmo Marconi"
			type = submarine
			model = 3
		}
                division = {
			id = { type = 12900 id = 340 }
			name = "Carlo Fecia di Cossato"
			type = submarine
			model = 2
		}
	}
	# ####################################
	# AIR FORCE
	# ####################################
	airunit = {
		id = { type = 12900 id = 200 }
		location = 419
		base = 419
		name = "Forze Aeree Centro"
		division = {
			id = { type = 12900 id = 201 }
			name = "4. Stormo 'Amedeo d'Aosta'"
			type = multi_role
			strength = 70
			model = 2
		}
	}
        airunit = {
		id = { type = 12900 id = 202 }
		location = 393   
		base = 393
		name = "Forze Aeree Nord"
		division = {
			id = { type = 12900 id = 203 }
			name = "5. Stormo 'Giuseppe Cenni'"
			type = interceptor
			strength = 40
			model = 2
		}
		division = {
			id = { type = 12900 id = 204 }
			name = "6. Stormo 'Alfredo Fusco'"
			type = tactical_bomber
			strength = 100
			model = 3
		}
		division = {
			id = { type = 12900 id = 205 }
			name = "50. Stormo 'Giorgio Graffer'"
			type = tactical_bomber
			strength = 20
			model = 3
		}
		division = {
			id = { type = 12900 id = 206 }
			name = "51. Stormo 'Ferruccio Serafini'"
			type = cas
			strength = 40
			model = 0
		}
	}
        airunit = {
		id = { type = 12900 id = 207 }
		location = 426   
		base = 426
		name = "Forze Aeree Sud"
		division = {
			id = { type = 12900 id = 208 }
			name = "32. Stormo 'Armando Boetto'"
			type = cas
			strength = 100
			model = 0
		}
		division = {
			id = { type = 12900 id = 209 }
			name = "36. Stormo 'Riccardo H. Seidl'"
			type = multi_role
			strength = 70
			model = 1
		}
		division = {
			id = { type = 12900 id = 210 }
			name = "37. Stormo 'Cesare Toschi'"
			type = interceptor
			strength = 20
			model = 2
		}
	}
        airunit = {
		id = { type = 12900 id = 211 }
		location = 419
		base = 419
		name = "46a Brigata Aerea"
		division = {
			id = { type = 12900 id = 212 }
			name = "46a Brigata Aerea 'Silvio Angelucci'"
			type = transport_plane
			strength = 100
			model = 2
		}
	}
	# ###################################
	# Under Development
	# ###################################
	division_development = {
		id = { type = 12900 id = 400 }
		name = "Cavour"
		type = escort_carrier
		model = 2
		cost = 15
		date = { day = 1 month = june year = 2007 }
	}
}
