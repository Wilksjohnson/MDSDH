
##############################
# Country definition for CRO #
##############################

country =
{ tag                 = CRO
  # Resource Reserves
  energy              = 1000
  metal               = 1000
  rare_materials      = 500
  oil                 = 500
  supplies            = 500
  money               = 50
  manpower            = 7
  transports          = 30
  escorts             = 0
  capital             = 352
  diplomacy           = { }
  SpyInfo                = {  country = "CRO" NumberOfSpies = 3  } 
   nationalprovinces      = {  343 344 345 347 350 351 352 406 356 358  } 
   ownedprovinces         = {  343 344 345 347 350 351 352 406  } 
   controlledprovinces    = {  343 344 345 347 350 351 352 406  } 
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
					5210 5220
                                        #Army Equipment:
                                        2000 2050
                                        2010 2060
                                             2070
                                        2300 2310 2320
                                        2400 2410 2420
                                        2200 2210 2220
                                        2500 2510 2520
                                        2600 2610 2620
                                        2700 2710 2720
                                        2800 2810 2820
                                        #Army Organisation:
                                        1000 1050
                                        1010 1060
                                        1500 1510 1520
                                        1300 1310 1320
                                        1400 1410 1420
                                        1900 1910 1920
                                        1260 1270
                                        1960
                                        #Army Doctrines:
                                        6100 6200
                                        6110 6210
                                        6120 6220
                                        6160 6260
                                        6010
                                        6020
                                        6910
                                        6600
                                        6610
					#Secret Weapons
                                        7330 7310 7320
                                        #Air Force
                                        4000 4010
                                        4700
                                        4750
					#Air Docs
					9020 9510 9520
					9050 9060 9070 9090 9120
                        }
  policy =
  { date              = { year = 0 month = march day = 0 }
    democratic        = 9
    political_left    = 8
    free_market       = 6
    freedom           = 8
    professional_army = 4
    defense_lobby     = 4
    interventionism   = 5
  }
  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 8600 id = 1 }
    location = 352
    name     = "3 Gardijska Brigada 'Kune'"
    division =
    { id            = { type = 8600 id = 2 }
      name          = "3 Gardijska Brigada 'Kune'"
      strength      = 100
      type          = cavalry
      model         = 2
    }
  }
  landunit =
  { id       = { type = 8600 id = 3 }
    location = 352
    name     = "2 Gardijska Brigada 'Gromovi'"
    division =
    { id            = { type = 8600 id = 4 }
      name          = "2 Gardijska Brigada 'Gromovi'"
      strength      = 100
      type          = cavalry
      model         = 1
    }
  }
  landunit =
  { id       = { type = 8600 id = 5 }
    location = 344
    name     = "IV Corps"
    division =
    { id            = { type = 8600 id = 6 }
      name          = "4 Gardijska Brigada 'Pauci'"
      strength      = 100
      type          = mechanized
      model         = 1
    }
    division =
    { id            = { type = 8600 id = 7 }
      name          = "628 Brigada"
      strength      = 100
      type          = mechanized
      model         = 1
    }
  }
  landunit =
  { id       = { type = 8600 id = 8 }
    location = 351
    name     = "1 Gardijska Brigada 'Tigrovi'"
    division =
    { id            = { type = 8600 id = 9 }
      name          = "1 Gardijska Brigada 'Tigrovi'"
      strength      = 100
      type          = cavalry
      model         = 2
    }
  }
 }
