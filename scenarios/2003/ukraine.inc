# #############################
# Country definition for UKR #
# #############################

country = {
	tag = UKR
	regular_id = RUS
	manpower = 70
	transports = 50
	escorts = 0
	# Resource Reserves
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 10
	capital = 617
	diplomacy = { relation = { tag = RUS value = 150 } }
	SpyInfo                = {  country = "UKR" NumberOfSpies = 3  } 
   nationalprovinces      = {  617 608 613 610 612 611 606 605 245 242 240 244 241 637 640 641 213 619 620 626 622 616 635 627 628 609 629 636 630 623 624 607 638 639 631 632 615 625 618 614 238 249 621 633 634 215 300 302 306  } 
   ownedprovinces         = {  617 608 613 610 612 611 606 605 245 242 240 244 241 637 640 641 213 619 620 626 622 616 635 627 628 609 629 636 630 623 624 607 638 639 631 632 615 625 618 614 238 249 633 634 215 300 302 306  } 
   controlledprovinces    = {  617 608 613 610 612 611 606 605 245 242 240 244 241 637 640 641 213 619 620 626 622 616 635 627 628 609 629 636 630 623 624 607 638 639 631 632 615 625 618 614 238 249 633 634 215 300 302 306  }
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
		5210 5220
		5230 5240
		5250 5260
		5270 5280
		5290 # Army Equip
		2200 2210
		2220 2300
		2310 2320
		2400 2410
		2420 2500
		2510 2520
		2600 2610
		2620 2700
		2710 2720
		2800 2810
		2820 2000
		2010 2050
		2060 2070
		2110 2120
		# Army Org
		1990 1260
		1270 1900
		1910 1920
		1800 1810
		1500 1510
		1520 1400
		1410 1420
		1300 1310
		1320 1200
		1210 1220
		1000 1010
		1050 1060
		1110 # Aircraft
		4800 4810
		4700 4710
		4750 4760
		4400 4410
		4420 4900
		# Land Docs
		6910 6010
		6020 6600
		6610 6100
		6110 6120
		6140 6150
		6160 6170
		6200 6210
		6220 6240
		6250 6260
		6270 # Air Docs
		9010 9510
		9050 9060
		9070 9120
		# Secret Weapons
		7010 7060
		7070 7310
		7330 # Navy Techs
		3000 3010
		3020 3100
		3110 3120
		3200 3210
		3590 3500
		3510 3520
		3700 37700
		3710 37710
		3850 3860
		3870 # Navy Doctrines
		8900 8910
		8950 8960
		8400 8410
		8000 8010
		8500 8510
	}
	policy = {
		date = { year = 0 month = march day = 0 }
		democratic = 7
		political_left = 6
		free_market = 5
		freedom = 5
		professional_army = 2
		defense_lobby = 4
		interventionism = 5
	}
	# ####################################
	# ARMY
	# ####################################
	landunit = {
		id = { type = 22100 id = 1 }
		location = 632
		name = "6 Armiya Korpus"
		division = {
			id = { type = 22100 id = 2 }
			name = "6 Armiya Korpus HQ"
			strength = 100
			type = hq
			model = 1
		}
		division = {
			id = { type = 22100 id = 3 }
			name = "17 Gvard. Tankova Brygada"
			strength = 100
			type = light_armor
			model = 4
		}
		division = {
			id = { type = 22100 id = 4 }
			name = "25 Povitryano-Desantna Brygada"
			strength = 100
			type = paratrooper
			model = 14
		}
		division = {
			id = { type = 22100 id = 6 }
			name = "28 Gvard. Mehanizovana Brygada"
			strength = 100
			type = cavalry
			model = 2
		}
		division = {
			id = { type = 22100 id = 7 }
			name = "92 Gvard. Mehanizovana Brygada"
			strength = 100
			type = cavalry
			model = 2
		}
		division = {
			id = { type = 22100 id = 8 }
			name = "93 Gvard. Mehanizovana Brygada"
			strength = 100
			type = cavalry
			model = 2
		}
	}
	landunit = {
		id = { type = 22100 id = 9 }
		location = 611
		name = "8 Armiya Korpus"
		division = {
			id = { type = 22100 id = 10 }
			name = "8 Armiya Korpus"
			strength = 100
			type = hq
			model = 1
			extra = heavy_armor
			brigade_model = 2
		}
		division = {
			id = { type = 22100 id = 11 }
			name = "30 Gvard. Tankova Diviziya" # mech bde in 2004
			strength = 100
			type = armor
			model = 12
			extra = heavy_armor
			brigade_model = 2
		}
		division = {
			id = { type = 22100 id = 12 }
			name = "1 Gvard. Tankova Brygada"
			strength = 100
			type = light_armor
			model = 8
		}
		division = {
			id = { type = 22100 id = 14 }
			name = "72 Gvard. Mehanizovana Brygada"
			strength = 100
			type = cavalry
			model = 1
		}
		division = {
			id = { type = 22100 id = 15 }
			name = "95 Aeromobilna Brygada"
			strength = 100
			type = militia
			model = 2
		}
	}
	landunit = {
		id = { type = 22100 id = 16 }
		location = 244
		name = "13 Armiya Korpus"
		division = {
			id = { type = 22100 id = 17 }
			name = "13 Armiya Korpus"
			strength = 100
			type = hq
			model = 1
			extra = heavy_armor
			brigade_model = 2
		}
		division = {
			id = { type = 22100 id = 18 }
			name = "24 Mehanizovana Brygada"
			strength = 100
			type = cavalry
			model = 1
		}
		division = {
			id = { type = 22100 id = 19 }
			name = "51  Mehanizovana Diviziya"  # brigade in 2004
			strength = 100
			type = infantry
			model = 1
		}
		division = {
			id = { type = 22100 id = 20 }
			name = "128  Mehanizovana Diviziya"  # brigade in 2004
			strength = 100
			type = infantry
			model = 1
		}
	}
	# ####################################
	# NAVY
	# ####################################
	navalunit = {
		id = { type = 22100 id = 200 }
		location = 641
		base = 641
		name = "Viyskovo-Morski Syly Ukrayiny"
		division = {
			id = { type = 22100 id = 201 }
			name = "Hetman Sahaydachniy"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 22100 id = 202 }
			name = "Sevastopol"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 22100 id = 203 }
			name = "1st Transport Fleet"
			type = transport
			model = 3
		}
		division = {
			id = { type = 22100 id = 204 }
			name = "Zaporizhzhia"
			type = submarine
			model = 0
		}
	}
	# ####################################
	# AIR FORCE
	# ####################################
	airunit = {
		id = { type = 22100 id = 100 }
		location = 240
		base = 240
		name = "Air Command West"
		division = {
			id = { type = 22100 id = 101 }
			name = "7 Aviatsiyna Brygada"
			type = tactical_bomber
			strength = 100
			model = 2
		}
		division = {
			id = { type = 22100 id = 102 }
			name = "114 Aviatsiyna Brygada"
			type = interceptor
			strength = 100
			model = 2
		}
		division = {
			id = { type = 22100 id = 103 }
			name = "456 ShAP"
			type = cas
			strength = 100
			model = 0
		}
	}
	airunit = {
		id = { type = 22100 id = 105 }
		location = 617
		base = 617
		name = "Air Command Centre"
		division = {
			id = { type = 22100 id = 106 }
			name = "9 Aviatsiyna Brygada"
			type = interceptor
			strength = 100
			model = 2
                }
		division = {
			id = { type = 22100 id = 107 }
			name = "40 Aviatsiyna Brygada"
			type = interceptor
			strength = 100
			model = 2
                }
		division = {
			id = { type = 22100 id = 108 }
			name = "831 Aviatsiyna Brygada"
			type = multi_role
			strength = 100
			model = 2
		}
	}
	airunit = {
		id = { type = 22100 id = 109 }
		location = 617
		base = 617
		name = "Air Command Centre"
		division = {
			id = { type = 22100 id = 110 }
			name = "15 Aviatsiyna Brygada"
			type = transport_plane
			strength = 100
			model = 1
		}
		division = {
			id = { type = 22100 id = 111 }
			name = "25 Aviatsiyna Brygada"
			type = transport_plane
			strength = 100
			model = 1
		}
		division = {
			id = { type = 22100 id = 112 }
			name = "456 Aviatsiyna Brygada"
			type = transport_plane
			strength = 100
			model = 1
		}
	}
	airunit = {
		id = { type = 22100 id = 113 }
		location = 626
		base = 626
		name = "Air Command South "
		division = {
			id = { type = 22100 id = 114 }
			name = "299 Aviatsiyna Brygada"
			type = cas
			strength = 100
			model = 0
		}
	}
	airunit = {
		id = { type = 22100 id = 121 }
		location = 641
		base = 641
		name = "Task Force 'Crimea'"
		division = {
			id = { type = 22100 id = 122 }
			name = "240 Aviatsiyna Brygada"
			type = interceptor
			strength = 100
			model = 2
		}
	}
}
