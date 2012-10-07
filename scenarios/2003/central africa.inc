
##############################
# Country definition for U82 #
##############################

country =
{ tag                 = U82
  control             = FRA
  puppet              = FRA
  # Resource Reserves
  energy              = 500
  metal               = 200
  rare_materials      = 200
  oil                 = 200
  supplies            = 500
  money               = 10
  manpower            = 20
  capital             = 926
  diplomacy           = { }
  SpyInfo                = {  country = "U82" NumberOfSpies = 3  } 
   nationalprovinces      = {  919 923 926 927  } 
   ownedprovinces         = {  919 923 926 927  } 
   controlledprovinces    = {  919 923 926 927  }
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
    democratic        = 5
    political_left    = 5
    free_market       = 5
    freedom           = 3
    professional_army = 1
    defense_lobby     = 2
    interventionism   = 1
  }
}
