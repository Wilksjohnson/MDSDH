
##############################
# Country definition for U08 #
##############################

country =
{ tag                 = U08
  # Resource Reserves
  energy              = 1200
  metal               = 200
  rare_materials      = 200
  oil                 = 200
  supplies            = 1200
  money               = 20
  manpower            = 30
  capital             = 957
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
   SpyInfo                = {  country = "U08" NumberOfSpies = 3  } 
   nationalprovinces      = {  945 957 958 959 } 
   ownedprovinces         = {  945 957 958 959 } 
   controlledprovinces    = {  945 957 958 959 } 
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
    political_left    = 8
    free_market       = 5
    freedom           = 3
    professional_army = 1
    defense_lobby     = 3
    interventionism   = 4
  }
  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 12254 id = 1 }
    location = 957
    name     = "Arm�e de Terre"
    division =
    { id            = { type = 12254 id = 2 }
      name          = "1re Brigade"
      strength      = 100
      type          = mechanized
      model         = 0
    }
  }
}