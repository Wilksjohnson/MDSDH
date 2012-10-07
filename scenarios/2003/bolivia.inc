
##############################
# Country definition for BOL #
##############################

country =
{ tag                 = BOL
  manpower            = 23
  # Resource Reserves
  energy              = 1000
  metal               = 1000
  rare_materials      = 500
  oil                 = 500
  supplies            = 500
  money               = 20
  capital             = 2020
  diplomacy           = { }
   nationalprovinces      = {  2064 2021 2020 2019 2063 2046 2002 2024  } 
   ownedprovinces         = {  2064 2021 2020 2019 2063  } 
   controlledprovinces    = {  2064 2021 2020 2019 2063  } 
  techapps            = { 
					#Industry
					5010 5020 5030 5040 5050 5060 5070 5080 5090
					#Army Equip
                                        2000 2050
                                        2010 2060
                                        2300 2310
                                        2400 2410
                                        2200 2210
                                        2500 2510
                                        2600 2610
                                        2700 2710
                                        2800 2810
					#Army Org
					1260
					1960
                                        1500 1510
                                        1300 1310
                                        1900 1910
                                        1000 1050
                                        1010 1060
					#Land Docs
					6100 6110 6120 6910 6600 6610
					6010 6020
					#Air Docs
                                        9050
                                        9060
                                        9070
                                        9010
                                        9510
					#Air Force
                                        4570
                                        4750
                                        4700
                                        4640

                        }
  policy =
  { date              = { year = 0 month = march day = 0 }
    democratic        = 9
    political_left    = 5
    free_market       = 7
    freedom           = 7
    professional_army = 5
    defense_lobby     = 3
    interventionism   = 4
  }
  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 6800 id = 1 }
    location = 2020
    name     = "Región Militar no.1"
    division =
    { id            = { type = 6800 id = 2 }
      name          = "1a División del Ejército"
      strength      = 30
      type          = motorized
      model         = 1      
    }
  }
  landunit =
  { id       = { type = 6800 id = 3 }
    location = 2021
    name     = "Región Militar no.2"
    division =
    { id            = { type = 6800 id = 4 }
      name          = "2a División del Ejército"
      strength      = 30
      type          = motorized
      model         = 1      
    }
    division =
    { id            = { type = 6800 id = 5 }
      name          = "10a División del Ejército"
      strength      = 30
      type          = motorized
      model         = 1      
    }
  }
  landunit =
  { id       = { type = 6800 id = 6 }
    location = 2021
    name     = "Región Militar no.3"
    division =
    { id            = { type = 6800 id = 7 }
      name          = "3a División del Ejército"
      strength      = 30
      type          = motorized
      model         = 1      
    }
    division =
    { id            = { type = 6800 id = 8 }
      name          = "4a División del Ejército"
      strength      = 30
      type          = motorized
      model         = 1      
    }
  }
   landunit =
  { id       = { type = 6800 id = 9 }
    location = 2021
    name     = "Región Militar no.4"
    division =
    { id            = { type = 6800 id = 10 }
      name          = "7a División del Ejército"
      strength      = 30
      type          = motorized
      model         = 1      
    }
  }
   landunit =
  { id       = { type = 6800 id = 11 }
    location = 2019
    name     = "Región Militar no.5"
    division =
    { id            = { type = 6800 id = 12 }
      name          = "6a División del Ejército"
      strength      = 30
      type          = motorized
      model         = 1      
		}
	}
    landunit =
  { id       = { type = 6800 id = 13 }
    location = 2063
    name     = "Región Militar no.6"
    division =
    { id            = { type = 6800 id = 14 }
      name          = "7a División del Ejército"
      strength      = 30
      type          = motorized
      model         = 1      
    }
     division =
    { id            = { type = 6800 id = 15 }
      name          = "8a División del Ejército"
      strength      = 30
      type          = motorized
      model         = 1      
    }
  }
}
