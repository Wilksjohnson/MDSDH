
##############################
# Country definition for U05 #
##############################

country =
{ tag                 = U05
  # Resource Reserves
  energy              = 1000
  metal               = 1000
  rare_materials      = 500
  oil                 = 500
  supplies            = 500
  money               = 10
  manpower            = 3
  capital             = 2086
  diplomacy           = { }
  SpyInfo                = {  country = "U05" NumberOfSpies = 3  } 
   nationalprovinces      = {  2086  } 
   ownedprovinces         = {  2086  } 
   controlledprovinces    = {  2086  }
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
    democratic        = 4
    political_left    = 5
    free_market       = 7
    freedom           = 4
    professional_army = 3
    defense_lobby     = 3
    interventionism   = 5
  }
}
