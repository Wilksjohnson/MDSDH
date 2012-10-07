
##############################
# Country definition for ISR #
##############################

country =
{ tag                 = ISR
  # Resource Reserves
  nuke                = 20
  energy              = 1000
  metal               = 1000
  rare_materials      = 500
  oil                 = 500
  supplies            = 500
  money               = 100
  manpower            = 10
  capital             = 1008
  transports          = 55
  escorts             = 0
  diplomacy = { 
relation = { tag = USA value = 170 }
relation = { tag = SYR value = -180 }
relation = { tag = PER value = -200 }
relation = { tag = EGY value = -50 }
relation = { tag = SUD value = -150 }
relation = { tag = LBY value = -150 }
relation = { tag = LEB value = -100 }
relation = { tag = U52 value = -100 }
relation = { tag = U91 value = -100 }
relation = { tag = GEO value = 120 }
relation = { tag = IND value = 100 }
relation = { tag = GER value = 100 }
relation = { tag = U18 value = -100 }
relation = { tag = SAU value = -100 }
relation = { tag = JOR value = -100 }
relation = { tag = RUS value = -50 }
  }
  SpyInfo                = {  country = "ISR" NumberOfSpies = 3  } 
   nationalprovinces      = {  1008 1010 1011 1013 1020  } 
   ownedprovinces         = {  1008 1010 1011 1013  } 
   controlledprovinces    = {  1008 1010 1011 1013 1020  } 
  techapps            = { 
					#Industry
					5010 5020 5030 5040 5050 5060 5070 5080 5090
					5110 5120 5130 5140 5150 5160 5170 5180 5190
					5210 5220 5230 5240 5250 5260 5270 5280 5290
					#Army Equip
					2200 2210 2220 2230
					2000 2010
					2050 2060 2070
					2110 2120
					2300 2310 2320 2330
					2400 2410 2420 2430
					2500 2510 2520 2530
					2600 2610 2620 2630
					2700 2710 2720 2730
					2800 2810 2820 2830
					#Army Org
					1000 1010
					1050 1060 1070
					1110 1120
					1500 1510 1520 1530
					1200 1210 1220 1230
					1300 1310 1320 1330
					1400 1410 1420 1430
					1260 1270
					1970 1960
					1900 1910 1920 1930
					1800 1810 1820
					1700 1710 1720
					#Aircraft
					4900 4910 4920
					4800 4810 4820
					4700 4710 4720
					4750 4760 4770
                                        4000 4010 4020 4030
                                        4100 4110 4120 4130
                                        4400 4410 4420
                                        4640 4650 4660
					#Land Docs
					6930
					6010 6030 6040
					6600 6620
					6700 6720
					6100 6110 6120 6140 6150 6160 6170
					6200 6210 6220 6240 6250 6260 6270
					6300 6310 6320 6340 6350 6360 6370
					#Air Docs
					9040 9510 9520 9530 9540
					9050 9060 9070 9090 9100 9110 9120
					9130 9140 9150 9170 9180 9190 9200
					9210 9220 9230 9280
					#Secret Weapons
					7010
					7020 7030 7040
					7180 7190 7200
					7240
					7100 7110
                                        7330 7310 7320
                                        #Navy Techs
                                        3000
                                        3590
                                        3700 3710 3720 3730
                                        3850 3860 3870
                                        #Navy Doctrines
                                        8900 8910 8920
                                        8950 8960
                                        8400 8410 8420
                                        8000 8010 8020
                                        8500 8510
                        }
  policy =
  { date              = { year = 0 month = march day = 0 }
    democratic        = 10
    political_left    = 4
    free_market       = 7
    freedom           = 4
    professional_army = 2
    defense_lobby     = 8
    interventionism   = 8
  }
  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 12800 id = 1 }
    location = 1013
    name     = "Northern Command"
    division =
    { id            = { type = 12800 id = 2 }
      name          = "Northern Command HQ"
      strength      = 100
      type          = hq
      model         = 2
      extra         = sp_rct_artillery
      brigade_model = 3
    }
    division =
    { id            = { type = 12800 id = 3 }
      name          = "36th 'Gaash' Armor Division"
      strength      = 100
      type          = armor
      model         = 16
      extra         = heavy_armor
      brigade_model = 3
    }
    division =
    { id            = { type = 12800 id = 4 }
      name          = "91st 'Galil' Division"
      strength      = 100
      type          = infantry
      model         = 3
    }
  }
  landunit =
  { id       = { type = 12800 id = 5 }
    location = 1008
    name     = "Central Command"
    division =
    { id            = { type = 12800 id = 6 }
      name          = "Central Command HQ"
      strength      = 100
      type          = hq
      model         = 2
      extra         = sp_rct_artillery
      brigade_model = 3
    } 
    division =
    { id            = { type = 12800 id = 7 }
      name          = "162nd 'Ha-Plada' Armor Division"
      strength      = 100
      type          = armor
      model         = 16
    }
    division =
    { id            = { type = 12800 id = 8 }
      name          = "West Bank Division"
      strength      = 100
      type          = motorized
      model         = 3
    }
  }
  landunit =
  { id       = { type = 12800 id = 9 }
    location = 1010
    name     = "Southern Command"
    division =
    { id            = { type = 12800 id = 10 }
      name          = "Southern Command HQ"
      strength      = 100
      type          = hq
      model         = 2
      extra         = sp_rct_artillery
      brigade_model = 3
    }
    division =
    { id            = { type = 12800 id = 11 }
      name          = "366th 'Amud ha-Esh' Armor Division"
      strength      = 100
      type          = armor
      model         = 16
    }
    division =
    { id            = { type = 12800 id = 12 }
      name          = "Gaza Division"
      strength      = 100
      type          = motorized
      model         = 3
    }
    division =
    { id            = { type = 12800 id = 13 }
      name          = "80th 'Edom' Division"
      strength      = 100
      type          = motorized
      model         = 3
    }
  }
  landunit =
  { id       = { type = 12800 id = 14 }
    location = 1008
    name     = "98th 'Ha-Esh' Paratroopers Division"
    division =
    { id            = { type = 12800 id = 15 }
      name          = "35th 'Flying Serpent' Paratroopers Brigade"
      strength      = 100
      type          = paratrooper
      model         = 15
    }
    division =
    { id            = { type = 12800 id = 16 }
      name          = "551st 'Hetzei Ha-Esh' Paratroopers Brigade"
      strength      = 20
      type          = paratrooper
      model         = 14
    }
    division =
    { id            = { type = 12800 id =17 }
      name          = "623rd 'Hod Ha-Hanit' Paratroopers Brigade"
      strength      = 20
      type          = paratrooper
      model         = 14
    }
  }
  # ###################################
  # NAVY
  # ###################################
  navalunit =
  { id       = { type = 12800 id = 304 }
    location = 1011
    base     = 1011
    name     = "7th Flotilla"
    division =
    { id    = { type = 12800 id = 305 }
      name  = "INS Dolphin"
      type  = submarine
      model = 6
    }
    division =
    { id    = { type = 12800 id = 306 }
      name  = "INS Leviathan"
      type  = submarine
      model = 6
    }
    division =
    { id    = { type = 12800 id = 307 }
      name  = "INS Tekumah"
      type  = submarine
      model = 6
    }
  }
  # ####################################
  # AIR FORCE
  # ####################################
  airunit =
  { id       = { type = 12800 id = 200 }
    location = 1011
    base     = 1011
    name     = "Air Force North"
    division =
    { id       = { type = 12800 id = 201 }
      name     = "Wing 1"
      type     = interceptor
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 12800 id = 202 }
      name     = "Wing 4"
      type     = interceptor
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 12800 id = 203 }
      name     = "Wing 6"
      type     = interceptor
      strength = 100
      model    = 3
    }
  }
  airunit =
  { id       = { type = 12800 id = 204 }
    location = 1008
    base     = 1008
    name     = "Air Force South"
    division =
    { id       = { type = 12800 id = 205 }
      name     = "Wing 8"
      type     = multi_role
      strength = 70
      model    = 2
    }
    division =
    { id       = { type = 12800 id = 206 }
      name     = "Wing 25"
      type     = interceptor
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 12800 id = 207 }
      name     = "Wing 28"
      type     = interceptor
      strength = 100
      model    = 3
    }
  }
  airunit =
  { id       = { type = 12800 id = 217 }
    location = 1011
    base     = 1011
    name     = "Israeli Transport Force"
    division =
    { id       = { type = 12800 id = 218 }
      name     = "1st Transport Wing"
      type     = transport_plane
      strength = 100
      model    = 2
    }
    division =
    { id       = { type = 12800 id = 219 }
      name     = "2nd Transport Wing"
      type     = transport_plane
      strength = 100
      model    = 1
    }
  }
}
