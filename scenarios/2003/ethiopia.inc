
##############################
# Country definition for ETH #
##############################

country =
{ tag                 = ETH
  # Resource Reserves
  energy              = 1000
  metal               = 1000
  rare_materials      = 500
  oil                 = 500
  supplies            = 500
  money               = 60
  manpower            = 90
  capital             = 825
  diplomacy           = { }
   nationalprovinces      = {  820 819 821 822 823 818 829 825 830 826 831 828 827 815 816 817 824  } 
   ownedprovinces         = {  820 819 821 822 823 818 829 825 830 826 831 828 827 824  } 
   controlledprovinces    = {  820 819 821 822 823 818 829 825 830 826 831 828 827 824  } 
  techapps            = {
					#Industry
					5010 5020 5030 5040 5050 5060 5070 5080 5090
                                        #Army Equip:
                                        2000 2050
                                        2010
                                        2300 2310
                                        2400 2410
                                        2200 2210
                                        2500 2510
                                        2600 2610
                                        2700 2710
                                        2800 2810
					#Army Org
                                        1000 1050
                                        1010
                                        1500 1510
                                        1200 1210
                                        1300 1310
                                        1400 1410
					1260
					1970 1960
					1900 1910
					#Air Docs
                                        9050
                                        9060
                                        9070
                                        9010
                                        9510
					#Air techs
                                        4700 4710
                                        4750 4760
                                        4640 4650
                                        4100 4110 4120
                                        4000 4010
                                        4400 4410
                                        4550
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
    democratic        = 6
    political_left    = 5
    free_market       = 6
    freedom           = 4
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 5
  }
  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 26000 id = 1 }
    location = 825
    name     = "First Revolutionary Army"
    division =
    { id            = { type = 26000 id = 2 }
      name          = "1st Infantry Division"
      strength      = 100
      type          = motorized
      model         = 0
    }
    division =
    { id            = { type = 26000 id = 3 }
      name          = "3rd Mechanized Division"
      strength      = 100
      type          = infantry
      model         = 0
      extra         = heavy_armor
      brigade_model = 0
    }
    division =
    { id            = { type = 26000 id = 4 }
      name          = "1st Armored Division"
      strength      = 100
      type          = armor
      model         = 7
      extra         = heavy_armor
      brigade_model = 1
    }
    division =
    { id            = { type = 26000 id = 5 }
      name          = "4th Infantry Division"
      strength      = 100
      type          = motorized
      model         = 0
    }
    division =
    { id            = { type = 26000 id = 6 }
      name          = "5th Infantry Division"
      strength      = 100
      type          = motorized
      model         = 0
    }
  }
  landunit =
  { id       = { type = 26000 id = 7 }
    location = 829
    name     = "Second Revolutionary Army"
    division =
    { id            = { type = 26000 id = 8 }
      name          = "1st Ethiopian Army HQ"
      strength      = 100
      type          = hq
      model         = 0
    }
    division =
    { id            = { type = 26000 id = 9 }
      name          = "8th Infantry Division"
      strength      = 100
      type          = motorized
      model         = 0
    }
    division =
    { id            = { type = 26000 id = 10 }
      name          = "9th Infantry Division"
      strength      = 100
      type          = motorized
      model         = 0
    }
    division =
    { id            = { type = 26000 id = 11 }
      name          = "18th Infantry Division"
      strength      = 100
      type          = motorized
      model         = 0
    }
  }
  landunit =
  { id       = { type = 26000 id = 12 }
    location = 822
    name     = "Fifth Revolutionary Army"
    division =
    { id            = { type = 26000 id = 13 }
      name          = "21st Infantry Division"
      strength      = 100
      type          = motorized
      model         = 0
    }
    division =
    { id            = { type = 26000 id = 14 }
      name          = "6th Infantry Division"
      strength      = 100
      type          = motorized
      model         = 0
    }
    division =
    { id            = { type = 26000 id = 15 }
      name          = "7th Infantry Division"
      strength      = 100
      type          = motorized
      model         = 0
    }
  }
  landunit =
  { id       = { type = 26000 id = 16 }
    location = 824
    name     = "Third Revolutionary Army"
    division =
    { id            = { type = 26000 id = 17 }
      name          = "32nd Infantry Division"
      strength      = 100
      type          = motorized
      model         = 0
    }
    division =
    { id            = { type = 26000 id = 18 }
      name          = "29th Infantry Division"
      strength      = 100
      type          = motorized
      model         = 0
    }
    division =
    { id            = { type = 26000 id = 19 }
      name          = "22nd Infantry Division"
      strength      = 100
      type          = motorized
      model         = 0
    }
  }
  landunit =
  { id       = { type = 26000 id = 20 }
    location = 825
    name     = "Fourth Revolutionary Army"
    division =
    { id            = { type = 26000 id = 21 }
      name          = "33rd Infantry Division"
      strength      = 100
      type          = motorized
      model         = 0
    }
    division =
    { id            = { type = 26000 id = 22 }
      name          = "25th Infantry Division"
      strength      = 100
      type          = motorized
      model         = 0
    }
    division =
    { id            = { type = 26000 id = 23 }
      name          = "27th Infantry Division"
      strength      = 100
      type          = motorized
      model         = 0
    }
  }
  # ####################################
  # AIR FORCE
  # ####################################
  airunit =
  { id       = { type = 26000 id = 200 }
    location = 825
    base     = 825
    name     = "1st Air Force Wing"
    division =
    { id       = { type = 26000 id = 201 }
      name     = "4th Squadron"
      type     = multi_role
      strength = 100
      model    = 2
    }
    division =
    { id       = { type = 26000 id = 202 }
      name     = "5th Squadron"
      type     = multi_role
      strength = 50
      model    = 1
    }
    division =
    { id       = { type = 26000 id = 203 }
      name     = "1st Squadron"
      type     = interceptor
      strength = 100
      model    = 1
    }
  }
}