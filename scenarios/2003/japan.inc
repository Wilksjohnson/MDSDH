# #############################
# Country definition for JAP #
# #############################

country = {
	tag = JAP
	# Resource Reserves
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 300
	manpower = 140
	transports = 250
	escorts = 0
	capital = 1552
	diplomacy = {
		relation = { tag = USA value = 200 access = yes }
	}
	SpyInfo                = {  country = "JAP" NumberOfSpies = 9  } 
    
   # Sakhalin 
	nationalprovinces = {  
		1543 1544 1545 1549 1551 1550 1556 1552 1557 1558 1553 1554 1559 1560 
		1561 1662 1661 1663 1664 1562 1563 1564 1672 1555 1542   
		1541 #Oha (Russian North Sahalin)
        1547 1548 1546 
	} 
	ownedprovinces = {  
		1544 1545 1549 1551 1550 1556 1552 1557 1558 1553 1554 1559 1560 
		1561 1662 1661 1663 1664 1562 1563 1564 1672   
		1555 1547 1548 
		1546  
		 
	} 
	controlledprovinces = {  
		1544 1545 1549 1551 1550 1556 1552 1557 1558 1553 1554 1559 1560 
		1561 1662 1661 1663 1664 1562 1563 1564 1672   
		1555 1547 1548 
		1546 
		
	} 
	claimedprovinces = { 
		1672  #Pacific Island
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
		2000 2010 2050
		2060 2070 2110
		2120 2300 2310
		2320 2330 2400
		2410 2420 2430
		2200 2210 2220
		2230 2500 2510
		2520 2530 2600
		2610 2620 2630
		2700 2710 2720
		2730 2800 2810
		2820 2830 # Army Org
		1000 1010 1050
		1060 1070 1110
		1500 1510 1520
		1530 1200 1210
		1220 1230 1300
		1310 1320 1330
		1400 1410 1420
		1430 1960 1900
		1910 1920 1930
		1260 1270 1700
		1710 1720 1800
		1810 1820 # Aircraft
		4800 4810 4820
		4700 4710 4720
		4750 4760 4770
		4500 4570 4000
		4010 4020 4030
		4100 4110 4120
		4130 4300 4310
		4320 4400 4410
		4640 4650 4660
		4670 4900 4910
		4920 # Land Docs
		6010 6020 6930
		6600 6610 6700
		6710 6100 6110
		6120 6140 6150
		6160 6170 6200
		6210 6220 6240
		6250 6260 6270
		6300 6310 6320
		6340 6350 6360
		6370 # Air Docs
		9040 9510 9520
		9530 9540 9050
		9060 9070 9090
		9100 9110 9120
		9130 9140 9150
		9170 9180 9190
		9200 9210 9220
		9230 9280 # Secret Weapons
		7010 7060 7070
		7080 7180 7190
		7200 7330 7310
		7320 7380 # Navy Techs
		3000 3010 3020
		3030 3100 3110
		3120 3590 
		3600 3700 37700
		3710 37710 3720
		37720 3850 3860
		3870 3880 # Navy Doctrines
		8900 8910 8920
		8930 8950 8960
		8970 8980 8400
		8410 8420 8000
		8010 8020 8030
		8500 8510 8520
		8530 8100 8110
		8120 8130 8600
		8610 8620 8630
	}
	blueprints = { 3400 3410 }
	policy = {
		date = { year = 0 month = march day = 0 }
		democratic = 10
		political_left = 4
		free_market = 7
		freedom = 9
		professional_army = 10
		defense_lobby = 2
		interventionism = 2
	}
	# #####################################
	# ARMY
	# #####################################
	landunit = {
		id = { type = 13200 id = 1 }
		location = 1545
		name = "Northern Army"
		division = {
			id = { type = 13200 id = 2 }
			name = "Northern Army HQ"
			strength = 100
			type = hq
			model = 2
		}
                division = {
			id = { type = 13200 id = 4 }
			name = "7th Armored Division"
			strength = 100
			type = armor
			model = 15
		}
		division = {
			id = { type = 13200 id = 3 }
			name = "2nd Division"
			strength = 100
			type = motorized
			model = 3
		}
		division = {
			id = { type = 13200 id = 5 }
			name = "11th Division"
			strength = 100
			type = motorized
			model = 3
		}
		division = {
			id = { type = 13200 id = 6 }
			name = "5th Brigade"
			strength = 100
			type = cavalry
			model = 3
		}
	}
	landunit = {
		id = { type = 13200 id = 7 }
		location = 1549
		name = "North Eastern Army"
		division = {
			id = { type = 13200 id = 8 }
			name = "6th Division"
			strength = 100
			type = motorized
			model = 3
		}
		division = {
			id = { type = 13200 id = 9 }
			name = "9th Division"
			strength = 100
			type = motorized
			model = 3
		}
	}
	landunit = {
		id = { type = 13200 id = 10 }
		location = 1552
		name = "Eastern Army"
		division = {
			id = { type = 13200 id = 11 }
			name = "1st Division"
			strength = 100
			type = motorized
			model = 3
			extra = heavy_armor
			brigade_model = 2
		}
		division = {
			id = { type = 13200 id = 12 }
			name = "12th Brigade"
			strength = 100
			type = militia
			model = 3
		}
	}
	landunit = {
		id = { type = 13200 id = 13 }
		location = 1552
		name = "Special Forces Command"
		division = {
			experience = 10
			id = { type = 13200 id = 14 }
			name = "1st Airborne Brigade"
			strength = 100
			type = paratrooper
			model = 14
		}
	}
	landunit = {
		id = { type = 13200 id = 15 }
		location = 1553
		name = "Middle Army"
		division = {
			id = { type = 13200 id = 16 }
			name = "3rd Division"
			strength = 100
			type = motorized
			model = 3
		}
		division = {
			id = { type = 13200 id = 17 }
			name = "10th Division"
			strength = 100
			type = motorized
			model = 3
		}
		division = {
			id = { type = 13200 id = 18 }
			name = "13th Brigade"
			strength = 100
			type = mechanized
			model = 3
		}
		division = {
			id = { type = 13200 id = 19 }
			name = "14th Brigade"
			strength = 100
			type = mechanized
			model = 3
		}
	}
	landunit = {
		id = { type = 13200 id = 20 }
		location = 1560
		name = "Western Army"
		division = {
			id = { type = 13200 id = 21 }
			name = "4th Division"
			strength = 100
			type = motorized
			model = 3
		}
		division = {
			id = { type = 13200 id = 22 }
			name = "8th Division"
			strength = 100
			type = motorized
			model = 3
		}
	}
	# #####################################
	# NAVY
	# #####################################
	navalunit = {
		id = { type = 13200 id = 201 }
		location = 1552
		base = 1552
		name = "1st Escort Flotilla"
                division = {
			id = { type = 13200 id = 202 }
			name = "Kirishima"
			type = light_cruiser
			model = 2
		}
                division = {
			id = { type = 13200 id = 203 }
			name = "Shirane"
			type = light_cruiser  
			model = 1
		}
                division = {
			id = { type = 13200 id = 204 }
			name = "Tachikaze"
			type = light_cruiser
			model = 1
		}
		division = {
			id = { type = 13200 id = 205 }
			name = "Hatakaze"
			type = light_cruiser
			model = 1
		}
                division = {
			id = { type = 13200 id = 206 }
			name = "Murasame"
			type = destroyer
			model = 3
		}
		division = {
			id = { type = 13200 id = 207 }
			name = "Harusame"
			type = destroyer
			model = 3
		}
                division = {
			id = { type = 13200 id = 208 }
			name = "Ikazuchi"
			type = destroyer
			model = 3
		}
	}
	navalunit = {
		id = { type = 13200 id = 209 }
		location = 1560
		base = 1560
		name = "2nd Escort Flotilla"
                division = {
			id = { type = 13200 id = 210 }
			name = "Kongo"
			type = light_cruiser
			model = 2
		}
                division = {
			id = { type = 13200 id = 211 }
			name = "Sawakaze"
			type = light_cruiser
			model = 1
		}
                division = {
			id = { type = 13200 id = 212 }
			name = "Kurama"
			type = light_cruiser
			model = 1
		}
                division = {
			id = { type = 13200 id = 213 }
			name = "Yudachi"
			type = destroyer
			model = 3
		}
                division = {
			id = { type = 13200 id = 214 }
			name = "Kirisame"
			type = destroyer
			model = 3
		}
		division = {
			id = { type = 13200 id = 215 }
			name = "Ariake"
			type = destroyer
			model = 3
		}   
                division = {
			id = { type = 13200 id = 216 }
			name = "Sawagiri"
			type = destroyer
			model = 2
		}         
	}
	navalunit = {
		id = { type = 13200 id = 217 }
		location = 1558
		base = 1558
		name = "3rd Escort Flotilla"
                division = {
			id = { type = 13200 id = 218 }
			name = "Myoko"
			type = light_cruiser
			model = 2
		}
		division = {
			id = { type = 13200 id = 219 }
			name = "Shimakaze"
			type = light_cruiser
			model = 1
		}
		division = {
			id = { type = 13200 id = 220 }
			name = "Haruna"
			type = light_cruiser
			model = 1
		}
                division = {
			id = { type = 13200 id = 221 }
			name = "Amagiri"
			type = destroyer
			model = 2
		}
                division = {
			id = { type = 13200 id = 222 }
			name = "Yugiri"
			type = destroyer
			model = 2
		}
                division = {
			id = { type = 13200 id = 223 }
			name = "Hamagiri"
			type = destroyer
			model = 2
		}
                division = {
			id = { type = 13200 id = 224 }
			name = "Setogiri"
			type = destroyer
			model = 2
		}
                division = {
			id = { type = 13200 id = 225 }
			name = "Hamayuki"
			type = destroyer
			model = 1
		}
	}
	navalunit = {
		id = { type = 13200 id = 226 }
		location = 1554
		base = 1554
		name = "4th Escort Flotilla"
                division = {
			id = { type = 13200 id = 227 }
			name = "Chokai"
			type = light_cruiser
			model = 2
		}
                division = {
			id = { type = 13200 id = 228 }
			name = "Asakaze"
			type = light_cruiser
			model = 1
		}
		division = {
			id = { type = 13200 id = 229 }
			name = "Hiei"
			type = light_cruiser
			model = 1
		}
                division = {
			id = { type = 13200 id = 230 }
			name = "Inazuma"
			type = destroyer
			model = 3
		}
                division = {
			id = { type = 13200 id = 231 }
			name = "Samidare"
			type = destroyer
			model = 3
		} 
                division = {
			id = { type = 13200 id = 232 }
			name = "Akebono"
			type = destroyer
			model = 3
		}
                division = {
			id = { type = 13200 id = 233 }
			name = "Umigiri"
			type = destroyer
			model = 2
			}
	}            	           
	navalunit = {
		id = { type = 13200 id = 234 }
		location = 1552
		base = 1552
		name = "Yokosuka Regional District"
		division = {
			id = { type = 13200 id = 235 }
			name = "Hatsuyuki"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 13200 id = 236 }
			name = "Shirayuki"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 13200 id = 237 }
			name = "Sawayuki"
			type = destroyer
			model = 1
		}
	}
        navalunit = {
		id = { type = 13200 id = 238 }
		location = 1554
		base = 1554
		name = "Kure Regional District"
                division = {
			id = { type = 13200 id = 239 }
			name = "Yamayuki"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 13200 id = 240 }
			name = "Matsuyuki"
			type = destroyer
			model = 1
		}
                division = {
			id = { type = 13200 id = 241 }
			name = "Setoyuki"
			type = destroyer
			model = 1
		}
	}
        navalunit = {
		id = { type = 13200 id = 242 }
		location = 1560
		base = 1560
		name = "Sasebo Regional District"
                division = {
			id = { type = 13200 id = 243 }
			name = "Isoyuki"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 13200 id = 244 }
			name = "Harayuki"
			type = destroyer
			model = 1
		}
                division = {
			id = { type = 13200 id = 245 }
			name = "Asayuki"
			type = destroyer
			model = 1
		}
	}
        navalunit = {
		id = { type = 13200 id = 246 }
		location = 1558
		base = 1558
		name = "Maizuru Regional District"
                division = {
			id = { type = 13200 id = 247 }
			name = "Asagiri"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 13200 id = 248 }
			name = "Yamagiri"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 13200 id = 249 }
			name = "Mineyuki"
			type = destroyer
			model = 1
		}
	}
	navalunit = {
		id = { type = 13200 id = 250 }
		location = 1554
		base = 1554
		name = "1st Submarine Flotilla"
		division = {
			id = { type = 13200 id = 251 }
			name = "Michishio"
			type = submarine
			model = 4
		}
                division = {
			id = { type = 13200 id = 252 }
			name = "Makishio"
			type = submarine
			model = 4
		}
                division = {
			id = { type = 13200 id = 253 }
			name = "Isoshio"
			type = submarine
			model = 4
		}
                division = {
			id = { type = 13200 id = 254 }
			name = "Hayashio"
			type = submarine
			model = 3
		}
		division = {
			id = { type = 13200 id = 255 }
			name = "Arashio"
			type = submarine
			model = 3
		}
		division = {
			id = { type = 13200 id = 256 }
			name = "Fuyushio"
			type = submarine
			model = 3
		}
                division = {
			id = { type = 13200 id = 257 }
			name = "Harushio"
			type = submarine
			model = 3
		}
		division = {
			id = { type = 13200 id = 258 }
			name = "Natsushio"
			type = submarine
			model = 3
		}
		
	}
	navalunit = {
		id = { type = 13200 id = 259 }
		location = 1560
		base = 1560
		name = "2nd Submarine Flotilla"
                division = {
			id = { type = 13200 id = 260 }
			name = "Oyashio"
			type = submarine
			model = 4
		}
		division = {
			id = { type = 13200 id = 261 }
			name = "Uzushio"
			type = submarine
			model = 4
		}
		division = {
			id = { type = 13200 id = 262 }
			name = "Narushio"
			type = submarine
			model = 4
		}
                division = {
			id = { type = 13200 id = 263 }
			name = "Wakashio"
			type = submarine
			model = 3
		}
		division = {
			id = { type = 13200 id = 264 }
			name = "Asashio"
			type = submarine
			model = 3
		}
	}
	navalunit = {
		id = { type = 13200 id = 265 }
		location = 1552
		base = 1552
		name = "1st Landing Division"
		division = {
			id = { type = 13200 id = 266 }
			name = "1st Transport Fleet"
			type = transport
			model = 0
		}
		division = {
			id = { type = 13200 id = 267 }
			name = "2nd Transport Fleet"
			type = transport
			model = 0
		}
		division = {
			id = { type = 13200 id = 268 }
			name = "3rd Transport Fleet"
			type = transport
			model = 0
		}
	}
