
##############################
# Country definition for U26 #
##############################

country =
{ tag                 = U26
  # Resource Reserves
  energy              = 1000
  metal               = 1000
  rare_materials      = 500
  oil                 = 500
  supplies            = 500
  money               = 10
  manpower            = 4
  capital             = 333
  diplomacy           = { }
  SpyInfo                = {  country = "U26" NumberOfSpies = 3  } 
   nationalprovinces      = {  328 333 334  } 
   ownedprovinces         = {  328 333 334  } 
   controlledprovinces    = {  328 333 334  }
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
                                        #Army Equipment:
                                        2400 2410
                                        2200 2210 2220
                                        2500 2510
                                        2600 2610
                                        2700 2710
                                        2800 2810
                                        #Army Organisation:
                                        1300 1310
                                        1900 1910
                                        1260 1270
                                        1960
                                        #Army Doctrines:
                                        6100 6200
                                        6110 6210
                                        6160 6260
                                        6010
                                        6020
                                        6910
                                        6600
                                        6610
                        }
  policy =
  { date              = { year = 0 month = march day = 0 }
    democratic        = 6
    political_left    = 8
    free_market       = 6
    freedom           = 6
    professional_army = 7
    defense_lobby     = 3
    interventionism   = 5
  }
  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 10700 id = 1 }
    location = 333
    name     = "Rapid Reaction Force"
    division =
    { id            = { type = 10700 id = 2 }
      name          = "1st Brigade"
      strength      = 100
      type          = cavalry
      model         = 1
    }
    division =
    { id            = { type = 10700 id = 3 }
      name          = "2nd Brigade"
      strength      = 100
      type          = cavalry
      model         = 1
    }
  }
}
