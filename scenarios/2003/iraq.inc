
##############################
# Country definition for IRQ #
##############################

country =
{ tag                 = IRQ
  # Resource Reserves
  energy              = 500
  metal               = 300
  rare_materials      = 200
  oil                 = 1000
  supplies            = 1500
  manpower            = 49
  money               = 10
  capital             = 1034
  diplomacy           = { }
  nationalprovinces      = {  1036 1033 1034 1035 1037 1028 1032 1031 1030 1027 1029 1089 1041  } 
   ownedprovinces         = {  1036 1033 1034 1035 1037 1028 1032 1031 1030 1027 1029  } 
   controlledprovinces    = {  1036 1033 1034 1035 1037 1028 1032 1031 1030 1027 1029  }
  techapps            = {
                                        #Industry:
                                        5010
                                        5020
                                        5030
                                        5040
                                        5050
                                        5060
                                        5070
                                        5080
                                        5090
                                        #Army Equipment:
                                        2400
                                        2200
                                        2500
                                        2600
                                        2700
                                        2800
                                        #Army Organisation:
                                        1300
                                        1400
                                        1900
                                        1260
                                        1970
                                        #Army Doctrines:
                                        6100
                                        6110
                                        6160
                                        6010
                                        6020
                                        6910
                                        6600
                                        6610
                        }
  policy =
  { date              = { year = 0 month = march day = 0 }
    democratic        = 1
    political_left    = 4
    free_market       = 3
    freedom           = 1
    professional_army = 4
    defense_lobby     = 10
    interventionism   = 5
  }
  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 12600 id = 1 }
    location = 1033
    name     = "1st Republican Guard Corps"
    division =
    { id       = { type = 12600 id = 2 }
      name     = "2nd 'Al Medina' Armored Division"
      strength = 100
      type     = armor
      model    = 3
	  locked = yes
    }
    division =
    { id       = { type = 12600 id = 3 }
      name     = "5th 'Baghdad' Mechanized Division"
      strength = 100
      type     = infantry
      model    = 1
	  locked = yes
    }
    division =
    { id       = { type = 12600 id = 4 }
      name     = "7th 'Adnan' Infantry Division"
      strength = 100
      type     = motorized
      model    = 1
	  locked = yes
    }
  }
  landunit =
  { id       = { type = 12600 id = 5 }
    location = 1037
    name     = "2nd Republican Guard Corps "
    division =
    { id       = { type = 12600 id = 6 }
      name     = "'Al Nida' Armored Division"
      strength = 100
      type     = armor
      model    = 3
	  locked = yes
    }
    division =
    { id       = { type = 12600 id = 7 }
      name     = "1st 'Hammurabi' Armored Division"
      strength = 100
      type     = armor
      model    = 1
	  locked = yes
    }
    division =
    { id       = { type = 12600 id = 8 }
      name     = "6th 'Nebuchadnezzer' Mechanized Division"
      strength = 100
      type     = infantry
      model    = 1
	  locked = yes
    }
  }
  landunit =
  { id       = { type = 12600 id = 9 }
    location = 1034
    name     = "Special Republican Guard"
    division =
    { id       = { type = 12600 id = 10 }
      name     = "1st Brigade"
      strength = 100
      type     = garrison
      model    = 1
	  locked = yes
    }
    division =
    { id       = { type = 12600 id = 11 }
      name     = "2nd Brigade"
      strength = 100
      type     = mechanized
      model    = 1
	  locked = yes
    }
    division =
    { id       = { type = 12600 id = 12 }
      name     = "3rd Brigade"
      strength = 100
      type     = mechanized
      model    = 1
	  locked = yes
    }
    division =
    { id       = { type = 12600 id = 13 }
      name     = "4th Brigade"
      strength = 100
      type     = light_armor
      model    = 3
	  locked = yes
    }
  }
  landunit =
  { id       = { type = 12600 id = 14 }
    location = 1034
    name     = "1st Corps"
    division =
    { id       = { type = 12600 id = 15 }
      name     = "5th Mechanized Division"
      strength = 100
      type     = infantry
      model    = 1
	  locked = yes
    }
    division =
    { id       = { type = 12600 id = 16 }
      name     = "2nd Infantry Division"
      strength = 100
      type     = motorized
      model    = 1
	  locked = yes
    }
    division =
    { id       = { type = 12600 id = 17 }
      name     = "8th Infantry Division"
      strength = 100
      type     = motorized
      model    = 1
	  locked = yes
    }
    division =
    { id       = { type = 12600 id = 18 }
      name     = "38th Infantry Division"
      strength = 100
      type     = motorized
      model    = 1
	  locked = yes
    }
  }
  landunit =
  { id       = { type = 12600 id = 19 }
    location = 1035
    name     = "2nd Corps"
    division =
    { id       = { type = 12600 id = 20 }
      name     = "3rd Armored Division"
      strength = 100
      type     = armor
      model    = 3
	  locked = yes
    }
    division =
    { id       = { type = 12600 id = 21 }
      name     = "15th Infantry Division"
      strength = 100
      type     = motorized
      model    = 1
	  locked = yes
    }
    division =
    { id       = { type = 12600 id = 22 }
      name     = "34th Infantry Division"
      strength = 100
      type     = motorized
      model    = 1
	  locked = yes
    }
  }
  landunit =
  { id       = { type = 12600 id = 23 }
    location = 1028
    name     = "3rd Corps"
    division =
    { id       = { type = 12600 id = 24 }
      name     = "6th Armored Division"
      strength = 100
      type     = armor
      model    = 3
	  locked = yes
	   }
    division =
    { id       = { type = 12600 id = 25 }
      name     = "51st Mechanized Division"
      strength = 100
      type     = infantry
      model    = 1
	locked = yes  
    }
    division =
    { id       = { type = 12600 id = 26 }
      name     = "11th Infantry Division"
      strength = 100
      type     = motorized
      model    = 1
	  locked = yes
    }
  }
  landunit =
  { id       = { type = 12600 id = 27 }
    location = 1037
    name     = "4th Corps"
    division =
    { id       = { type = 12600 id = 28 }
      name     = "10th Armored Division"
      strength = 100
      type     = armor
      model    = 3
	 locked = yes 
    }
    division =
    { id       = { type = 12600 id = 29 }
      name     = "14th Infantry Division"
      strength = 100
      type     = motorized
      model    = 1
	 locked = yes 
    }
    division =
    { id       = { type = 12600 id = 30 }
      name     = "18th Infantry Division"
      strength = 100
      type     = motorized
      model    = 1
	 locked = yes 
    }
  }
  landunit =
  { id       = { type = 12600 id = 31 }
    location = 1028
    name     = "5th Corps"
    division =
    { id       = { type = 12600 id = 32 }
      name     = "1st Mechanized Division"
      strength = 100
      type     = infantry
      model    = 1
	 locked = yes
    }
    division =
    { id       = { type = 12600 id = 33 }
      name     = "4th Infantry Division"
      strength = 100
      type     = motorized
      model    = 1
	 locked = yes 
    }
    division =
    { id       = { type = 12600 id = 34 }
      name     = "7th Infantry Division"
      strength = 100
      type     = motorized
      model    = 1
	 locked = yes 
    }
    division =
    { id       = { type = 12600 id = 35 }
      name     = "16th Infantry Division"
      strength = 100
      type     = motorized
      model    = 1
	  locked = yes
    }
  }
  landunit =
  { id       = { type = 12600 id = 36 }
    location = 1032
    name     = "15th Corps"
    division =
    { id       = { type = 12600 id = 37 }
      name     = "1st Mechanized Division"
      strength = 100
      type     = infantry
      model    = 1
	  
    }
    division =
    { id       = { type = 12600 id = 38 }
      name     = "14th Infantry Division"
      strength = 100
      type     = motorized
      model    = 1
	  }
    }
}
