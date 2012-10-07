# #############################
# Country definition for ENG #
# #############################

country = {
	tag = ENG
	capital = 29
	manpower = 100
	# Resource Reserves
	nuke = 25
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 300
	transports = 375
	escorts = 0
	diplomacy = {
		relation = {
			tag = U91 #Kuwait
			value = 200
			#guaranteed = { day = 22 month = september year = 2003 }
			access = yes
		}
		#Maldives
		relation = { tag = U28 value = 200 access = yes }
		relation = { tag = AFG value = 200 access = yes }
		relation = { tag = U51 value = 200 access = yes }
		relation = { tag = KYG value = 200 access = yes }
		relation = { tag = OMN value = 200 access = yes }
		# NATO
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
		relation = { tag = SPA value = 200 access = yes }
		relation = { tag = TUR value = 200 access = yes }
		relation = { tag = USA value = 200 access = yes }
	}
	# GREAT BRITAIN 
   nationalprovinces      = {  29 9 5 4 6 7 12 11 10 36 35 13 14 15 18 17 16 24 25 28  
        19 26 27 20 23 22 21 8 }
   # GREAT BRITAIN 
   ownedprovinces         = {  29 9 5 4 6 7 12 11 10 36 35 13 14 15 18 17 16 24 25 28  
        19 26 27 20 23 22 21 8 2045 896 993 1754 1757 1766 1772 1773 1774 348  1752              } 
   # GREAT BRITAIN 
   controlledprovinces    = {  29 9 5 4 6 7 12 11 10 36 35 13 14 15 18 17 16 24 25 28  
        19 26 27 20 23 22 21 8 2045 896 993 1754 1757 1766 1772 1773 1774 348  1752         } 
   claimedprovinces = { 
						2045 #Falkland Islands
						896 993 1754 1757 1766 1772 1773 1774 1752 #Atlantic Ocean Islands
						348
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
		2230 2800 2810
		2820 2830 2600
		2610 2620 2630
		2700 2710 2720
		2730 2500 2510
		2520 2530 2300
		2310 2320 2330
		2400 2410 2420
		2430 2000 2010
		2050 2060 2070
		2110 2120 2150
		# Army Org
		1980 1970 1260
		1270 1900 1910
		1920 1930 1800
		1810 1820 1700
		1710 1720 1000
		1010 1050 1060
		1070 1110 1120
		1150 1500 1510
		1520 1530 1400
		1410 1420 1430
		1300 1310 1320
		1330 1400 1410
		1420 1430 1600
		1650 1610 1660
		# Aircraft
		4800 4810 4820
		4700 4710 4720
		4750 4760 4770
		4900 4910 4920
		4500 4510 4520
		4120 4130 4640
		4650 4660 4670
		4600 4610 4620
		# Land Docs
		6930 6010 6030
		6050 6070 6080
		6600 6630 6700
		6730 6100 6110
		6120 6130 6140
		6150 6160 6170
		6200 6210 6220
		6230 6240 6250
		6260 6270 6300
		6310 6320 6330
		6340 6350 6360
		6370
		# Air Docs
		9040 9510 9520
		9530 9540 9050
		9060 9070 9080
		9090 9100 9110
		9120 9130 9140
		9150 9160 9170
		9180 9190 9200
		9210 9220 9230
		9450 9460
		# Secret Weapons
		7010 7020 7030
		7040 7050 7060
		7070 7080 7100
		7110 7120 7180
		7190 7200 7330
		7310 7320
		# Navy
		3000 3010 3020
		3100 3110 3120
		3400 3410 3590
		3600 3610 3800
		3810 3820
		3850 3860 3870
		3880 3900 3910
		3920 
		# Navy Doctrines
		8900 8910 8920
		8930 8950 8960
		8970 8980 8400
		8410 8420 8000
		8010 8020 8500
		8510 8520 8100
		8110 8120 8600
		8610 8620 8200
		8700 8300 8310
		8320 8800 8810
	}
	policy = {
		date = { year = 0 month = march day = 0 }
		democratic = 10
		political_left = 6
		free_market = 8
		freedom = 9
		professional_army = 10
		defense_lobby = 4
		interventionism = 7
	}
	# #####################################
	# ARMY
	# #####################################    
        landunit = {
		id = { type = 22300 id = 1 }
		location = 19
		name = "Field Army"
		division = {
			id = { type = 22300 id = 2 }
			name = "Field Army HQ"
			strength = 100
			type = hq
			model = 2
		}
	}
	landunit = {
		id = { type = 22300 id = 3 }
		location = 144
		name = "1st Armoured Division"
                division = {
			id = { type = 22300 id = 4 }
			name = "4th Armoured Brigade"  # becaming mech
			strength = 70
			type = light_armor
			model = 11
		}
		division = {
			id = { type = 22300 id = 5 }
			name = "20th Armoured Brigade"
			strength = 70
			type = light_armor
			model = 11
		}
	}
	landunit = {
		id = { type = 22300 id = 6 }
		location = 19
		name = "3rd Mechanized Division"   
		division = {
			id = { type = 22300 id = 7 }
			name = "1st Mechanized Brigade"
			strength = 60
			type = cavalry
			model = 3
		}
                division = {
			id = { type = 22300 id = 8 }
			name = "12th Mechanized Brigade"
			strength = 100
			type = cavalry
			model = 3
		}
                division = {
			id = { type = 22300 id = 9 }
			name = "19th Light Brigade"
			strength = 100
			type = mechanized
			model = 2
		}
	}
        landunit = {
		id = { type = 22300 id = 10 }
		location = 12
		name = "2nd Division"       # the others brigades in this division where all territorial reserves
                division = {
			id = { type = 22300 id = 11 }
			name = "52nd Infantry Brigade"
			strength = 40
			type = mechanized
			model = 2
		}
	}
        landunit = {
		id = { type = 22300 id = 12 }
		location = 27
		name = "4th Division"       # the others brigades in this division where all territorial reserves
                division = {
			id = { type = 22300 id = 13 }
			name = "2nd Infantry Brigade"  # returning territorial in 2007
			strength = 30
			type = mechanized
			model = 2
		}
	}
	landunit = {
		id = { type = 22300 id = 14 }
		location = 36
		name = "HQ Northern Ireland"
                division = {
			id = { type = 22300 id = 15 }
			name = "8th Infantry Brigade"
			strength = 70
			type = mechanized
			model = 2
		}
                division = {
			id = { type = 22300 id = 16 }
			name = "39th Infantry Brigade"
			strength = 100
			type = mechanized
			model = 2
		}
	}
	landunit = {
		id = { type = 22300 id = 17 }
		location = 1032 #Kuwait
		name = "Operation Telic"
                division = {
			id = { type = 22300 id = 18 }
			name = "7th Armoured Brigade"   # 1st armoured div
			strength = 100
			type = light_armor
			model = 11
		}
		division = {
			id = { type = 22300 id = 19 }
			name = "16 Air Assault Brigade"  
			strength = 100
			type = paratrooper
			model = 16
		}
		division = {
			id = { type = 22300 id = 20 }
			name = "3 Commando Brigade"  # royal marines
			strength = 100
			type = marine
			model = 12
		}
	}
        landunit = {
		id = { type = 22300 id = 21 }
		location = 348
		name = "British Forces Gibraltar"
		division = {
			experience = 15
			id = { type = 22300 id = 22 }
			name = "Gibraltar Garrison"
			strength = 50
			type = garrison
			model = 8
		}
	}
	# #####################################
	# NAVY
	# #####################################
	navalunit = {
		id = { type = 22300 id = 200 }
		location = 1611
		base = 1611
		name = "Ark Royal Fleet"
		division = {
			id = { type = 22300 id = 201 }
			name = "HMS Ark Royal"
			type = escort_carrier
			model = 1
		}
                division = {
			id = { type = 22300 id = 210 }
			name = "HMS Ocean"
			type = transport
			model = 4
		}
                division = {
			id = { type = 22300 id = 203 }
			name = "HMS Edinburgh"
			type = light_cruiser
			model = 1
		}
		division = {
			id = { type = 22300 id = 204 }
			name = "HMS York"
			type = light_cruiser
			model = 1
		}
                division = {
			id = { type = 22300 id = 202 }
			name = "HMS Liverpool"
			type = light_cruiser
			model = 1
		}
                division = {
			id = { type = 22300 id = 206 }
			name = "HMS Richmond"
			type = destroyer
			model = 2
		}
		division = {
			id = { type = 22300 id = 205 }
			name = "HMS Marlborough"
			type = destroyer
			model = 2
		}
                division = {
			id = { type = 22300 id = 243 }
			name = "HMS Chatham"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 22300 id = 208 }
			name = "3rd Transport Flotilla"
			type = transport
			model = 0
		}
		division = {
			id = { type = 22300 id = 209 }
			name = "6th Transport Flotilla"
			type = transport
			model = 0
		}
	}
	navalunit = {
		id = { type = 22300 id = 211 }
		location = 23
		base = 23
		name = "Invincible Fleet"
		division = {
			id = { type = 22300 id = 212 }
			name = "HMS Invincible"
			type = escort_carrier
			model = 1
		}
		division = {
			id = { type = 22300 id = 213 }
			name = "HMS Manchester"
			type = light_cruiser
			model = 1
		}
		division = {
			id = { type = 22300 id = 214 }
			name = "HMS Southampton"
			type = light_cruiser
			model = 1
		}
		division = {
			id = { type = 22300 id = 215 }
			name = "HMS Nottingham"
			type = light_cruiser
			model = 1
		}
		division = {
			id = { type = 22300 id = 216 }
			name = "HMS Newcastle"
			type = light_cruiser
			model = 1
		}
	}
	navalunit = {
		id = { type = 22300 id = 217 }
		location = 27
		base = 27
		name = "Ilustrious Fleet"
		division = {
			id = { type = 22300 id = 218 }
			name = "HMS Ilustrious"
			type = escort_carrier
			model = 1
		}
		division = {
			id = { type = 22300 id = 219 }
			name = "HMS Gloucester"
			type = light_cruiser
			model = 1
		}
		division = {
			id = { type = 22300 id = 220 }
			name = "HMS Sheffield"
			type = light_cruiser
			model = 1
		}
		division = {
			id = { type = 22300 id = 221 }
			name = "HMS Glasgow"
			type = light_cruiser
			model = 1
		}
		division = {
			id = { type = 22300 id = 222 }
			name = "HMS Cardiff"
			type = light_cruiser
			model = 1
		}
	}
	navalunit = {
		id = { type = 22300 id = 223 }
		location = 27
		base = 27
		name = "Frigate Squadron 4"
		division = {
			id = { type = 22300 id = 224 }
			name = "HMS Lancaster"
			type = destroyer
			model = 2
		}
		division = {
			id = { type = 22300 id = 225 }
			name = "HMS Iron Duke"
			type = destroyer
			model = 2
		}
		division = {
			id = { type = 22300 id = 226 }
			name = "HMS Westminster"
			type = destroyer
			model = 2
		}
		division = {
			id = { type = 22300 id = 228 }
			name = "HMS Somerset"
			type = destroyer
			model = 2
		}
		division = {
			id = { type = 22300 id = 229 }
			name = "HMS Kent"
			type = destroyer
			model = 2
		}
		division = {
			id = { type = 22300 id = 230 }
			name = "HMS St Albans"
			type = destroyer
			model = 2
		}
	}
	navalunit = {
		id = { type = 22300 id = 231 }
		location = 23
		base = 23
		name = "Frigate Squadron 6"
		division = {
			id = { type = 22300 id = 232 }
			name = "HMS Norfolk"
			type = destroyer
			model = 2
		}
		division = {
			id = { type = 22300 id = 233 }
			name = "HMS Argyll"
			type = destroyer
			model = 2
		}
		division = {
			id = { type = 22300 id = 234 }
			name = "HMS Monmouth"
			type = destroyer
			model = 2
		}
		division = {
			id = { type = 22300 id = 235 }
			name = "HMS Montrose"
			type = destroyer
			model = 2
		}
		division = {
			id = { type = 22300 id = 236 }
			name = "HMS Northumberland"
			type = destroyer
			model = 2
		}
		division = {
			id = { type = 22300 id = 237 }
			name = "HMS Grafton"
			type = destroyer
			model = 2
		}
		division = {
			id = { type = 22300 id = 238 }
			name = "HMS Sutherland"
			type = destroyer
			model = 2
		}
		division = {
			id = { type = 22300 id = 239 }
			name = "HMS Portland"
			type = destroyer
			model = 2
		}
	}
	navalunit = {
		id = { type = 22300 id = 240 }
		location = 23
		base = 23
		name = "Frigate Squadron 8"
                division = {
			id = { type = 22300 id = 241 }
			name = "HMS Cornwall"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 22300 id = 242 }
			name = "HMS Cumberland"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 22300 id = 244 }
			name = "HMS Campbeltown"
			type = destroyer
			model = 1
		}
	}
	navalunit = {
		id = { type = 22300 id = 253 }
		location = 23
		base = 23
		name = "Royal Navy Transports"
		division = {
			id = { type = 22300 id = 254 }
			name = "HMS Albion"
			type = transport
			model = 3
		}
		division = {
			id = { type = 22300 id = 255 }
			name = "HMS Bulwark"
			type = transport
			model = 3
		}
		division = {
			id = { type = 22300 id = 256 }
			name = "1st Transport Flotilla"
			type = transport
			model = 0
		}
	}
	navalunit = {
		id = { type = 22300 id = 261 }
		location = 23
		base = 23
		name = "Submarine Squadron 2"
		division = {
			id = { type = 22300 id = 262 }
			name = "HMS Trenchant"
			type = submarine
			model = 14
		}
		division = {
			id = { type = 22300 id = 263 }
			name = "HMS Talent"
			type = submarine
			model = 14
		}
		division = {
			id = { type = 22300 id = 264 }
			name = "HMS Triumph"
			type = submarine
			model = 14
		}
		division = {
			id = { type = 22300 id = 265 }
			name = "HMS Trafalgar"
			type = submarine
			model = 14
		}
		division = {
			id = { type = 22300 id = 266 }
			name = "HMS Turbulent"
			type = submarine
			model = 14
		}
		division = {
			id = { type = 22300 id = 267 }
			name = "HMS Tireless"
			type = submarine
			model = 14
		}
		division = {
			id = { type = 22300 id = 268 }
			name = "HMS Torbay"
			type = submarine
			model = 14
		}
	}
	navalunit = {
		id = { type = 22300 id = 269 }
		location = 27
		base = 27
		name = "Submarine Squadron 1"
		division = {
			id = { type = 22300 id = 272 }
			name = "HMS Sovereign"
			type = submarine
			model = 12
		}
		division = {
			id = { type = 22300 id = 273 }
			name = "HMS Superb"
			type = submarine
			model = 12
		}
                division = {
			id = { type = 22300 id = 271 }
			name = "HMS Sceptre"
			type = submarine
			model = 12
		}
		division = {
			id = { type = 22300 id = 274 }
			name = "HMS Spartan"
			type = submarine
			model = 12
		}
		division = {
			id = { type = 22300 id = 275 }
			name = "HMS Splendid"
			type = submarine
			model = 12
		}
	}
	navalunit = {
		id = { type = 22300 id = 276 }
		location = 11
		base = 11
		name = "Strategic Submarine Squadron"
		division = {
			id = { type = 22300 id = 277 }
			name = "HMS Vanguard"
			type = heavy_cruiser
			model = 2
		}
		division = {
			id = { type = 22300 id = 278 }
			name = "HMS Victorious"
			type = heavy_cruiser
			model = 2
		}
		division = {
			id = { type = 22300 id = 279 }
			name = "HMS Vigilant"
			type = heavy_cruiser
			model = 2
		}
		division = {
			id = { type = 22300 id = 280 }
			name = "HMS Vengeance"
			type = heavy_cruiser
			model = 2
		}
	}
	# #####################################
	# AIR FORCE
	# #####################################
	airunit = {
		id = { type = 22300 id = 100 }
		location = 7
		base = 7
		name = "RAF Kinloss"
		division = {
			id = { type = 22300 id = 101 }
			name = "No. 120 Squadron"
			type = naval_bomber
			strength = 100
			model = 2
		}
                division = {
			id = { type = 22300 id = 102 }
			name = "No. 201 Squadron"
			type = naval_bomber
			strength = 100
			model = 2
		}
	}
	airunit = {
		id = { type = 22300 id = 103 }
		location = 7
		base = 7
		name = "RAF Lossiemouth"
		division = {
			id = { type = 22300 id = 104 }
			name = "No. 12 Squadron"
			type = tactical_bomber
			strength = 100
			model = 3
		}
		division = {
			id = { type = 22300 id = 105 }
			name = "No. 14 Squadron"
			type = tactical_bomber
			strength = 100
			model = 3
		}
	}
	airunit = {
		id = { type = 22300 id = 106 }
		location = 12
		base = 12
		name = "RAF Leuchars"
		division = {
			id = { type = 22300 id = 107 }
			name = "No. 43 Squadron"
			type = multi_role
			strength = 80
			model = 2
		}
                division = {
			id = { type = 22300 id = 108 }
			name = "No. 111 Squadron"
			type = multi_role
			strength = 100
			model = 2
		}
	}
	airunit = {
		id = { type = 22300 id = 109 }
		location = 16
		base = 16
		name = "RAF Cottesmore"               # Joint Force Harrier
		division = {
			id = { type = 22300 id = 110 }
			name = "No. 1 Squadron"
			type = interceptor
			strength = 100
			model = 1
		}
                division = {
			id = { type = 22300 id = 111 }
			name = "No. 3 Squadron"
			type = interceptor
			strength = 100
			model = 1
		}
                division = {
			id = { type = 22300 id = 112 }
			name = "No. 4 Squadron"
			type = interceptor
			strength = 100
			model = 1
		}
	}
	airunit = {
		id = { type = 22300 id = 113 }
		location = 25
		base = 25
		name = "RAF Marham"
		division = {
			id = { type = 22300 id = 114 }
			name = "No. 2 Squadron"  # recon
			type = tactical_bomber
			strength = 100
			model = 3
		}
		division = {
			id = { type = 22300 id = 115 }
			name = "No. 9 Squadron"
			type = tactical_bomber
			strength = 100
			model = 3
		}
		division = {
			id = { type = 22300 id = 116 }
			name = "No. 13 Squadron"  # recon
			type = tactical_bomber
			strength = 100
			model = 3
		}
                division = {
			id = { type = 22300 id = 117 }
			name = "No. 31 Squadron"
			type = tactical_bomber
			strength = 100
			model = 3
		}
	}
	airunit = {
		id = { type = 22300 id = 118 }
		location = 24
		base = 24
		name = "RAF Coltishall"
		division = {
			id = { type = 22300 id = 119 }
			name = "No. 6 Squadron"
			type = cas
			strength = 100
			model = 0
		}
		division = {
			id = { type = 22300 id = 120 }
			name = "No. 41 Squadron"
			type = cas
			strength = 100
			model = 0
		}
                division = {
			id = { type = 22300 id = 121 }
			name = "No. 54 Squadron"
			type = cas
			strength = 100
			model = 0
		}
	}
        airunit = {
		id = { type = 22300 id = 122 }
		location = 13
		base = 13
		name = "RAF Leeming"
		division = {
			id = { type = 22300 id = 123 }
			name = "No. 11 Squadron"
			type = multi_role
			strength = 100
			model = 2
		}
		division = {
			id = { type = 22300 id = 124 }
			name = "No. 25 Squadron"      
			type = multi_role
			strength = 100
			model = 2
		}
	}
	airunit = {
		id = { type = 22300 id = 125 }
		location = 28
		base = 28
		name = "RAF Brize Norton"
                division = {
			id = { type = 22300 id = 126 }
			name = "No. 24 Squadron"
			type = transport_plane
			strength = 100
			model = 2
		}
                division = {
			id = { type = 22300 id = 127 }
			name = "No. 25 Squadron"
			type = transport_plane
			strength = 100
			model = 2
		}
                division = {
			id = { type = 22300 id = 128 }
			name = "No. 47 Squadron"
			type = transport_plane
			strength = 100
			model = 2
		}
		division = {
			id = { type = 22300 id = 129 }
			name = "No. 99 Squadron"
			type = transport_plane
			strength = 100
			model = 2
		}
	}
	airunit = {
		id = { type = 22300 id = 130 }
		location = 1041
		base = 1041
		name = "Operation Telic Air Wing"
		division = {
			id = { type = 22300 id = 131 }
			name = "No. 617 Squadron"
			type = tactical_bomber
			strength = 100
			model = 3
		}
	}
}
