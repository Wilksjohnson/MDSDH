
##############################
# Country definition for CAM #
##############################

country =
{ tag                 = CAM
  # Resource Reserves
  energy              = 300
  metal               = 150
  rare_materials      = 75
  oil                 = 500
  supplies            = 500
  money               = 10
  manpower            = 0
  capital             = 909
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
   SpyInfo                = {  country = "CAM" NumberOfSpies = 3  } 
   nationalprovinces      = {  909 910 911 925 928 933 916 } 
   ownedprovinces         = {  909 910 911 925 928 933  } 
   controlledprovinces    = {  909 910 911 925 928 933  } 
  techapps            = {
                                        #Industry:
                                        5010
                                        5020
                                        5030
                                        5040
                                        5050
                                        5070
                                        5090
                                        #Army Equip:
                                        2400 2410
                                        2200 2210
                                        2500 2510
                                        2600 2610
                                        2800 2810
                                        #Army Org:
                                        1300 1310
                                        1900 1910
                                        1260
                                        1970
                                        #Army Doc:
                                        6100
                                        6110
                                        6160
                                        6010
                                        6020
                                        6600
                                        6610
                                        6910
                        }
  policy =
  { date              = { year = 0 month = march day = 0 }
    democratic        = 4
    political_left    = 5
    free_market       = 6
    freedom           = 3
    professional_army = 1
    defense_lobby     = 2
    interventionism   = 4
  }
  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 13500 id = 1 }
    location = 909
    name     = "Cameroon National Army"
    division =
    { id            = { type = 13500 id = 2 }
      name          = "1st Brigade"
      strength      = 100
      type          = mechanized
      model         = 1
    }
    division =
    { id            = { type = 13500 id = 3 }
      name          = "2nd Brigade"
      strength      = 100
      type          = mechanized
      model         = 1
    }
    division =
    { id            = { type = 13500 id = 4 }
      name          = "3rd Brigade"
      strength      = 100
      type          = mechanized
      model         = 1
    }
  }
}
