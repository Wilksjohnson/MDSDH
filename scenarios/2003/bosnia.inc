
##############################
# Country definition for BOS #
##############################

country =
{ tag                 = BOS
  # Resource Reserves
  energy              = 1000
  metal               = 1000
  rare_materials      = 500
  oil                 = 500
  supplies            = 500
  money               = 10
  manpower            = 8
  capital             = 355
  diplomacy = 
   {  relation = {  tag = BEL value = 200  } 
     relation = {  tag = DEN value = 100  } 
     relation = {  tag = FIN value = 100  } 
     relation = {  tag = FRA value = 120  } 
     relation = {  tag = GER value = -50  } 
     relation = {  tag = HOL value = 150  } 
     relation = {  tag = IRE value = 75  } 
     relation = {  tag = NOR value = 100  } 
     relation = {  tag = SWE value = 100  } 
    } 
   SpyInfo                = {  country = "BOS" NumberOfSpies = 3  } 
   nationalprovinces      = {  353 354 355 356 357 358  } 
   ownedprovinces         = {  353 354 355 356 357 358  } 
   controlledprovinces    = {  353 354 355 356 357 358  }
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
                                        1400 1410
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
    democratic        = 5
    political_left    = 4
    free_market       = 4
    freedom           = 5
    professional_army = 4
    defense_lobby     = 6
    interventionism   = 5
  }
  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 6900 id = 1 }
    location = 354
    name     = "4 Pesadijska Brigada"
    division =
    { id            = { type = 6900 id = 2 }
      name          = "4 Pesadijska Brigada"
      strength      = 100
      type          = motorized
      model         = 1
    }
  }
  landunit =
  { id       = { type = 6900 id = 3 }
    location = 353
    name     = "5 Pesadijska Brigada"
    division =
    { id            = { type = 6900 id = 4 }
      name          = "5 Pesadijska Brigada"
      strength      = 100
      type          = mechanized
      model         = 1
    }
  }
  landunit =
  { id       = { type = 6900 id = 5 }
    location = 356
    name     = "6 Pesadijska Brigada"
    division =
    { id            = { type = 6900 id = 6 }
      name          = "6 Pesadijska Brigada"
      strength      = 100
      type          = mechanized
      model         = 1
    }
  }
}