# #####################################
# AIR FORCE
# #####################################
	airunit = {
		id = { type = 13200 id = 101 }
		location = 1547
		base = 1547
		name = "Northern Air Defense Force"
		division = { id = { type = 13200 id = 102 } name = "2nd Air Wing" type = multi_role strength = 100 model = 2 }
		division = { id = { type = 13200 id = 103 } name = "3rd Air Wing" type = interceptor strength = 100 model = 3 }
	}
	airunit = {
		id = { type = 13200 id = 104 }
		location = 1552
		base = 1552
		name = "Central Air Defense Force"
		division = { id = { type = 13200 id = 105 } name = "6th Air Wing" type = multi_role strength = 100 model = 2 }
		division = { id = { type = 13200 id = 106 } name = "7th Air Wing" type = multi_role strength = 100 model = 1 }
	}
        airunit = {
		id = { type = 13200 id = 107 }
		location = 1560
		base = 1560
		name = "Western Air Defense Force"
		division = { id = { type = 13200 id = 108 } name = "5th Air Wing" type = multi_role strength = 100 model = 1 }
		division = { id = { type = 13200 id = 109 } name = "8th Air Wing" type = multi_role strength = 100 model = 2 }
	}
        airunit = {
		id = { type = 13200 id = 110 }
		location = 1563
		base = 1563
		name = "Southwestern Composite Air Division"
		division = { id = { type = 13200 id = 111 } name = "83rd Air Wing" type = multi_role strength = 100 model = 2 }
	}
	airunit = {
		id = { type = 13200 id = 112 }
		location = 1552
		base = 1552
		name = "Air Support Command"
                division = { id = { type = 13200 id = 113 } name = "1st Tactical Airlift Wing" type = transport_plane strength = 100 model = 2 }
		division = { id = { type = 13200 id = 114 } name = "2nd Tactical Airlift Wing" type = transport_plane strength = 100 model = 2 }
	}
	airunit = {
		id = { type = 13200 id = 115 }
		location = 1560
		base = 1560
		name = "Fleet Air Force"
		division = {
			id = { type = 13200 id = 116 }
			name = "1st Fleet Air Wing"
			type = naval_bomber
			strength = 100
			model = 3
		}
		division = {
			id = { type = 13200 id = 117 }
			name = "2nd Fleet Air Wing"
			type = naval_bomber
			strength = 100
			model = 3
		}
		division = {
			id = { type = 13200 id = 118 }
			name = "4th Fleet Air Wing"
			type = naval_bomber
			strength = 100
			model = 3
		}
                division = {
			id = { type = 13200 id = 119 }
			name = "5th Fleet Air Wing"
			type = naval_bomber
			strength = 100
			model = 3
		}
	}
	# ###################################
	# Under Development
	# ###################################
	division_development = {
		id = { type = 13200 id = 400 }
		name = "Takanami"
		type = destroyer
		model = 3
		cost = 5
		date = { day = 4 month = october year = 2003 }
	}
	division_development = {
		id = { type = 13200 id = 401 }
		name = "Onami"
		type = destroyer
		model = 3
		cost = 5
		date = { day = 29 month = december year = 2003 }
	}
	division_development = {
		id = { type = 13200 id = 402 }
		name = "Kuroshio"
		type = submarine
		model = 4
		cost = 5
		date = { day = 14 month = april year = 2004 }
	}
	division_development = {
		id = { type = 13200 id = 403 }
		name = "Takashio"
		type = submarine
		model = 4
		cost = 5
		date = { day = 3 month = june year = 2005 }
	}
	division_development = {
		id = { type = 13200 id = 404 }
		name = "Yaeshio"
		type = submarine
		model = 4
		cost = 5
		date = { day = 20 month = march year = 2006 }
	}
	division_development = {
		id = { type = 13200 id = 405 }
		name = "Setoshio"
		type = submarine
		model = 4
		cost = 5
		date = { day = 21 month = august year = 2007 }
	}
}
