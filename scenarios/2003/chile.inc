
##############################
# Country definition for CHL #
##############################

country =
{ tag                 = CHL
  # Resource Reserves
  energy              = 1000
  metal               = 1000
  rare_materials      = 500
  oil                 = 500
  supplies            = 500
  money               = 40
  capital             = 2023
  manpower            = 31
  transports          = 47
  escorts             = 0
  diplomacy           = { }
   nationalprovinces      = {  2025 2022 2023 2032 2031 2024 2030 2043 } 
   ownedprovinces         = {  2031 2032 2023 2022 2025 2024 2030 2043  } 
   controlledprovinces    = {  2031 2032 2023 2022 2025 2024 2030 2043  } 
  techapps            = { 
					#Industry
					5010 5020 5030 5040 5050 5060 5070 5080 5090
					5110 5120 5130 5140 5150 5160 5170 5180 5190
					#Army Equip
                                        2000 2050 2110
                                        2010 2060 2120
                                             2070
                                        2300 2310 2320
                                        2400 2410 2420
                                        2500 2510 2520
                                        2200 2210 2220
                                        2600 2610 2620
                                        2700 2710 2720
                                        2800 2810 2820
					#Army Org
                                        1000 1050 1110
                                        1010 1060
                                             1070
                                        1500 1510 1520
                                        1300 1310 1320
                                        1400 1410 1420
                                        1900 1910 1920
                                        1260 1270
                                        1960 1970
					#Aircraft
					4570
                                        4000 4010
                                        4640 4650
                                        4400 4410
					4700
					4750
					4800
					4900
					#Land Docs
					6010 6020 6910 6920 6930 6600 6620
					6100 6110 6120 6160 6170
                                        6200 6210 6220 6260
					#Air Docs
					9020 9520
					9050 9060 9070
					#Secret Weapons
					7010 7060 7070
					7180
                                        #Navy Techs
                                        3000 3010
                                        3100
                                        3590
                                        3700 3710
                                        3850 3860
                                        #Navy Doctrines
                                        8900 8910
                                        8950 8960
                                        8400 8410
                                        8000 8010
                                        8500 8510
                        }
  policy =
  { date              = { year = 0 month = march day = 0 }
    democratic        = 9
    political_left    = 4
    free_market       = 7
    freedom           = 9
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 5
  }
  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 8200 id = 1 }
    location = 2025
    name     = "I División de Ejército"
    division =
    { id       = { type = 8200 id = 2 }
      name     = "I División de Ejército"
      strength = 50
      type     = armor
      model    = 12
    }
  }
  landunit =
  { id       = { type = 8200 id = 3 }
    location = 2023
    name     = "II División Motorizada"
    division =
    { id       = { type = 8200 id = 4 }
      name     = "II División Motorizada"
      strength = 80
      type     = motorized
      model    = 1
    }
  }
  landunit =
  { id       = { type = 8200 id = 5 }
    location = 2024
    name     = "Brigada de Operaciones Especiales 'Lautaro'"
    division =
    { experience    = 5
      id            = { type = 8200 id = 7 }
      name          = "Brigada de Operaciones Especiales 'Lautaro'"
      strength      = 100
      type          = bergsjaeger
      model         = 12
      extra         = engineer
      brigade_model = 0
    }
  }
  landunit =
  { id       = { type = 8200 id = 8 }
    location = 2031
    name     = "III División de Montaña"
    division =
    { id       = { type = 8200 id = 9 }
      name     = "III División de Montaña"
      strength = 80
      type     = motorized
      model    = 1
    }
  }
  landunit =
  { id       = { type = 8200 id = 10 }
    location = 2031
    name     = "IV División de Ejército"
    division =
    { id       = { type = 8200 id = 11 }
      name     = "IV División de Ejército"
      strength = 20
      type     = motorized
      model    = 1
    }
  }
  landunit =
  { id       = { type = 8200 id = 12 }
    location = 2030
    name     = "V División de Ejército"
    division =
    { id       = { type = 8200 id = 13 }
      name     = "V División de Ejército"
      strength = 40
      type     = infantry
      model    = 1
    }
  }
  landunit =
  { id       = { type = 8200 id = 14 }
    location = 2024
    name     = "VI División de Ejército"
    division =
    { id       = { type = 8200 id = 15 }
      name     = "VI División de Ejército"
      strength = 40
      type     = infantry
      model    = 1
    }
  }
  # #####################################
  # NAVY
  # #####################################
  navalunit =
  { id       = { type = 8200 id = 200 }
    location = 2023
    base     = 2023
    name     = "Armada de Chile"
    division =
    { id    = { type = 8200 id = 201 }
      name  = "Blanco Encalada"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 8200 id = 202 }
      name  = "Almirante Cochrane"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 8200 id = 203 }
      name  = "Almirante Condell"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 8200 id = 204 }
      name  = "Almirante Lynch"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 8200 id = 205 }
      name  = "Ministro Zenteno"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 8200 id = 206 }
      name  = "1a Flotilla de Transporte Naval"
      type  = transport
      model = 0
    }
    division =
    { id    = { type = 8200 id = 207 }
      name  = "2a Flotilla de Transporte Naval"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 8200 id = 209 }
    location = 2023
    base     = 2023
    name     = "Submarine Fleet"
    division =
    { id    = { type = 8200 id = 210 }
      name  = "Comandante Thomson"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 8200 id = 211 }
      name  = "Capitán Simpson"
      type  = submarine
      model = 2
    }
    division =
    { id    = { type = 8200 id = 212 }
      name  = "O'Brien"
      type  = submarine
      model = 0
    }
  }
  # #####################################
  # AIR FORCE
  # #####################################
  airunit =
  { id       = { type = 8200 id = 100 }
    location = 2023
    base     = 2023
    name     = "Fuerza Aérea de Chile"
    division =
    { id       = { type = 8200 id = 101 }
      name     = "II Brigada Aérea"
      type     = transport_plane
      strength = 20
      model    = 0
    }
    division =
    { id       = { type = 8200 id = 103 }
      name     = "IV Brigada Aérea"
      type     = interceptor
      strength = 30
      model    = 1
    }
    division =
    { id       = { type = 8200 id = 104 }
      name     = "V Brigada Aérea"
      type     = interceptor
      strength = 30
      model    = 1
    }
  }
}
