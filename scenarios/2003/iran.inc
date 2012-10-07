
##############################
# Country definition for PER #
##############################

country =
{ tag                 = PER
  # Resource Reserves
  energy              = 1000
  metal               = 1000
  rare_materials      = 500
  oil                 = 500
  supplies            = 500
  money               = 400
  capital             = 1085
  manpower            = 120
  transports          = 90
  escorts             = 0
  diplomacy           = { 
relation = { tag = USA value = -150 }
relation = { tag = ISR value = -200 }
relation = { tag = SYR value = 200 }
relation = { tag = VEN value = 150 }
relation = { tag = PAK value = 100 }
relation = { tag = PRK value = 100 }
relation = { tag = SUD value = 150 }
relation = { tag = U52 value = 100 }
relation = { tag = U51 value = 100 }
relation = { tag = U18 value = 120 }
relation = { tag = SAU value = -80 }
relation = { tag = IRQ value = -120 }
relation = { tag = U91 value = -50 }
relation = { tag = MLY value = 80 }
relation = { tag = INO value = 50 }
relation = { tag = IND value = 50 }
relation = { tag = LBY value = 120 }
}
SpyInfo                = { country = "PER" NumberOfSpies = 2 }
nationalprovinces      = { 1095 1083 1084 1087 1081 1080 1085 1082 1089 1091 1090 1088 1086 1092 1094 1093  } 
ownedprovinces         = { 1095 1083 1081 1080 1085 1082 1084 1087 1089 1091 1090 1088 1086 1092 1094 1093  } 
controlledprovinces    = { 1095 1083 1081 1080 1085 1082 1084 1087 1089 1091 1090 1088 1086 1092 1094 1093  }
techapps 	= { 
					#Industry
					5010 5020 5030 5040 5050 5060 5070 5080 5090 
					5110 5120 5130 5140 5150 5160 5170 5180 5190
					#Army Equip
					2200 2210 2220
					2600 2610 2620
					2800 2810 2820
					2700 2710 2720
					2300 2310
					2400 2410
					2500 2510
					2000 2010
					2050 2060
					#Army Org
					1960 1970
					1900 1910
					1260
					1800
                                        1000 1050
                                        1010 1060
					1500 1510
					1200 1210
					1300 1310
					1400 1410
					1700
					#Aircraft
                                        4700 4710
                                        4750 4760
                                        4800 4810
                                        4900
                                        4640 4650
                                        4400
                                        4550
                                        4000 4010 4020
                                        4100 4110 4120
					#Land Docs
					6010 6030 6040
					6930
					6600 6610
					6100 6110 6120 6140 6150 6160 6170
					6200 6130 6260
					#Air Docs
					9010 9510
                                        9050 9130 9060 9070
                                        9090
                                        9100
                                        9110
                                        9120
					#Secret Weapons
					7010
                                        7330 7310
                                        7240
                                        7100
                                        #Navy Techs
                                        3000
                                        3100
                                        3700 3710 3720
                                        3590
                                        3850 3860 3870
                                        #Navy Doctrines
                                        8900 8910
                                        8950 8960
                                        8400 8410
                                        8000 8010
                                        8500 8510
                                        8100
                                        8600
										
                        }
  policy =
  { date              = { year = 0 month = march day = 0 }
    democratic        = 6
    political_left    = 2
    free_market       = 6
    freedom           = 2
    professional_army = 4
    defense_lobby     = 5
    interventionism   = 7
  }
# #####################################
# ARMY
# #####################################
  landunit =
  { id       = { type = 12500 id = 58 }
    location = 1085
    name     = "1st Army"
    division =
    { id       = { type = 12500 id = 1 }
      name     = "1st Army HQ"
      strength = 100
      type     = hq
      model    = 1
    }
  }
   landunit =
  { id       = { type = 12500 id = 2 }
    location = 1086
    name     = "2nd Army"
    division =
    { id       = { type = 12500 id = 3 }
      name     = "2nd Army HQ"
      strength = 100
      type     = hq
      model    = 1
    }
  }
   landunit =
  { id       = { type = 12500 id = 4 }
    location = 1088
    name     = "3rd Army"
    division =
    { id       = { type = 12500 id = 5 }
      name     = "3rd Army HQ"
      strength = 100
      type     = hq
      model    = 1
    }
  }
  landunit =
  { id       = { type = 12500 id = 6 }
    location = 1082
    name     = "Northern Operations Sector"
    division =
    { id       = { type = 12500 id = 7 }
      name     = "28th Mechanized Division"
      strength = 100
      type     = infantry
      model    = 2
    }
    division =
    { id       = { type = 12500 id = 8 }
      name     = "40th Infantry Division"
      strength = 100
      type     = motorized
      model    = 1
    }
    division =
    { id       = { type = 12500 id = 9 }
      name     = "64th Infantry Division"
      strength = 100
      type     = motorized
      model    = 1
    }
  }
  landunit =
  { id       = { type = 12500 id = 10 }
    location = 1087
    name     = "Southern Operations Sector"
    division =
    { id            = { type = 12500 id = 11 }
      name          = "81st Armored Division"
      strength      = 100
      type          = armor
      model         = 11
    }
    division =
    { id            = { type = 12500 id = 12 }
      name          = "92nd Armored Division"
      strength      = 100
      type          = armor
      model         = 11
    }
  }
  landunit =
  { id       = { type = 12500 id = 13 }
    location = 1095
    name     = "Eastern Operations Sector"
    division =
    { id            = { type = 12500 id = 14 }
      name          = "88th Armored Division"
      strength      = 100
      type          = armor
      model         = 8
    }
    division =
    { id            = { type = 12500 id = 15 }
      name          = "30th Infantry Division"
      strength      = 100
      type          = motorized
      model         = 1
    }
    division =
    { id            = { type = 12500 id = 16 }
      name          = "77th Infantry Division"
      strength      = 100
      type          = motorized
      model         = 1
    }
  }
  landunit =
  { id       = { type = 12500 id = 17 }
    location = 1084
    name     = "Western Operations Sector"
    division =
    { id       = { type = 12500 id = 18 }
      name     = "18th Armored Division"
      strength = 100
      type     = armor
      model    = 8
    }
    division =
    { id            = { type = 12500 id = 19 }
      name          = "58th Infantry Division"
      strength      = 100
      type          = motorized
      model         = 1
    }
    division =
    { id            = { type = 12500 id = 20 }
      name          = "84th Mechanized Division"
      strength      = 100
      type          = infantry
      model         = 1
    }
  }
  landunit =
  { id       = { type = 12500 id = 21 }
    location = 1085
    name     = "23rd Commando Division"
    division =
    { experience    = 5
      id       = { type = 12500 id = 22 }
      name     = "1st Bde. - 23rd Commando Division"
      strength = 100
      type     = bergsjaeger
      model    = 13
      extra         = engineer
      brigade_model = 0
    }
    division =
    { experience    = 5
      id       = { type = 12500 id = 23 }
      name     = "2nd Bde. - 23rd Commando Division"
      strength = 100
      type     = bergsjaeger
      model    = 13
      extra         = engineer
      brigade_model = 0
    }
    division =
    { experience    = 5
      id       = { type = 12500 id = 24 }
      name     = "3rd Bde. - 23rd Commando Division"
      strength = 100
      type     = bergsjaeger
      model    = 13
      extra         = engineer
      brigade_model = 0
    }
  }
  landunit =
  { id       = { type = 12500 id = 25 }
    location = 1085
    name     = "55th Airborne Division"
    division =
    { experience    = 5
      id       = { type = 12500 id = 26 }
      name     = "1st Bde. - 55th Airborne Division"
      strength = 100
      type     = paratrooper
      model    = 14
    }
    division =
    { experience    = 5
      id       = { type = 12500 id = 27 }
      name     = "2nd Bde. - 55th Airborne Division"
      strength = 100
      type     = paratrooper
      model    = 14
    }
  }
# ##################################
# Pasdaran - Revolutionary Guards
# ##################################
  landunit =
  { id       = { type = 12500 id = 28 }
    location = 1085
    name     = "1st Pasdaran Airborne Corps"
    division =
    { id            = { type = 12500 id = 29 }
      name          = "55th IRGC Parachute Brigade"
      strength      = 100
      type          = paratrooper
      model         = 15
    }
  }
  landunit =
  { id       = { type = 12500 id = 30 }
    location = 1089
    name     = "Pasdaran Southern Operations Sector"
    division =
    { id            = { type = 12500 id = 31 }
      name          = "40th IRGC Armored Division"
      strength      = 100
      type          = armor
      model         = 7
    }
    division =
    { id            = { type = 12500 id = 32 }
      name          = "5th IRGC Mechanized Division"
      strength      = 100
      type          = infantry
      model         = 0
    }
    division =
    { id       = { type = 12500 id = 33 }
      name     = "3rd IRGC Infantry Division"
      strength = 100
      type     = motorized
      model    = 1
    }
    division =
    { id       = { type = 12500 id = 34 }
      name     = "7th IRGC Infantry Division"
      strength = 100
      type     = motorized
      model    = 1
    }
    division =
    { id       = { type = 12500 id = 35 }
      name     = "14th IRGC Infantry Division"
      strength = 100
      type     = motorized
      model    = 1
    }
    division =
    { experience    = 5
      id       = { type = 12500 id = 36 }
      name     = "45th Quds IRGC Commando Brigade"
      strength = 100
      type     = bergsjaeger
      model    = 12
    }
    division =
    { experience    = 5
      id       = { type = 12500 id = 37 }
      name     = "25th Quds IRGC Commando Brigade"
      strength = 100
      type     = bergsjaeger
      model    = 12
    }
  }
  landunit =
  { id       = { type = 12500 id = 38 }
    location = 1090
    name     = "Pasdaran Northern Operations Sector"
    division =
    { id       = { type = 12500 id = 39 }
      name     = "6th IRGC Infantry Division"
      strength = 100
      type     = motorized
      model    = 1
    }
    division =
    { id       = { type = 12500 id = 40 }
      name     = "411th IRGC Infantry Division"
      strength = 100
      type     = motorized
      model    = 1
    }
    division =
    { id       = { type = 12500 id = 41 }
      name     = "55th IRGC Infantry Division"
      strength = 100
      type     = motorized
      model    = 1
    }
  }
  landunit =
  { id       = { type = 12500 id = 42 }
    location = 1087
    name     = "Pasdaran Western Operations Sector"
    division =
    { id            = { type = 12500 id = 43 }
      name          = "17th IRGC Infantry Division"
      strength      = 100
      type          = motorized
      model         = 1
    }
    division =
    { id       = { type = 12500 id = 45 }
      name     = "44th IRGC Infantry Division"
      strength = 100
      type     = motorized
      model    = 1
    }
    division =
    { id       = { type = 12500 id = 46 }
      name     = "57th IRGC Infantry Division"
      strength = 100
      type     = motorized
      model    = 1
    }
  }
  landunit =
  { id       = { type = 12500 id = 47 }
    location = 1082
    name     = "Pasdaran Quds Force Corps"
    division =
    { experience    = 5
      id            = { type = 12500 id = 48 }
      name          = "35th Quds IRGC Commando Brigade"
      strength      = 100
      type          = bergsjaeger
      model         = 12
    }
    division =
    { experience    = 5
      id            = { type = 12500 id = 49 }
      name          = "58th Quds IRGC Commando Brigade"
      strength      = 100
      type          = bergsjaeger
      model         = 12
    }
  }
  landunit =
  { id       = { type = 12500 id = 50 }
    location = 1083
    name     = "1st Pasdaran Airmobile Corps"
    division =
    { id            = { type = 12500 id = 51 }
      name          = "29th IRGC Airmobile Brigade"
      strength      = 100
      type          = militia
      model         = 1      
    }
  }
  landunit =
  { id       = { type = 12500 id = 52 }
    location = 1092
    name     = "Pasdaran Eastern Operations Sector"
    division =
    { id            = { type = 12500 id = 53 }
      name          = "30th IRGC Armored Brigade"
      strength      = 100
      type          = light_armor
      model         = 1
    }
    division =
    { id       = { type = 12500 id = 54 }
      name     = "15th IRGC Mechanized Brigade"
      strength = 100
      type     = cavalry
      model    = 0
    }
    division =
    { id            = { type = 12500 id = 55 }
      name          = "8th IRGC Infantry Division"
      strength      = 100
      type          = motorized
      model         = 1
    }
    division =
    { id            = { type = 12500 id = 56 }
      name          = "25th IRGC Infantry Division"
      strength      = 100
      type          = motorized
      model         = 1
    }
    division =
    { id            = { type = 12500 id = 57 }
      name          = "28th IRGC Infantry Division"
      strength      = 100
      type          = motorized
      model         = 1
    }
  }
# #####################################
# NAVY
# #####################################
navalunit = { id = { type = 12500 id = 200 }
    location = 1091
    base     = 1091
    name     = "Islamic Republic of Iran Navy"
    division = { id = { type = 12500 id = 201 } name = "Alvand" type = destroyer model = 0 }
    division = { id = { type = 12500 id = 202 } name = "Alborz" type = destroyer model = 0 }
    division = { id = { type = 12500 id = 203 } name = "Sabalan" type = destroyer model = 0 }
    division = { id = { type = 12500 id = 206 } name = "1st Transport Fleet" type = transport model = 0 }
    division = { id = { type = 12500 id = 207 } name = "2nd Transport Fleet" type = transport model = 0 }
	}
navalunit = { id = { type = 12500 id = 214 }
    location = 1089
    base     = 1089
    name     = "Submarine Fleet"
    division = { id = { type = 12500 id = 215 } name = "Tareq" type = submarine model = 4 }
    division = { id = { type = 12500 id = 216 } name = "Nooh" type = submarine model = 4 }
    division = { id = { type = 12500 id = 217 } name = "Yunes" type = submarine model = 4 }
	}
# #####################################
# AIR FORCE
# #####################################
airunit = { id = { type = 12500 id = 100 }
	location = 1092
	base     = 1092
	name     = "Eastern Area Command"
	division = { id = { type = 12500 id = 101 } name = "13th Tactical Air Wing" type = interceptor strength = 70 model = 0 }
        division = { id = { type = 12500 id = 102 } name = "14th Tactical Air Wing" type = interceptor strength = 70 model = 1 }
	}
airunit = { id = { type = 12500 id = 103 }
	location = 1090
	base     = 1090
	name     = "Southern Area Command"
	division = { id = { type = 12500 id = 104 } name = "6th Tactical Air Wing" type = multi_role strength = 100 model = 1 }
	division = { id = { type = 12500 id = 105 } name = "9th Tactical Air Wing" type = multi_role strength = 60 model = 1 }
        division = { id = { type = 12500 id = 106 } name = "10th Tactical Air Wing" type = multi_role strength = 10 model = 1 }
	}
airunit = { id = { type = 12500 id = 107 }
	location = 1086
	base     = 1086
	name     = "Western Area Command 1"
        division = { id = { type = 12500 id = 108 } name = "1st Tactical Air Wing" type = interceptor strength = 100 model = 2 }
        division = { id = { type = 12500 id = 109 } name = "5nd Tactical Air Wing" type = interceptor strength = 100 model = 0 }
        division = { id = { type = 12500 id = 110 } name = "7th Tactical Air Wing" type = tactical_bomber strength = 100 model = 2 }
        division = { id = { type = 12500 id = 111 } name = "8th Tactical Air Wing" type = multi_role strength = 100 model = 2 } # iranian f-14 tomcats..
	}
airunit ={ id = { type = 12500 id = 112 }
	location = 1087
	base     = 1087
	name     = "Western Area Command 2"
	division = { id = { type = 12500 id = 113 } name = "2nd Tactical Air Wing" type = interceptor strength = 100 model = 1 }
	division = { id = { type = 12500 id = 114 } name = "3rd Tactical Air Wing" type = multi_role strength = 100 model = 1	}
        division = { id = { type = 12500 id = 115 } name = "4th Tactical Air Wing" type = interceptor strength = 100 model = 1 }
	}
airunit = { id = { type = 12500 id = 116 }
	location = 1085
	base     = 1085
	name     = "Air Transport Command"
        division = { id = { type = 12500 id = 117 } name = "1st Tactical Transport Wing" type = transport_plane strength = 100 model = 0 }
	division = { id = { type = 12500 id = 118 } name = "2nd Tactical Transport Wing" type = transport_plane strength = 100 model = 1 }
	}
# ###################################
# Under Development
# ###################################
division_development =
  { type          = light_armor
    model         = 4
    date          = { day = 14 month = november year = 2003 }
    cost          = 10
    days          = 95
    id            = { type = 12500 id = 63 }
    name          = "11th IRGC Armored Brigade"
  }
}
