lostNummbers = [4,8,15,16,23,42]

h=head lostNummbers

t=tail lostNummbers

xnw=replicate 2 lostNummbers

--HEAD AND TAIL

-- one common task is append lists togethere its done using  ++ 

ex1=take 10 [2,4..]

pr1=[x*2 | x<- [1..10], x*2>=12]

pr2=[x | x<-[50..100],x `mod` 7 ==3]

boombang xs=[if x < 10 then "Boom!" else "Bang!" | x<- xs,odd x]

pr3 = [x | x<-[1..100],x /=13,x/=15,x/=19]

length' xs =sum [1 | _ <-xs]   --length function

removeNonUppercase st = [ c | c<-st, c `elem` ['A'..'Z']]