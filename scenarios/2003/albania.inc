
##############################
# Country definition for ALB #
##############################
        
country =
{ tag                 = ALB
  manpower            = 7
  # Resource Reserves
  energy              = 1000
  metal               = 1000
  rare_materials      = 500
  oil                 = 500
  supplies            = 500
  money               = 10
  capital             = 359
  transports          = 25
  escorts             = 0
  diplomacy           = { }
  nationalprovinces      = {  359 362 329 361 360 334  } 
   ownedprovinces         = {  359 362 361 360  } 
   controlledprovinces    = {  359 362 361 360  }
  techapps            = { 
					#Army Org
                                        1000
                                        1010
                                        1500
                                        1300
					1260
					1960
					1900
                                        #Army Equip:
                                        2000
                                        2010
                                        2300
                                        2400
                                        2200 2210
                                        2500
                                        2600
                                        2700
                                        2800 2810
					# Early CW Industry
					5010 5020 5030 5040 5050 5060 5070 5080 5090
					# Land Doctrines
					6010 6020 6100 6110 6160 6600 6610 6910
					# Air Docs
					9510 9010 9050 9060 9070
                                        #Navy Techs
                                        3000
                                        3590
                                        3850
                                        #Navy Doctrines
                                        8900
                                        8950
                                        8000
                                        8500
					
                        }
  policy =
  { date              = { year = 0 month = march day = 0 }
    democratic        = 8
    political_left    = 9
    free_market       = 6
    freedom           = 6
    professional_army = 8
    defense_lobby     = 2
    interventionism   = 4
  }
  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 5100 id = 1 }
    location = 360
    name     = "Forcat e Armatosura të Republikës së Shqipërisë"
    division =
    { id       = { type = 5100 id = 2 }
      name     = "Brigada e Reagimit të Shpejtë"
      strength = 70
      type     = cavalry
      model    = 1
    }
  }
  # ####################################
  # AIR FORCE
  # ####################################
  airunit =
  { id       = { type = 5100 id = 200 }
    location = 359
    base     = 359
    name     = "Forcat Ajrore Shqiptare"
    division =
    { id       = { type = 5100 id = 201 }
      name     = "4010 Regjimente"
      type     = multi_role
      strength = 30
      model    = 1
    }
    division =
    { id       = { type = 5100 id = 202 }
      name     = "4020 Regjimente"
      type     = interceptor
      strength = 60
      model    = 0
    }
  }
}
