
##############################
# Country definition for IRE #
##############################

country =
{ tag                 = IRE
  manpower            = 8
  regular_id          = U72
  # Resource Reserves
  energy              = 1000
  metal               = 1000
  rare_materials      = 500
  oil                 = 500
  supplies            = 500
  money               = 50
  capital             = 34
  transports          = 39
  escorts             = 0
  diplomacy           = { }
  SpyInfo                = {  country = "IRE" NumberOfSpies = 5  } 
   nationalprovinces      = {  33 32 31 30 34 35 36  } 
   ownedprovinces         = {  33 32 31 30 34  } 
   controlledprovinces    = {  33 32 31 30 34  }
  techapps            = {
                                        #Industry:
                                        5010 5110
                                        5020 5120
                                        5030 5130
                                        5040 5140
                                        5050 5150
                                        5060 5160
                                        5070 5170
                                        5080 5180
                                        5090 5190
                                       #Army Equip:
                                        2300 2310 2320
                                        2200 2210 2220
                                        2400 2410 2420
                                        2500 2510 2520
                                        2600 2610 2620
                                        2700 2710 
                                        2800 2810 2820
					#Army Org
                                        1500 1510 1520
                                        1300 1310 1320
					1260 1270
					1990
					1900 1910 1920
					#Air Docs
                                        9050
                                        9060
                                        9070
                                        9010
                                        9510
					#Air techs
                                        4700 4800
                                        4750
					#Secret Techs
                                        7330 7310 7320
					#Land Docs
					6930
					6010 6020
					6600 6610
					6100 6160
					6200 6260
                                        6110 6210
                                        6120 6220
					#Naval Docs
                                        8900 8910
                                        8950 8960
                        }
  policy =
  { date              = { year = 0 month = march day = 0 }
    democratic        = 10
    political_left    = 3
    free_market       = 8
    freedom           = 9
    professional_army = 10
    defense_lobby     = 1
    interventionism   = 5
  }
  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 12700 id = 1 }
    location = 31
    name     = "Southern Brigade"
    division =
    { id            = { type = 12700 id = 2 }
      name          = "1 Southern Brigade"
      strength      = 100
      type          = mechanized
      model         = 1
		}
	}
   landunit =
  { id       = { type = 12700 id = 3 }
    location = 34
    name     = "Eastern Brigade"
    division =
    { id            = { type = 12700 id = 4 }
      name          = "2 Eastern Brigade"
      strength      = 100
      type          = mechanized
      model         = 1
    }
	}
   landunit =
  { id       = { type = 12700 id = 5 }
    location = 32
    name     = "Western Brigade"
    division =
    { id            = { type = 12700 id = 6 }
      name          = "4 Western Brigade"
      strength      = 100
      type          = mechanized
      model         = 1
    }
  }
}
