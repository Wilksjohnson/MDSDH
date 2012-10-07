
##############################
# Country definition for U06 #
##############################
          
country =
{ tag                 = U06
  # Resource Reserves
  energy              = 1000
  metal               = 1000
  rare_materials      = 500
  oil                 = 500
  supplies            = 500
  money               = 10
  manpower            = 9
  capital             = 870
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
   SpyInfo                = {  country = "U06" NumberOfSpies = 3  } 
   nationalprovinces      = {  869 870 871  } 
   ownedprovinces         = {  869 870 871  } 
   controlledprovinces    = {  869 870 871  }
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
                                        1970
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
    democratic        = 9
    political_left    = 8
    free_market       = 7
    freedom           = 3
    professional_army = 1
    defense_lobby     = 4
    interventionism   = 7
  }
  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 12253 id = 1 }
    location = 870
    name     = "Botswana Ground Force"
    division =
    { id            = { type = 12253 id = 2 }
      name          = "1st Armoured Brigade"
      strength      = 100
      type          = light_armor
      model         = 0
    }
    division =
    { id            = { type = 12253 id = 3 }
      name          = "1st Infantry Brigade"
      strength      = 100
      type          = cavalry
      model         = 1
    }
    division =
    { id            = { type = 12253 id = 4 }
      name          = "2nd Infantry Brigade"
      strength      = 100
      type          = mechanized
      model         = 1
    }
    division =
    { id            = { type = 12253 id = 5 }
      name          = "3rd Infantry Brigade"
      strength      = 100
      type          = mechanized
      model         = 1
    }
  }
  # ####################################
  # AIR FORCE
  # ####################################
  airunit =
  { id       = { type = 12253 id = 100 }
    location = 870
    base     = 870
    name     = "Botswana Defence Force Air Wing"
    division =
    { id       = { type = 12253 id = 101 }
      name     = "1st Air Wing"
      type     = interceptor
      strength = 20
      model    = 1
    }
  }
}