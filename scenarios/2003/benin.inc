
##############################
# Country definition for BEN #
##############################

country =
{ tag                 = BEN
  # Resource Reserves
  energy              = 1200
  metal               = 200
  rare_materials      = 200
  oil                 = 200
  supplies            = 200
  money               = 10
  manpower            = 8
  capital             = 951
  diplomacy           = { }
  SpyInfo                = {  country = "BEN" NumberOfSpies = 3  } 
   nationalprovinces      = {  949 951  } 
   ownedprovinces         = {  949 951  } 
   controlledprovinces    = {  949 951  } 
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
                                        2400
                                        2200
                                        2500
                                        2600
                                        2800
                                        #Army Org:
                                        1300
                                        1900
                                        1260
                                        1980
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
    democratic        = 8
    political_left    = 5
    free_market       = 6
    freedom           = 3
    professional_army = 1
    defense_lobby     = 3
    interventionism   = 4
  }
  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 12251 id = 1 }
    location = 951
    name     = "1st Corps"
    division =
    { id            = { type = 12251 id = 2 }
      name          = "1st Infantry Brigade"
      strength      = 100
      type          = mechanized
      model         = 0
    }
  }
}