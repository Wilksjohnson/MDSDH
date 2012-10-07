# #############################
# Country definition for TUN #
# #############################

country = {
	tag = TUN
	capital = 747
	manpower = 20
	transports = 12
	escorts = 0
	# Resource Reserves
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 25
	diplomacy = { }
	SpyInfo                = {  country = "TUN" NumberOfSpies = 3  } 
   nationalprovinces      = {  740 741 742 744 745 746 747 748 749  } 
   ownedprovinces         = {  740 741 742 744 745 746 747 748 749  } 
   controlledprovinces    = {  740 741 742 744 745 746 747 748 749  }
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
		# Army Org
		1000
		1010
		1500
		1300
		1260
		1970
		1900
		# Air Docs
		9050
		9060
		9070
		9010
		9510
		# Air techs
		4700
		4750
		4640
		4570
		4000
		4010
		# Secret Techs
		7330
		# Land Docs
		6910
		6010
		6020
		6600
		6610
		6100
		6110
		6120
		6160
		6170
	}
	policy = {
		date = { year = 0 month = march day = 0 }
		democratic = 3
		political_left = 5
		free_market = 7
		freedom = 4
		professional_army = 3
		defense_lobby = 4
		interventionism = 4
	}
	# #############################
	# ARMY
	# #############################
	landunit = {
		id = { type = 12277 id = 1 }
		location = 747
		name = "1cre Corps"
		division = {
			id = { type = 12277 id = 2 }
			name = "4cme Brigade Blindée"
			strength = 100
			type = light_armor
			model = 0
		}
		division = {
			id = { type = 12277 id = 3 }
			name = "6cme Division Mecanisée"
			strength = 100
			type = infantry
			model = 9
		}
	}
	# #####################################
	# AIR FORCE
	# #####################################
	airunit = {
		id = { type = 12277 id = 100 }
		location = 747
		base = 747
		name = "4cme Escadrille"
		division = {
			id = { type = 12277 id = 101 }
			name = "1er Escadron"
			type = interceptor
			strength = 50
			model = 7
		}
	}
}
