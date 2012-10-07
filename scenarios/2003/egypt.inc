
##############################
# Country definition for EGY #
##############################

country =
{ tag                 = EGY
  # Resource Reserves
  energy              = 1000
  metal               = 1000
  rare_materials      = 500
  oil                 = 500
  supplies            = 500
  money               = 70
  manpower            = 95
  transports          = 77
  escorts             = 0
  capital             = 787
  diplomacy           = { }
  SpyInfo                = {   country = "EGY" NumberOfSpies = 3   }  
          
    nationalprovinces      = {   790 780 785 799 784 783 778 789 792 788 787 786 791 796 800 801 1009 1004 1005 802 1006 1007 793 794 797 795 798 781 782 779 900 
  }  
    ownedprovinces         = {   790 780 785 799 784 783 778 789 792 788 787 786 791 796 800 801 1004 1005 1006 1007 793 794 797 795 798 802 781 782 779 900 
  }  
    controlledprovinces    = {   790 780 785 799 784 783 778 789 792 788 787 786 791 796 800 801 1004 1005 1006 1007 793 794 797 795 798 802 781 782 779 900 
  }
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
                                        2000 2050 2110
                                        2010
                                        2300 2310 2320
                                        2400 2410 2420
                                        2200 2210 2220
                                        2500 2510 2520
                                        2600 2610 2620
                                        2700 2710 2720
                                        2800 2810 2820
                                        #Army Organisation:
                                        1000 1050 1110
                                        1010
                                        1500 1510 1520
                                        1200 1210 1220
                                        1300 1310 1320
                                        1400 1410 1420
                                        1700
                                        1800 1810
                                        1900 1910 1920
                                        1260 1270
                                        1970
                                        #Army Doctrines:
                                        6100 6200
                                        6110 6210
                                        6120 6220
                                        6140
                                        6150
                                        6160 6260
                                        6170
                                        6010
                                        6020
                                        6910
                                        6600
                                        6620
                                        #Air Force:
                                        4000 4010 4020 4030
                                        4100 4110
                                        4400 4410
                                        4640 4650
                                        4700 4710 4720
                                        4750 4760 4770
                                        4800 4810
                                        4900 4910
                                        #Air Docs:
                                        9050 9130
                                        9060 9140
                                        9070 9150
                                        9090 9170
                                        9100
                                        9110
                                        9120
                                        9010
                                        9510
                                        #Navy Techs
                                        3000 3010
                                        3590
                                        3700
                                        3850 3860
                                        #Navy Doctrines
                                        8900 8910
                                        8950 8960
                                        8400 8410
                                        8000 8010
                                        8500 8510
                                        #Secret Techs
                                        7330
                                        7310

                        }
  policy =
  { date              = { year = 0 month = march day = 0 }
    democratic        = 2
    political_left    = 5
    free_market       = 6
    freedom           = 2
    professional_army = 3
    defense_lobby     = 6
    interventionism   = 7
  }
  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 9600 id = 1 }
    location = 788
    name     = "1st Field Army"
    division =
    { id            = { type = 9600 id = 2 }
      name          = "1st Field Army HQ"
      strength      = 100
      type          = hq
      model         = 1
    }
  }
  landunit =
  { id       = { type = 9600 id = 3 }
    location = 787
    name     = "1st Corps - 1st Army"
    division =
    { id            = { type = 9600 id = 4 }
      name          = "Republican Guard Armored Division"
      strength      = 100
      type          = armor
      model         = 16
    }
    division =
    { id            = { type = 9600 id = 5 }
      name          = "24th Mechanized Brigade"
      strength      = 100
      type          = cavalry
      model         = 1
    }
  }
  landunit =
  { id       = { type = 9600 id = 6 }
    location = 789
    name     = "2nd Corps - 1st Army"
    division =
    { id            = { type = 9600 id = 7 }
      name          = "6th Mechanized Division"
      strength      = 100
      type          = infantry
      model         = 1
    }
    division =
    { id            = { type = 9600 id = 8 }
      name          = "18th Armored Brigade"
      strength      = 100
      type          = light_armor
      model         = 4
    }
    division =
    { id            = { type = 9600 id = 9 }
      name          = "218th Infantry Brigade"
      strength      = 100
      type          = mechanized
      model         = 1
    }
  }
  landunit =
  { id       = { type = 9600 id = 10 }
    location = 794
    name     = "3rd Corps - 1st Army"
    division =
    { id            = { type = 9600 id = 11 }
      name          = "8th Mechanized Division"
      strength      = 100
      type          = infantry
      model         = 1
    }
    division =
    { id            = { type = 9600 id = 12 }
      name          = "36th Armored Brigade"
      strength      = 100
      type          = light_armor
      model         = 5
    }
    division =
    { id       = { type = 9600 id = 13 }
      name     = "222nd Airmobile Brigade"
      strength = 100
      type     = militia
      model    = 1
    }
  }
  landunit =
  { id       = { type = 9600 id = 14 }
    location = 791
    name     = "2nd Field Army"
    division =
    { id            = { type = 9600 id = 15 }
      name          = "2nd Field Army HQ"
      strength      = 100
      type          = hq
      model         = 0
    }
  }
  landunit =
  { id       = { type = 9600 id = 16 }
    location = 791
    name     = "1st Corps - 2nd Army"
    division =
    { id            = { type = 9600 id = 17 }
      name          = "2nd Armored Division"
      strength      = 100
      type          = armor
      model         = 15
    }
    division =
    { id            = { type = 9600 id = 18 }
      name          = "7th Mechanized Division"
      strength      = 100
      type          = infantry
      model         = 1
    }
    division =
    { id       = { type = 9600 id = 19 }
      name     = "412th Airborne Brigade"
      strength = 100
      type     = paratrooper
      model    = 14
    }
  }
  landunit =
  { id       = { type = 9600 id = 20 }
    location = 791
    name     = "2nd Corps - 2nd Army"
    division =
    { id            = { type = 9600 id = 21 }
      name          = "4th Armored Division"
      strength      = 100
      type          = armor
      model         = 13
    }
    division =
    { id            = { type = 9600 id = 22 }
      name          = "17th Mechanized Division"
      strength      = 100
      type          = infantry
      model         = 1
    }
  }
  landunit =
  { id       = { type = 9600 id = 23 }
    location = 786
    name     = "3rd Corps - 2nd Army"
    division =
    { id            = { type = 9600 id = 24 }
      name          = "7th Armored Division"
      strength      = 100
      type          = armor
      model         = 13
    }
    division =
    { id            = { type = 9600 id = 25 }
      name          = "19th Mechanized Division"
      strength      = 100
      type          = infantry
      model         = 1
    }
    division =
    { id            = { type = 9600 id = 26 }
      name          = "219th Infantry Brigade"
      strength      = 100
      type          = mechanized
      model         = 1
    }
  }
  landunit =
  { id       = { type = 9600 id = 27 }
    location = 900
    name     = "3rd Field Army"
    division =
    { id            = { type = 9600 id = 28 }
      name          = "3rd Field Army HQ"
      strength      = 100
      type          = hq
      model         = 0
    }
  }
  landunit =
  { id       = { type = 9600 id = 29 }
    location = 900
    name     = "1st Corps - 3rd Army"
    division =
    { id            = { type = 9600 id = 30 }
      name          = "9th Armored Division"
      strength      = 100
      type          = armor
      model         = 15
      extra         = heavy_armor
      brigade_model = 2
    }
    division =
    { id            = { type = 9600 id = 31 }
      name          = "23rd Mechanized Division"
      strength      = 100
      type          = infantry
      model         = 1
    }
    division =
    { id            = { type = 9600 id = 32 }
      name          = "94th Mechanized Brigade"
      strength      = 100
      type          = cavalry
      model         = 1
    }
    division =
    { id       = { type = 9600 id = 33 }
      name     = "224th Airmobile Brigade"
      strength = 100
      type     = militia
      model    = 1
    }
  }
  landunit =
  { id       = { type = 9600 id = 34 }
    location = 900
    name     = "2nd Corps - 3rd Army"
    division =
    { id            = { type = 9600 id = 35 }
      name          = "36th Mechanized Division"
      strength      = 100
      type          = infantry
      model         = 1
    }
    division =
    { id            = { type = 9600 id = 36 }
      name          = "44th Armored Brigade"
      strength      = 100
      type          = light_armor
      model         = 1
    }
  }
  landunit =
  { id       = { type = 9600 id = 37 }
    location = 796
    name     = "3rd Corps - 3rd Army"
    division =
    { id            = { type = 9600 id = 38 }
      name          = "16th Mechanized Division"
      strength      = 100
      type          = infantry
      model         = 1
    }
    division =
    { id            = { type = 9600 id = 39 }
      name          = "82nd Armored Brigade"
      strength      = 100
      type          = light_armor
      model         = 1
    }
    division =
    { id            = { type = 9600 id = 40 }
      name          = "110th Mechanized Brigade"
      strength      = 100
      type          = cavalry
      model         = 1
    }
    division =
    { id            = { type = 9600 id = 41 }
      name          = "111th Mechanized Brigade"
      strength      = 100
      type          = cavalry
      model         = 1
    }
  }
  # ###################################
  # NAVY
  # ###################################
  navalunit =
  { id       = { type = 9600 id = 300 }
    location = 789
    base     = 789
    name     = "1st Fleet"
    division =
    { id    = { type = 9600 id = 301 }
      name  = "Mubarak"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 9600 id = 302 }
      name  = "Taba"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 9600 id = 303 }
      name  = "Rasheed"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 9600 id = 304 }
      name  = "El Suez"
      type  = destroyer
      model = 0
    }
  }
  navalunit =
  { id       = { type = 9600 id = 305 }
    location = 789
    base     = 789
    name     = "2nd Fleet"
    division =
    { id    = { type = 9600 id = 306 }
      name  = "Sharm El-Sheik"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 9600 id = 307 }
      name  = "Toushka"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 9600 id = 308 }
      name  = "El Aboukir"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 9600 id = 309 }
      name  = "Najim al Zafir"
      type  = destroyer
      model = 0
    }
  }
  navalunit =
  { id       = { type = 9600 id = 310 }
    location = 789
    base     = 789
    name     = "3rd Fleet"
    division =
    { id    = { type = 9600 id = 311 }
      name  = "Dumyat"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 9600 id = 312 }
      name  = "Al Nasser"
      type  = destroyer
      model = 0
    }
  }
  navalunit =
  { id       = { type = 9600 id = 313 }
    location = 789
    base     = 789
    name     = "Submarine Fleet"
    division =
    { id    = { type = 9600 id = 314 }
      name  = "831"
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 9600 id = 315 }
      name  = "842"
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 9600 id = 316 }
      name  = "852"
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 9600 id = 317 }
      name  = "858"
      type  = submarine
      model = 0
    }
  }
  # ####################################
  # AIR FORCE
  # ####################################
	airunit = { id = { type = 9600 id = 200 }
		location = 787
		base     = 787
		name     = "Air Defence Command"
		division = { id = { type = 9600 id = 202 } name = "104th Fighter Brigade" type = interceptor strength = 100 model = 1 }
		division = { id = { type = 9600 id = 203 } name = "102nd Fighter Brigade" type = interceptor strength = 100 model = 1 }
                division = { id = { type = 9600 id = 201 } name = "282nd Fighter Brigade" type = interceptor strength = 100 model = 3 }
	}
  airunit =
  { id       = { type = 9600 id = 204 }
    location = 787
    base     = 787
    name     = "Tactical Fighter Command"
    division =
    { id       = { type = 9600 id = 205 }
      name     = "222nd Fighter Brigade"
      type     = multi_role
      strength = 100
      model    = 1
    } 
    division =
    { id       = { type = 9600 id = 206 }
      name     = "232nd Fighter Brigade"
      type     = interceptor
      strength = 100
      model    = 2
    }
    division =
    { id       = { type = 9600 id = 207 }
      name     = "236th Fighter Brigade"
      type     = multi_role
      strength = 100
      model    = 0
    } 
    division =
    { id       = { type = 9600 id = 208 }
      name     = "242nd Fighter Brigade"
      type     = interceptor
      strength = 100
      model    = 2
    } 
    division =
    { id       = { type = 9600 id = 209 }
      name     = "252nd Fighter Brigade"
      type     = multi_role
      strength = 100
      model    = 2
    } 
    division =
    { id       = { type = 9600 id = 210 }
      name     = "262nd Fighter Brigade"
      type     = interceptor
      strength = 100
      model    = 2
    } 
    division =
    { id       = { type = 9600 id = 211 }
      name     = "272nd Fighter Brigade"
      type     = interceptor
      strength = 100
      model    = 2
    }
  }
	airunit = { id = { type = 9600 id = 223 }
		location = 787
		base     = 787
		name     = "Central Air Transport Command"
		division = { id = { type = 9600 id = 224 } name = "516 Transport Brigade" type = transport_plane strength = 100 model = 1 }
                division = { id = { type = 9600 id = 225 } name = "520 Transport Brigade" type = transport_plane strength = 100 model = 1 }
	}
}
