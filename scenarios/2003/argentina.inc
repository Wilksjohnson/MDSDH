
##############################
# Country definition for ARG #
##############################

country =
{ tag                 = ARG
  manpower            = 53
  # Resource Reserves
  energy              = 1000
  metal               = 1000
  rare_materials      = 500
  oil                 = 500
  supplies            = 500
  money               = 40
  capital             = 2050
  transports          = 80
  escorts             = 0
  diplomacy = {
		relation = {  tag = BOL value = 50  } 
		relation = {  tag = BRA value = -10  } 
		relation = {  tag = CHL value = -20  } 
		relation = {  tag = COL value = 10  } 
		relation = {  tag = ENG value = 75  } 
		relation = {  tag = ECU value = 10  } 
		relation = {  tag = GER value = 75  } 
		relation = {  tag = IRE value = 20  } 
		relation = {  tag = ITA value = 30  } 
		relation = {  tag = PAR value = 50  } 
		relation = {  tag = PRU value = 20  } 
		relation = {  tag = URU value = -50  } 
		relation = {  tag = USA value = 75  } 
		relation = {  tag = VEN value = 10  } 
	} 
	SpyInfo                = {  country = "ARG" NumberOfSpies = 6  }
  nationalprovinces   = {  2050 2048 2027 2054 2045 2026 2056 2055 2028 2029 2053 2036 2037 2035 2038 2039 2034 2044 2043 2049  } 
	ownedprovinces      = {  2048 2027 2054 2026 2056 2055 2050 2028 2029 2053 2036 2037 2035 2038 2039 2034 2044 2049  } 
	controlledprovinces = {  2048 2027 2054 2026 2056 2055 2050 2028 2029 2053 2036 2037 2035 2038 2039 2034 2044 2049  } 
  techapps            = {
					#Industry
					5010 5020 5030 5040 5050 5060 5070 5080 5090 # Early CW Industry
					5110 5120 5130 5140 5150 5160 5170 5180 5190 # Late CW Industry
					#Army Equip
					2000 2010
					2300 2310 2320
					2400 2410 
					2200 2210 2220
					2500 2510 2520
					2600 2610 2620
					2700 2710 2720
					2800 2810 2820
					#Army Org
					1000 1010
					1500 1200
					1510 1210
					1980 1960
					1300 1400
					1310 1410
					1800
					1260
					1900 1910
                                                  1600
					#Aircraft
					4570
					4750 4760
					4800 4810
                                        4700 4710
					4600
					4550
                                        4100 4110
                                        4900 4910
					#Land Docs
					6910 6010 6030 6040
  					6600 6610
					6100 6200 6110 6210 6120 6220 6140 6160
                                        6130 6230
					#Air Docs
					9010 9510
					9050 9060 9070 9090 9110
					9450
					#Secret Weapons
					7010 7060
                                        7330
                                        #Navy Techs
                                        3000 3010
                                        3100 3110
                                        3590
                                        3700 3710 37710 3720
                                        3850 3860 3870
                                        #Navy Doctrines
                                        8900 8910 8920
                                        8950 8960 8970
                                        8000 8010
                                        8500 8510
                                        8400 8410
                                        8100 8110
                                        8600 8610
										
                        }
  policy =
  { date              = { year = 0 month = march day = 0 }
    democratic        = 9
    political_left    = 8
    free_market       = 6
    freedom           = 7
    professional_army = 10
    defense_lobby     = 2
    interventionism   = 6
  }
  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 5500 id = 1 }
    location = 2050
    name     = "Estado Mayor General del Ejército"
    division =
    { id       = { type = 5500 id = 2 }
      name     = "JEMGE HQ"
      strength = 100
      type     = hq
      model    = 0
      extra         = heavy_armor
      brigade_model = 1
    }
    division =
    { id       = { type = 5500 id = 3 }
      name     = "1a Brigada Blindada"
      strength = 100
      type     = light_armor
      model    = 1
    }
    division =
    { id       = { type = 5500 id = 4}
      name     = "4a Brigada Paracaidista"
      strength = 100
      type     = paratrooper
      model    = 14
    }
    division =
    { id       = { type = 5500 id = 5 }
      name     = "10a Brigada Mecanizada"
      strength = 100
      type     = cavalry
      model    = 1
    }
  }
  landunit =
  { id       = { type = 5500 id = 6 }
    location = 2049
    name     = "II Cuerpo de Ejército"
    division =
    { id       = { type = 5500 id = 7 }
      name     = "2a Brigada Blindada"
      strength = 100
      type     = light_armor
      model    = 1
    }
    division =
    { id       = { type = 5500 id = 8 }
      name     = "12a Brigada de Monte"  # jungle warfare
      strength = 100
      type     = bergsjaeger
      model    = 12
    }
  }
  landunit =
  { id       = { type = 5500 id = 9 }
    location = 2054
    name     = "III Cuerpo de Ejército"
    division =
    { id       = { type = 5500 id = 10 }
      name     = "5a Brigada de Montaña"
      strength = 100
      type     = bergsjaeger
      model    = 12
    }
    division =
    { id       = { type = 5500 id = 11 }
      name     = "6a Brigada de Montaña"
      strength = 100
      type     = bergsjaeger
      model    = 12
    }
    division =
    { id       = { type = 5500 id = 12 }
      name     = "8a Brigada de Montaña"
      strength = 100
      type     = bergsjaeger
      model    = 12
    }
  }
  landunit =
  { id       = { type = 5500 id = 13 }
    location = 2050
    name     = "V Cuerpo de Ejército"
    division =
    { id       = { type = 5500 id = 14 }
      name     = "9a Brigada Mecanizada"
      strength = 100
      type     = cavalry
      model    = 1
    }
    division =
    { id       = { type = 5500 id = 15 }
      name     = "11a Brigada Mecanizada"
      strength = 100
      type     = cavalry
      model    = 1
    }
  }
  landunit =
  { id       = { type = 5500 id = 16 }
    location = 2050
    name     = "Comando de la Infantería de Marina"
    division =
    { id       = { type = 5500 id = 17 }
      name     = "1a Brigada de Infanteria de Marina"
      strength = 50
      type     = marine
      model    = 11
    }
  }
  # #####################################
  # NAVY
  # #####################################
  navalunit =
  { id       = { type = 5500 id = 200 }
    location = 2050
    base     = 2050
    name     = "Flota de Mar"
    division =
    { id    = { type = 5500 id = 201 }
      name  = "ARA Almirante Brown"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 5500 id = 202 }
      name  = "ARA La Argentina"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 5500 id = 203 }
      name  = "ARA Heroína"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 5500 id = 204 }
      name  = "ARA Sarandí"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 5500 id = 206 }
      name  = "ARA Espora"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 5500 id = 207 }
      name  = "ARA Rosales"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 5500 id = 208 }
      name  = "ARA Spiro"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 5500 id = 209 }
      name  = "ARA Parker"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 5500 id = 210 }
      name  = "ARA Robinson"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 5500 id = 211 }
      name  = "ARA Gómez Roca"
      type  = destroyer
      model = 1
    }
  }
  navalunit =
  { id       = { type = 5500 id = 212 }
    location = 2050
    base     = 2050
    name     = "Comando Naval Anfibio"
    division =
    { id    = { type = 5500 id = 213 }
      name  = "ARA Hércules"
      type  = transport
      model = 2
    }
    division =
    { id    = { type = 5500 id = 214 }
      name  = "1a Escuadrilla de Transporte"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 5500 id = 215 }
      name  = "2a Escuadrilla de Transporte"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 5500 id = 220 }
    location = 2050
    base     = 2050
    name     = "Comando de la Fuerza de Submarinos"
    division =
    { id    = { type = 5500 id = 221 }
      name  = "ARA Santa Cruz"
      type  = submarine
      model = 4
    }
    division =
    { id    = { type = 5500 id = 222 }
      name  = "ARA San Juan"
      type  = submarine
      model = 4
    }
    division =
    { id    = { type = 5500 id = 223 }
      name  = "ARA Salta"
      type  = submarine
      model = 2
    }
  }
  # #####################################
  # AIR FORCE
  # #####################################
  airunit =
  { id       = { type = 5500 id = 100 }
    location = 2050
    base     = 2050
    name     = "Fuerza Aérea Argentina"
    division =
    { id       = { type = 5500 id = 101 }
      name     = "3a Brigada Aérea"
      type     = tactical_bomber
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 5500 id = 102 }
      name     = "5a Brigada Aérea"
      type     = tactical_bomber
      strength = 100
      model    = 1
    }
    division =
    { id       = { type = 5500 id = 103 }
      name     = "6a Brigada Aérea"
      type     = multi_role
      strength = 100
      model    = 1
    }
  }
  airunit =
  { id       = { type = 5500 id = 104 }
    location = 2050
    base     = 2050
    name     = "Brigada Aérea de Transporte"
    division =
    { id       = { type = 5500 id = 105 }
      name     = "1a Brigada Aérea"
      type     = transport_plane
      strength = 100
      model    = 0
    }
  }
}
