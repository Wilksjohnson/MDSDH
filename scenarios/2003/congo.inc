
##############################
# Country definition for CON #
##############################

country =
{ tag                 = CON
  # Resource Reserves
  energy              = 2000
  metal               = 2000
  rare_materials      = 2500
  oil                 = 1500
  supplies            = 1500
  money               = 50
  manpower            = 140
  capital             = 899
  diplomacy           = { }
  SpyInfo                = {  country = "CON" NumberOfSpies = 3  } 
   nationalprovinces      = {  894 897 898 899 901 902 903 904 905 906  } 
   ownedprovinces         = {  894 897 898 899 901 902 903 904 905 906  } 
   controlledprovinces    = {  894 897 898 899 901 902 903 904 905 906  }
  techapps            = {
					#Industry
					5010 5020 5030 5040 5050 5060 5070 5080 5090
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
					#Army Org
                                        1000
                                        1010
                                        1500
                                        1300
					1260
					1980
					1900
					#Air Docs
                                        9050
                                        9060
                                        9070
                                        9010
                                        9510
					#Air techs
                                        4700
                                        4750
                                        4640
                                        4570
					#Secret Techs
                                        7330
					#Land Docs
					6910
					6010 6020
					6600 6610
					6100 6110 6120 6160 6170
                        }
  policy =
  { date              = { year = 0 month = march day = 0 }
    democratic        = 2
    political_left    = 6
    free_market       = 4
    freedom           = 3
    professional_army = 1
    defense_lobby     = 6
    interventionism   = 3
  }
  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 9000 id = 1 }
    location = 899
    name     = "1ère Corps"
    division =
    { id       = { type = 9000 id = 3 }
      name     = "1re 'Kamanoyla' Division"
      strength = 100
      type     = motorized
      model    = 0
    }
  }
  landunit =
  { id       = { type = 9000 id = 4 }
    location = 903
    name     = "Gardes Républicaines"
    division =
    { id       = { type = 9000 id = 5 }
      name     = "Gardes Républicaines"
      strength = 100
      type     = infantry
      model    = 0
    }
  }
  landunit =
  { id       = { type = 9000 id = 6 }
    location = 898
    name     = "3e Corps"
    division =
    { id            = { type = 9000 id = 7 }
      name          = "4e Division d'Infanterie"
      strength      = 100
      type          = motorized
      model         = 0
    }
    division =
    { id       = { type = 9000 id = 8 }
      name     = "5e Division d'Infanterie"
      strength = 100
      type     = motorized
      model    = 0
    }
    division =
    { id       = { type = 9000 id = 9 }
      name     = "6e Division d'Infanterie"
      strength = 100
      type     = motorized
      model    = 0
    }
  }
  landunit =
  { id       = { type = 9000 id = 10 }
    location = 899
    name     = "4e Corps"
    division =
    { id            = { type = 9000 id = 11 }
      name          = "1re Brigade de Défense"
      strength      = 100
      type          = garrison
      model         = 7
    }
    division =
    { id            = { type = 9000 id = 12 }
      name          = "2e Brigade de Défense"
      strength      = 100
      type          = garrison
      model         = 7
    }
  }
  landunit =
  { id       = { type = 9000 id = 13 }
    location = 901
    name     = "5e Corps"
    division =
    { id            = { type = 9000 id = 14 }
      name          = "3e Brigade de Défense"
      strength      = 100
      type          = garrison
      model         = 7
    }
    division =
    { id            = { type = 9000 id = 15 }
      name          = "4e Brigade de Défense"
      strength      = 100
      type          = garrison
      model         = 7
    }
  }
  landunit =
  { id       = { type = 9000 id = 16 }
    location = 901
    name     = "6e Corps"
    division =
    { id            = { type = 9000 id = 17 }
      name          = "5e Brigade de Défense"
      strength      = 100
      type          = garrison
      model         = 7
    }
    division =
    { id            = { type = 9000 id = 18 }
      name          = "6e Brigade de Défense"
      strength      = 100
      type          = garrison
      model         = 7
    }
  }
  # ####################################
  # AIR FORCE
  # ####################################
  airunit =
  { id       = { type = 9000 id = 200 }
    location = 899
    base     = 899
    name     = "1re Escadrille"
    division =
    { id       = { type = 9000 id = 201 }
      name     = "1re Escadron"
      type     = tactical_bomber
      strength = 75
      model    = 0
    }
  }
}
