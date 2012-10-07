# #############################
# Country definition for U34 #
# #############################

country = {
	tag = U34
	# Resource Reserves
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 10
	manpower = 19
	capital = 1607
	transports = 20
	escorts = 0
	diplomacy = { }
	nationalprovinces      = {  1602 1603 1604 1605 1606 1607 1608 1609 1610 1234 1587 1724 1725 1726 1727  } 
   ownedprovinces         = {  1602 1603 1604 1605 1606 1607 1608 1609 1610 1234 1587 1724 1725 1726 1727  } 
   controlledprovinces    = {  1602 1603 1604 1605 1606 1607 1608 1609 1610 1234 1587 1724 1725 1726 1727  } 
	techapps = {
		# Industry:
		5010
		5020
		5030
		5040
		5050
		5070
		5090
		# Army Equip:
		2400
		2200
		2500
		2600
		2800
		# Army Org:
		1300
		1900
		1260
		1980
		# Army Doc:
		6100
		6110
		6160
		6010
		6020
		6600
		6610
		6910
		# Secret Tech:
		7330
	}
	policy = {
		date = { year = 0 month = march day = 0 }
		democratic = 10
		political_left = 8
		free_market = 6
		freedom = 6
		professional_army = 9
		defense_lobby = 1
		interventionism = 3
	}
	# #####################################
	# ARMY
	# #####################################
	landunit = {
		id = { type = 12228 id = 1 }
		location = 1607
		name = "Papua Defence Force"
		division = {
			id = { type = 12228 id = 2 }
			name = "1st Pacific Islands Regiment"
			strength = 100
			type = bergsjaeger
			model = 0
		}
	}
}
