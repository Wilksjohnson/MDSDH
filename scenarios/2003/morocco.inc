# #############################
# Country definition for MOR #
# #############################

country = {
	tag = MOR
	# Resource Reserves
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 10
	manpower = 64
	transports = 41
	escorts = 0
	capital = 717
	diplomacy = { }
	SpyInfo                = {  country = "MOR" NumberOfSpies = 3  } 
   nationalprovinces      = {  989 715 716 717 718 719 720 721 722 723 724 725 726 987 988 } 
   ownedprovinces         = {  989 715 716 717 718 719 720 721 722 723 724 725 726 987 988 } 
   controlledprovinces    = {  989 715 716 717 718 719 720 721 722 723 724 725 726 987 988 } 
   #claimedprovinces       = {  987 988  }
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
		2300 2310
		2400 2410
		2200 2210
		2500 2510
		2600 2610
		2700 2710
		2800 2810
		2000 2050
		2110 2010
		2060 # Army Org
		1970 1000
		1050 1110
		1010 1060
		1500 1510
		1200 1210
		1300 1310
		1400 1410
		1800 1900
		1910 1260
		1270 # Land Docs
		6910 6010
		6020 6600
		6610 6100
		6110 6120
		6160 # Air Docs
		9020 9510
		9520 9050
		9060 9070
		9090 # Air Techs
		4500 4000
		4010 4020
		4700 4710
		4750 4760
		4640 4400
		4550 # Navy Techs
		3000 3010
		3020 3590
		3850 3860
		3870 # Navy Doctrines
		8900 8910
		8950 8960
		8000 8010
		8500 8510
	}
	policy = {
		date = { year = 0 month = march day = 0 }
		democratic = 3
		political_left = 5
		free_market = 6
		freedom = 4
		professional_army = 2
		defense_lobby = 5
		interventionism = 5
	}
	
	# #############################
	# ARMY
	# #############################
	
	landunit = {
		id = { type = 12255 id = 1 }
		location = 718
		name = "1cre Corps"
		division = {
			id = { type = 12255 id = 2 }
			name = "1er Division Blindée"
			strength = 100
			type = armor
			model = 5
		}
		division = {
			id = { type = 12255 id = 3 }
			name = "4cme Division Mecanisée"
			strength = 100
			type = infantry
			model = 9
		}
		division = {
			id = { type = 12255 id = 4 }
			name = "3cme Division d'Infantere"
			strength = 100
			type = motorized
			model = 2
		}
		division = {
			id = { type = 12255 id = 5 }
			name = "7cme Division d'Infantere"
			strength = 100
			type = motorized
			model = 2
		}
		division = {
			id = { type = 12255 id = 6 }
			name = "9cme Division d'Infantere"
			strength = 100
			type = motorized
			model = 2
		}
		division = {
			id = { type = 12255 id = 7 }
			name = "2cme Brigade Parachutiste"
			strength = 100
			type = paratrooper
			model = 0
		}
	}
	landunit = {
		id = { type = 12255 id = 8 }
		location = 725
		name = "2cme Corps"
		division = {
			id = { type = 12255 id = 9 }
			name = "6cme Brigade Blindée"
			strength = 100
			type = light_armor
			model = 0
		}
	}
	# #####################################
	# NAVY
	# #####################################
	navalunit = {
		id = { type = 12255 id = 200 }
		location = 718
		base = 718
		name = "23rd Frigate Squadron"
		division = {
			id = { type = 12255 id = 201 }
			name = "Mohammed V"
			type = destroyer
			model = 5
		}
		division = {
			id = { type = 12255 id = 202 }
			name = "Hassan II"
			type = destroyer
			model = 5
		}
		division = {
			id = { type = 12255 id = 203 }
			name = "2nd Transport Flotilla"
			type = transport
			model = 3
		}
	}
	# #####################################
	# AIR FORCE
	# #####################################
	airunit = {
		id = { type = 12255 id = 100 }
		location = 717
		base = 717
		name = "4cme Escadrille"
		division = { id = { type = 12255 id = 101 } name = "1er Escadron" type = tactical_bomber strength = 100 model = 4 }
		division = { id = { type = 12255 id = 102 } name = "6cme Escadron" type = tactical_bomber strength = 100 model = 4 }
		division = { id = { type = 12255 id = 103 } name = "19cme Escadron" type = interceptor strength = 100 model = 7 }
		division = { id = { type = 12255 id = 104 } name = "18cme Escadron" type = interceptor strength = 100 model = 7 }
		division = { id = { type = 12255 id = 105 } name = "24cme Escadron" type = interceptor strength = 100 model = 8 }
		division = { id = { type = 12255 id = 106 } name = "9cme Escadron" type = interceptor strength = 100 model = 8 }
	}
	airunit = {
		id = { type = 12255 id = 107 }
		location = 717
		base = 717
		name = "Escadrille de Transport Aérien"
		division = { id = { type = 12255 id = 108 } name = "11cme Escadron" type = transport_plane strength = 100 model = 1 }
	}
}
