--  feel of functions

doubleMe x = x + x

--doubleUs x y = x*2 + y*2

--now redifing doubleUS Using doubleMe

doubleUs x y = doubleMe x + doubleMe y


doubleSmallNumber x = if x > 100
                      then x 
					  else x*2